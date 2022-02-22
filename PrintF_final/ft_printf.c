/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:36:43 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/22 16:13:16 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(const char *s, t_printf *tab, int i);

int	ft_printf(const char *s, ...)
{
	t_printf	*tab;
	int			count;
	int			i;

	tab = malloc(sizeof(t_printf));
	if (!tab)
		return (0);
	tab->count = 0;
	va_start(tab->args, s);
	count = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] != '%')
			count += write(1, &s[i], 1);
		else
		{
			i++;
			ft_format(s, tab, i);
		}
	}
	count += tab->count;
	va_end(tab->args);
	free(tab);
	return (count);
}

void	ft_format(const char *s, t_printf *tab, int i)
{
	if (s[i] == 'c')
		ft_format_c(tab);
	else if (s[i] == 's')
		ft_format_s(tab);
	else if (s[i] == 'p')
		ft_format_p(tab);
	else if (s[i] == 'd')
		ft_format_d(tab);
	else if (s[i] == 'i')
		ft_format_i(tab);
	else if (s[i] == 'u')
		ft_format_u(tab);
	else if (s[i] == 'x')
		ft_format_x(tab);
	else if (s[i] == 'X')
		ft_format_x_maj(tab);
	else if (s[i] == '%')
	tab->count += write(1, "%", 1);
	else
	tab->count += write(1, &s[i], 1);
}

/*int	main()
{
	char	str[] = "hello";
	int o = 3182;
	int	print;
	int	myprint;
	print = printf("%s %d\n", str, o);
	myprint = ft_printf("%s %d\n", str, o);
	printf("VRAI:%s %d\n", str, o);
	ft_printf("MOII:%s %d\n", str, o);
	printf("Valeur de Retour Vrai : %d\n", print);
	printf("Valeur de Retour MOI : %d\n", myprint); 
} */

/* int    main()
{
    //int res;
    //int bot;
    //res = ft_printf("%x\n", 42);
    //bot = printf("%x\n", 42);
    int res1;
    int bot1;
    res1 = ft_printf("%d\n", 56);
    bot1 = printf("%d\n", 56);
    int res2;
    int bot2;
    res2 = ft_printf("%s\n", "houlalala");
    bot2 = printf("%s\n", "houlalala");
    int res3;
    int bot3;
    res3 = ft_printf("%s\n", "32f2e234de");
    bot3 = printf("%s\n", "32f2e234de");
    //printf("resultat perso %d\nresultat ordi %d\n", res, bot);
    printf("resultat perso1 %d\nresultat ordi1 %d\n", res1, bot1);
    printf("resultat perso2 %d\nresultat ordi2 %d\n", res2, bot2);
    printf("resultat perso3 %d\nresultat ordi3 %d\n", res3, bot3);
    printf("resultat pnt %p\nresultat pnt %p\n", &res3, &bot3);
    return (0);
} */