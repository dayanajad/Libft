// .main.c (for personal testing only - do NOT submit this file)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    // === ft_isalpha ===
    printf("Testing ft_isalpha...\n");
    printf("ft_isalpha('a') = %d (expected: 1)\n", ft_isalpha('a'));
    printf("ft_isalpha('1') = %d (expected: 0)\n\n", ft_isalpha('1'));

    // === ft_isdigit ===
    printf("Testing ft_isdigit...\n");
    printf("ft_isdigit('5') = %d (expected: 1)\n", ft_isdigit('5'));
    printf("ft_isdigit('a') = %d (expected: 0)\n\n", ft_isdigit('a'));

    // === ft_isalnum ===
    printf("Testing ft_isalnum...\n");
    printf("ft_isalnum('a') = %d (expected: 1)\n", ft_isalnum('a'));
    printf("ft_isalnum('$') = %d (expected: 0)\n\n", ft_isalnum('$'));

    // === ft_isascii ===
    printf("Testing ft_isascii...\n");
    printf("ft_isascii(65) = %d (expected: 1)\n", ft_isascii(65));
    printf("ft_isascii(200) = %d (expected: 0)\n\n", ft_isascii(200));

    // === ft_isprint ===
    printf("Testing ft_isprint...\n");
    printf("ft_isprint(' ') = %d (expected: 1)\n", ft_isprint(' '));
    printf("ft_isprint(127) = %d (expected: 0)\n\n", ft_isprint(127));

    // === ft_strlen ===
    printf("Testing ft_strlen...\n");
    printf("ft_strlen(\"hello\") = %zu (expected: 5)\n\n", ft_strlen("hello"));

    // === ft_memset ===
    printf("Testing ft_memset...\n");
    char buf1[10] = "abcdefghi";
    ft_memset(buf1, 'x', 4);
    printf("ft_memset result = %s (expected: xxxxefghi)\n\n", buf1);

    // === ft_bzero ===
    printf("Testing ft_bzero...\n");
    char buf2[10] = "abcdefghi";
    ft_bzero(buf2, 4);
    printf("ft_bzero result (show from index 4) = %s (expected: efghi)\n\n", buf2 + 4);

    // === ft_memcpy ===
    printf("Testing ft_memcpy...\n");
    char src1[] = "12345";
    char dst1[6];
    ft_memcpy(dst1, src1, 6);
    printf("ft_memcpy result = %s (expected: 12345)\n\n", dst1);

    // === ft_memmove ===
    printf("Testing ft_memmove...\n");
    char str1[] = "abcdef";
    ft_memmove(str1 + 2, str1, 4);
    printf("ft_memmove result = %s (expected: ababcd)\n\n", str1);

    // === ft_strlcpy ===
    printf("Testing ft_strlcpy...\n");
    char src2[] = "hello";
    char dst2[10];
    printf("ft_strlcpy = %zu (expected: 5)\n\n", ft_strlcpy(dst2, src2, sizeof(dst2)));

    // === ft_strlcat ===
    printf("Testing ft_strlcat...\n");
    char dest3[20] = "Hi ";
    printf("ft_strlcat = %zu (expected: 8)\n", ft_strlcat(dest3, "there", 20));
    printf("Result = %s (expected: Hi there)\n\n", dest3);

    // === ft_toupper ===
    printf("Testing ft_toupper...\n");
    printf("ft_toupper('a') = %c (expected: A)\n\n", ft_toupper('a'));

    // === ft_tolower ===
    printf("Testing ft_tolower...\n");
    printf("ft_tolower('A') = %c (expected: a)\n\n", ft_tolower('A'));

    // === ft_strchr ===
    printf("Testing ft_strchr...\n");
    printf("ft_strchr = %s (expected: ello)\n\n", ft_strchr("hello", 'e'));

    // === ft_strrchr ===
    printf("Testing ft_strrchr...\n");
    printf("ft_strrchr = %s (expected: lo)\n\n", ft_strrchr("hello", 'l'));

    // === ft_strncmp ===
    printf("Testing ft_strncmp...\n");
    printf("ft_strncmp = %d (expected: 0)\n\n", ft_strncmp("abc", "abd", 2));

    // === ft_memchr ===
    printf("Testing ft_memchr...\n");
    printf("ft_memchr = %s (expected: bc)\n\n", (char *)ft_memchr("abc", 'b', 3));

    // === ft_memcmp ===
    printf("Testing ft_memcmp...\n");
    printf("ft_memcmp = %d (expected: 0)\n\n", ft_memcmp("abc", "abc", 3));

    // === ft_strnstr ===
    printf("Testing ft_strnstr...\n");
    printf("ft_strnstr = %s (expected: world)\n\n", ft_strnstr("hello world", "world", 11));

    // === ft_atoi ===
    printf("Testing ft_atoi...\n");
    printf("ft_atoi = %d (expected: 42)\n\n", ft_atoi("42"));

    // === ft_calloc ===
    printf("Testing ft_calloc...\n");
    int *arr = (int *)ft_calloc(4, sizeof(int));
    if (arr)
    {
        for (int i = 0; i < 4; i++)
            printf("arr[%d] = %d (expected: 0)\n", i, arr[i]);
        free(arr);
    }
    printf("\n");

    // === ft_strdup ===
    printf("Testing ft_strdup...\n");
    char *dup = ft_strdup("libft");
    printf("ft_strdup = %s (expected: libft)\n\n", dup);
    free(dup);

    // === ft_substr ===
    printf("Testing ft_substr...\n");
    char *substr = ft_substr("libftproject", 5, 3);
    printf("ft_substr = %s (expected: pro)\n\n", substr);
    free(substr);

    // === ft_strjoin ===
    printf("Testing ft_strjoin...\n");
    char *joined = ft_strjoin("libft", "project");
    printf("ft_strjoin = %s (expected: libftproject)\n\n", joined);
    free(joined);

    // === ft_strtrim ===
    printf("Testing ft_strtrim...\n");
    char *trimmed = ft_strtrim("--hello--", "-");
    printf("ft_strtrim = %s (expected: hello)\n\n", trimmed);
    free(trimmed);

    // === ft_split ===
    printf("Testing ft_split...\n");
    char **split = ft_split("a,b,c", ',');
    for (int i = 0; split[i]; i++)
        printf("split[%d] = %s (expected: %c)\n", i, split[i], 'a' + i);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");

    // === ft_itoa ===
    printf("Testing ft_itoa...\n");
    char *itoa = ft_itoa(-42);
    printf("ft_itoa = %s (expected: -42)\n\n", itoa);
    free(itoa);

    // === ft_putchar_fd ===
    printf("Testing ft_putchar_fd...\nExpected output: X\n");
    ft_putchar_fd('X', 1);
    printf("\n\n");

    // === ft_putstr_fd ===
    printf("Testing ft_putstr_fd...\nExpected output: Hello FD\n");
    ft_putstr_fd("Hello FD\n\n", 1);

    // === ft_putendl_fd ===
    printf("Testing ft_putendl_fd...\nExpected output:\nEnd of Line\n>>>\n");
	write(1, "Result:\n", 8);
    ft_putendl_fd("End of Line", 1);
	write(1, ">>>\n\n", 5);

    // === ft_putnbr_fd ===
    printf("Testing ft_putnbr_fd...\nExpected output: 12345\n");
    ft_putnbr_fd(12345, 1);
    printf("\n\n");

    return 0;
}

