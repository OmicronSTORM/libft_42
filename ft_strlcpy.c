/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:13:24 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/24 15:27:30 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libc.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while ((i < dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int main()
{
    const char  *src;
    
    char        dst[3];
    size_t      dstsize;
    char        *str;

    dstsize = 0;
    src = "coucou\0";
    printf("%zu\n%s\n", ft_strlcpy(dst, src, dstsize), dst);
    printf("%lu\n%s\n", strlcpy(dst, src, dstsize), dst);
    str = "coucou";
    str++;
    str++;
    return (0);
}*/