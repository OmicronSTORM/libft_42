/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:35:41 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/11 15:06:52 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *list;

    list = lst;
    if (!list)
        return (list);
    while (list)
    {
        if (list != NULL)
        {
            list = list->next;
        }
        return (list);
    }
    return (NULL);
}