#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	test_entire_set_in_string()
{
    char *set = "*";
    char *s1 = "***";

    char *res = ft_strtrim(s1, set);
    assert(ft_strlen(res) == 0);
    free(res);
}

void	test_empty_string()
{
    char *set = "*";
    char *s1 = "";

    char *res = ft_strtrim(s1, set);
    assert(ft_strlen(res) == 0);
    free(res);
}

void	test_empty_set()
{
    char *set = "";
    char *s1 = "abc";

    char *res = ft_strtrim(s1, set);
    assert(ft_strlen(res) == 3);
    assert(res[0] == 'a');
    assert(res[1] == 'b');
    assert(res[2] == 'c');
    free(res);
}

void	test_trim_start()
{
    char *set = "*";
    char *s1 = "**abc";

    char *res = ft_strtrim(s1, set);
    assert(ft_strlen(res) == 3);
    assert(res[0] == 'a');
    assert(res[1] == 'b');
    assert(res[2] == 'c');
    free(res);
}

void	test_trim_end()
{
    char *set = "*";
    char *s1 = "abc**";

    char *res = ft_strtrim(s1, set);
    assert(ft_strlen(res) == 3);
    assert(res[0] == 'a');
    assert(res[1] == 'b');
    assert(res[2] == 'c');
    free(res);
}

void	test_multiple_chars_in_set()
{
    char *set = "*-";
    char *s1 = "*-abc*-";

    char *res = ft_strtrim(s1, set);
    assert(ft_strlen(res) == 3);
    assert(res[0] == 'a');
    assert(res[1] == 'b');
    assert(res[2] == 'c');
    free(res);
}

int	main(void)
{
    test_entire_set_in_string(); 
    test_empty_set();
    test_empty_string();
    test_trim_start();
    test_trim_end();
    test_multiple_chars_in_set();

    printf("\033[0;32m[PASS]\033[0m ft_strtrim\n");
    return (0);
}
