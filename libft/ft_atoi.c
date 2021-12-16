/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:24:10 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 09:40:24 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static _Bool	ft_isspace(const char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (true);
	return (false);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		res;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += (*str - 48);
		str++;
	}
	return (res * sign);
} */

int	skip_whitespaces(const char *str, int *ptr_i)
{
	int		i;
	int		j;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	j = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	*ptr_i = i;
	return (j);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	if (skip_whitespaces(str, &i) % 2)
		sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return (0);
}*/
