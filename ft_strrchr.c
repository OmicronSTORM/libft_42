/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:04:29 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/24 18:21:06 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i != 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	if (i == 0 && s[i] != (unsigned char)c)
	{
		return (0);
	}
	return ((char *)s + i);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     printf("%s\n", ft_strrchr("abbbbbbbb", 'a'));
//     printf("%s\n", strrchr("abbbbbbbb", 'a'));
//     return(0);
// }