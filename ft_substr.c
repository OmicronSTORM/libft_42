/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:37:45 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/25 21:14:25 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_string;

	i = 0;
	if(!s)
		return (0);
	while (start != ft_strlen(s))
		i++;
	while (s[i] && i < len)
	{
		
	}
}