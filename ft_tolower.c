/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:53:58 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/23 15:50:05 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%c\n", ft_tolower('V'));
    printf("%c\n", tolower('V'));
    return(0);
}*/