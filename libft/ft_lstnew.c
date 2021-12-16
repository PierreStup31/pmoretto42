/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:34:25 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 10:07:25 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_content;

	new_content = malloc(sizeof(t_list));
	if (new_content == NULL)
		return (NULL);
	new_content->next = NULL;
	new_content->content = content;
	return (new_content);
}
