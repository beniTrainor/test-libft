#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	int		fd;
	char	s[6];

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	fd = open("/tmp/ft_putnbr_fd-test.txt", O_WRONLY | O_CREAT | O_TRUNC, mode);
	ft_putnbr_fd(12341, fd);
	close(fd);

	fd = open("/tmp/ft_putnbr_fd-test.txt", O_RDONLY);
	read(fd, s, 6);
	close(fd);

	assert(s[0] == '1');
	assert(s[1] == '2');
	assert(s[2] == '3');
	assert(s[3] == '4');
	assert(s[4] == '1');
	assert(s[5] == '\0');

	printf("\033[0;32m[PASS]\033[0m ft_putnbr_fd\n");
	return (0);
}
