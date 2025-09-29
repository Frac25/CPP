#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int	ft_nbdigit(int n)
{
	int				i;
	unsigned int	m;

	i = 0;
	if (n < 0)
	{
		m = -n;
		i++;
	}
	else
		m = n;
	if (m == 0)
		i++;
	while (m > 0)
	{
		m = m / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				i;
	int				neg;
	unsigned int	m;

	i = ft_nbdigit(n);
	neg = 0;
	s = malloc(sizeof(char) * (ft_nbdigit(n)) + 1);
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		s[0] = '-';
		m = -n;
	}
	else
		m = n;
	s[i--] = '\0';
	while (i >= neg)
	{
		s[i--] = (m % 10) + 48;
		m = m / 10;
	}
	return (s);
}
