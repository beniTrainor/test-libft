#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int		fd;
	char	c[2];

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	fd = open("/tmp/ft_putchar_fd-test.txt", O_WRONLY | O_CREAT | O_TRUNC, mode);
	ft_putchar_fd('2', fd);
	close(fd);

	fd = open("/tmp/ft_putchar_fd-test.txt", O_RDONLY);
	read(fd, c, 1);
	close(fd);

	assert(c[0] == '2');

	printf("\033[0;32m[PASS]\033[0m ft_putchar_fd\n");
	return (0);
}
