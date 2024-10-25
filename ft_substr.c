/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:37:45 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/26 01:29:18 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_string;

	i = 0;
	j = start;
	if(!s)
		return (0);
	if (j > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s + j))
		len = (ft_strlen((char *)s + j));
	new_string = malloc(sizeof(char *) * (len + 1));
	if (!new_string)
		return (0);
	while (i < len)
	{
		new_string[i] = s[j + i];
		i++;
	}
	new_string[j] = '\0';
	return(new_string);
}

// int	main()
// {
// 	printf("%s\n", ft_substr("Bien le bonjour", 0, 10));
// 	return(0);
// }