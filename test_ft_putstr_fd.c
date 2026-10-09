#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	int		fd;
	char	c[6];

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	fd = open("/tmp/ft_putstr_fd-test.txt", O_WRONLY | O_CREAT | O_TRUNC, mode);
	ft_putstr_fd("Hello", fd);
	close(fd);

	fd = open("/tmp/ft_putstr_fd-test.txt", O_RDONLY);
	read(fd, c, 6);
	close(fd);

	assert(c[0] == 'H');
	assert(c[1] == 'e');
	assert(c[2] == 'l');
	assert(c[3] == 'l');
	assert(c[4] == 'o');
	assert(c[5] == '\0');

	printf("\033[0;32m[PASS]\033[0m ft_putstr_fd\n");
	return (0);
}
