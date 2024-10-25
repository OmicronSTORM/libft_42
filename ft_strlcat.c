/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:04:01 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/24 19:28:28 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;

	i = 0;
	j = 0;
	len_d = ft_strlen(dst);
	while (dst[i])
		i++;
	if (dstsize <= i)
		return (ft_strlen((char *)src) + dstsize);
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src) + len_d);
}

// int main()
// {
//     const char src[] = "a";
//     char dst[] = "lorem";
//     size_t dstsize;
//
//     dstsize = 15;
//     printf("%zu\n%s\n", ft_strlcat(dst, src, dstsize), dst);
//     printf("%lu\n%s\n", strlcat(dst, src, dstsize), dst);
//     return(0);
// }