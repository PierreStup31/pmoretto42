/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:11:06 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 18:17:08 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenleen_base(unsigned int n, int base)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
	len = 1;
	}
	while (n != 0)
	{
	len++;
	n = n / base;
	}
	return (len);
}

char	*ft_convert_base(unsigned int num, size_t len, char *str, int base)
{
	while (num > 0)
	{
		if (num % base > 9)
			str[len--] = 87 + (num % base);
		else
			str[len--] = 48 + (num % base);
		num = num / base;
	}
	return (str);
}

char	*ft_itoa_base(unsigned int n, int base)
{
	unsigned int	num;
	char			*str;
	size_t			len;

	len = ft_lenleen_base(n, base);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
	{
	str[0] = '0';
	}
	else
	num = n;
	str = ft_convert_base(n, len, str, base);
	return (str);
}

/* int main(int ac, const char **av)
{
	if (ac == 3)
	{
		printf("itoa : %s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));
	}
	return (0);
} */ 