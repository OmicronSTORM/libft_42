/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:04:00 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/02 14:49:45 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *str, char c)
{
	int	i;
	int	word;
	char

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
			word++;
		while (str[i] != c)
			i++;
	}
	return (word);
}

static char	*alloc(size_t ptr)
{
	char	**ptr_alloc;

	ptr_alloc = malloc(sizeof(char *) * count_word + 1);
	return(ptr_alloc);
}

static char	*dup_word(char const *str, char c)
{
	int 	i;
	char	*result;
	
	i = 0;
	
	}
	return(result);
}

char	**ft_split(char const *s, char c)
{
	
}