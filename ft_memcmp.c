/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:14:16 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/23 15:31:02 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	size_t			i;

	tmp_s1 = ((unsigned char *)s1);
	tmp_s2 = ((unsigned char *)s2);
	i = 0;
	while (tmp_s1[i] && tmp_s2[i] && tmp_s1[i] == tmp_s2[i] && (i < n))
		i++;
	if (i == n)
		return (0);
	return (tmp_s1[i] - tmp_s2[i]);
}

/*int main()
{
    printf("%d\n", ft_memcmp("b", "a", 7));
    printf("%d\n", memcmp("b", "a", 7));
    return(0);
}*/