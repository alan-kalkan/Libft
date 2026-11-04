#include "libft.h"
#include <bsd/string.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	main(void)
{
    char s1[20] = "test de fonction";
    char s2[20] = "de";
    char *res;

    // Test 1 : 'de' est plus loin que les 5 premiers caractères -> Doit renvoyer NULL
    res = strnstr(s1, s2, 5);
    printf("Test 1 (len=5)  : %s\n", res ? res : "NULL");

    // Test 2 : On cherche sur 10 caractères -> Doit trouver 'de fonction'
    res = strnstr(s1, s2, 10);
    printf("Test 2 (len=10) : %s\n", res ? res : "NULL");

	res = ft_strnstr(s1, s2, 5);
    printf("Test 2 (len=10) : %s\n", res ? res : "NULL");

    return (0);
}
