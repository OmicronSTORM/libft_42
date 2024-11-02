/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:40:11 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/02 18:19:01 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	overflow_return(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

int	ft_atoi(char *str)
{
	int			i;
	long long	res;
	int			sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * 10 < 0)
			return (overflow_return(sign));
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (sign * res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	int	i = 1;

// 	(void)ac;
// 	while (av[i])
// 	{
// 		printf("Mon atoi: %d\n", ft_atoi(av[i]));
// 		printf("VRAI atoi: %d\n", atoi(av[i]));
// 		i++;
// 	}
// }