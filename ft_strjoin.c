/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 01:28:33 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/26 14:10:55 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*final_string;

	i = 0;
	j = 0;
	final_string = malloc(sizeof(char *) * ( ft_strlen((char *)s1) 
					+ ft_strlen((char *)s2)));
	if (!final_string)
		return (0);
	while (s1[i] - 1)
	{
		final_string[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		final_string[i] = s2[j];
		i++;
		j++;
	}
	return (final_string);
}

int	main()
{
	printf("%s", ft_strjoin("Justin ", "Owoundi Nlate"));
	return (0);
}