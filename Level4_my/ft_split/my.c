#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//no need to free the memory that you allocated

char **ft_split(char *str)
{
	char *current;
	char **split = malloc(1024);
	int i = 0;
	while(*str && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	while(*str)
	{
		split[i] = malloc(1024);
		current = split[i];
		while(*str != ' ' && *str != '\n' && *str)
			*current++ = *str++;
		while(*str == ' ' || *str == '\n')
			str += 1;
		*current = '\0';
		i++;
	}
	split[i] = NULL;
	return split;
}

// char    **ft_split(char *str)
// {
//     char **split = malloc(1024);
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     char *word;
//     while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
//         i++;
//     while (str[i])
//     {
//         split[j] = malloc(1024);
//         word = split[j];
// 		k = 0;
//         while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
//             word[k++] = str[i++];
//         while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
//             i++;
//         word[k] = '\0';
//         j++;
//     }
// 	split[j] = NULL;
//     return (split);
// }

int main()
{
	char **split = ft_split("This			  split is    \n    tbh        easy       :)   ");
	while(*split)
	{
		printf("%s\n", *split++);
	}
	free(*split);
}