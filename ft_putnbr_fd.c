#include "libft.h"
#include <unistd.h>

void	ft_putchr_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n != -2147483648)
	{
		if (n < 0)
		{
			ft_putchr_fd((char)"-", fd);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchr_fd(n + '0', fd);
	}
}
