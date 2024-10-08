#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (2048);
    }
    return (0);
}

int ft_isspace(char c)
{
    if (c == '\f' || c == '\n' || c == '\t' || c == '\v' || c == '\r' || c == ' ')
    {
        return (1);
    }
    return (0);
}
int ft_atoi(const char *nptr)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*nptr && ft_isspace(*nptr))
    {
        nptr++;
    }
    if (*nptr == '-' || *nptr == '+')
    {
        if (*nptr == '-')
        {
            sign = -1;
        }
        nptr++;
    }
    while (*nptr && ft_isdigit(*nptr))
    {
        result = result * 10 + *nptr - 48;
        nptr++;
    }
    return (result * sign);
}

int main()
{
    printf("%d",ft_atoi("-2147483648"));
}