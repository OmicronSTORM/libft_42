/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:17:37 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/23 15:18:55 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <libc.h>

int main(void)
{
    char str[] = "Bien le bonjour peuple";
    ft_bzero(str, 5);
    printf("%s\n", str);
    printf("%s\n", bzero(str, 5));
}*/