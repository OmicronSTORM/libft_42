/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:17:52 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/12 16:29:13 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *index_list;

	index_list = (*lst)->next;
	while (lst)
	{
		while (*lst)
		{
			ft_lstdelone(*lst, del);
			index_list = (*lst)->next;
			(*lst) = index_list;
		}
	}
}