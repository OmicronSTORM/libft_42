/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:06:14 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/02 18:34:26 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tri(char const *sup, int c)
{
	int	i;

	i = 0;
	while (sup[i])
	{
		if (sup[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (0);
	while (tri(set, s1[start]))
		start++;
	while (tri(set, s1[end - 1]))
		end--;
	res = malloc(sizeof(char *) * (end - start + 1));
	if (!res)
		return (0);
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

/*int	main()
{
	printf("%s", ft_strtrim("adhdjustinadhdaadh", "adh"));
	return (0);
}*/