#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        ft_putstr_fd("-2147483648",fd);
        return;
    }
        if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    ft_putchar_fd((n % 10) + '0', fd);
    /*
    else if(n < 0)
    {
        n *= -1;
        ft_putchar_fd('-',fd);
        ft_putnbr_fd(n,fd);
    }
    else if ( n >= 10)
    {
        ft_putnbr_fd((n / 10),fd);
        ft_putnbr_fd((n % 10),fd);
    }
    else
        ft_putchar_fd((n + 48),fd);*/
}