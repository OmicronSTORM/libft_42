/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:16:58 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/23 15:29:36 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	i = 0;
	tmp_s = (unsigned char *)s;
	while (tmp_s[i] && i < n)
	{
		if (tmp_s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	if (c == '\0')
		return (0);
	return (0);
}

/*
int main()
{
    printf("%s\n", ft_memchr("le vid1e est rempli", '1', 10));
    //printf("%s\n", memchr("le vid1e est rempli", '1', 10));
    return(0);
}*/