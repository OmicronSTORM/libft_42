/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:04:03 by jowoundi          #+#    #+#             */
/*   Updated: 2024/10/28 19:52:48 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_size(long number)
{
	size_t	pos;
	
	pos = 0;
	if (number < 0)
	{
		number *= -1;
		pos = 1;
	}
	if (number == 0)
		pos = 1;
	while (number)
	{
		number /= 10;
		pos++;
	}
	return(pos);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*res;
	long	number;
	
	number = n;
	i = count_size(n);
	res = malloc(sizeof(char *) * (i + 1));
	if (!res)
		return (0);
	if (number == 0)
		res[0] = '0';
	if (number < 0)
	{
		number *= -1;
		res[0] = '-';
	}
	res[i] = '\0';
	while (number >  0)
	{
		res[i - 1] = (number % 10) + '0';
		number /= 10;
		i--;
	}
	return (res);
}

// int main()
// {
// 	int nbr = 0;
// 	printf("%s\n", ft_itoa(nbr));
// 	return(0);
// }