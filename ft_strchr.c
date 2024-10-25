/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:06:15 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/23 15:39:21 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == (unsigned char)c)
			return ((char *)str + x);
		x++;
	}
	if (c == '\0')
		return ((char *)str + x);
	return (0);
}

/*#include <stdio.h>

int main()
{
    printf("%s", ft_strchr("eofef frgi fdfd lsl", '\0'));
    return(0);
}*/