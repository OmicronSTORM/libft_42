/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:51:40 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/30 18:19:37 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*mem;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	mem = malloc(sizeof(char) * size + 1);
	if (!mem)
		return (0);
	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

/*int main()
{
    char str[] = "Justin";
    printf("%s\n%s\n\n", str, ft_strdup(str));
    printf("%s\n%s\n\n", str, strdup(str));
    return(0);
}*/