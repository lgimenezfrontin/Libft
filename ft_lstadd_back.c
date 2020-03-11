/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:42:42 by lgimenez          #+#    #+#             */
/*   Updated: 2019/10/24 18:32:35 by lgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmplst;

	if (alst && new)
	{
		tmplst = ft_lstlast(*alst);
		new->next = NULL;
		if (tmplst == NULL)
			*alst = new;
		else
			tmplst->next = new;
	}
}
