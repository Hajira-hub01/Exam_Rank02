#include <unistd.h>

// WAY - 1

int main (int ac, char **av)
{
    int i;
    int repeat;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                repeat = av[1][i] - 'a' + 1;
                while(repeat != 0)
                {
                    write (1, &av[1][i], 1);
                    repeat--;
                }
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                repeat = av[1][i] - 'A' + 1;
                while(repeat != 0)
                {
                    write (1, &av[1][i], 1);
                    repeat--;
                }
            }
            i++;
        }
    }
    write (1, "\n", 1);
}

// WAY - 2

// int main (int ac, char **av)
// {
//     int i = 0;
//     int count = 0;

//     if (ac == 2)
//     {
//         while (av[1][i])
//         {
//             if (av[1][i] >= 'a' && av[1][i] <= 'z')
//                 count = av[1][i] - 'a' + 1;
//             else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
//                 count = av[1][i] - 'A' + 1;
//             else 
//                 count = 1;
//             while (count >= 1)
//             {
//                 write(1, &av[1][i], 1);
//                 count--;
//             }
//             i++;
//         }
//         write (1, "\n", 1);
//     }
// }

// WAY - 3

// int main(int ac, char **av)
// {
//     int i = 0;
//     int repeat = 0;
//     if (ac == 2)
//     {
//         while (av[1][i])
//         {
//             if (av[1][i] >= 'a' && av[1][i] <= 'z')
//                 repeat = av[1][i] - 'a' + 1;
//             else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
//                 repeat = av[1][i] - 'A' + 1;
//             while(repeat-- > 0)
//                 write(1, &av[1][i], 1);
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }