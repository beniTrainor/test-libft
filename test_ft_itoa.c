#include <assert.h>
#include <stdio.h>

char	*ft_itoa(int n);
//int	count_digits(int n);
//char	*ft_reverse(char *s);


//void	test_reverse(void)
//{
//    char s[] = "Hello";
//    char *r = ft_reverse(s);
//    assert(r[0] == 'o');
//    assert(r[1] == 'l');
//    assert(r[2] == 'l');
//    assert(r[3] == 'e');
//    assert(r[4] == 'H');
//}

//void	test_count_digits(void)
//{
//	assert(count_digits(123) == 3);
//	assert(count_digits(12) == 2);
//	assert(count_digits(10) == 2);
//	assert(count_digits(9) == 1);
//	assert(count_digits(1) == 1);
//	assert(count_digits(0) == 1);
//}

void	test_itoa(void)
{
	char *s1 = ft_itoa(123);
	assert(s1[0] == '1');
	assert(s1[1] == '2');
	assert(s1[2] == '3');
	assert(s1[3] == '\0');

	char *s2 = ft_itoa(0);
	assert(s2[0] == '0');
	assert(s2[1] == '\0');

	char *s3 = ft_itoa(-12);
	assert(s3[0] == '-');
	assert(s3[1] == '1');
	assert(s3[2] == '2');
	assert(s3[3] == '\0');

	char *s4 = ft_itoa(-2147483648);
	assert(s4[0] == '-');
	assert(s4[1] == '2');
	assert(s4[2] == '1');
	assert(s4[10] == '8');
	assert(s4[11] == '\0');

	char *s5 = ft_itoa(2147483647);
	assert(s5[0] == '2');
	assert(s5[1] == '1');
	assert(s5[9] == '7');
	assert(s5[10] == '\0');
}

int	main(void)
{
	//test_reverse();
	//test_count_digits();
	test_itoa();

	printf("\033[0;32m[PASS]\033[0m ft_itoa\n");
	return (0);
}
