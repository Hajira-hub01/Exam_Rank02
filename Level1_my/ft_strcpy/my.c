#include <stdio.h>

// WAY - 1

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

// WAY - 2

// char    *ft_strcpy(char *s1, char *s2)
// {
//     int i = -1;
//     while (s2[++i])
//         s1[i] = s2[i];
//     return (s1);
// }

int main ()
{
    char src [20] = "worlds";
    char dest[20] = "hello";
    printf("%s\n", ft_strcpy(dest, src));
}