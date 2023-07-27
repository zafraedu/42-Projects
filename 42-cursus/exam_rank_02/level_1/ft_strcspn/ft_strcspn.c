#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    const char *p1, *p2;

    for (p1 = s; *p1; ++p1) {
        for (p2 = reject; *p2; ++p2) {
            if (*p1 == *p2)
                return p1 - s;
        }
    }
    return p1 - s;
}
// size_t  ft_strcspn(const char *s, const char *reject)
// {
//     int     i = 0;
//     int     j = 0;

//     while (s[i] != '\0')
//     {
// 		j = 0;
//         while (reject[j] != '\0')
//         {
//             if(s[i] == reject[j])
//                 return (i);
//             j++;
//         }
//         i++;
//     }
//     return (i);
// }
