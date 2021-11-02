/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:18:25 by pmoretto          #+#    #+#             */
/*   Updated: 2021/10/27 12:06:58 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *c)
{
	int	dcp;

	dcp = 0;
	while (c[dcp] != '\0')
	{
		dcp++;
		
	}
	return (dcp);
}

/*int	main(void)
{
	char *str;
	
	str = "Salut";
	ft_strlen(str);//fonction pour decompte et boucle
	printf("%d", ft_strlen(str));
}*/
