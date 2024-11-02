/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:04:00 by jowoundi          #+#    #+#             */
/*   Updated: 2024/11/02 18:31:48 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
			word++;
		while (str[i] != c && str[i])
			i++;
	}
	return (word);
}

static char	**alloc(char const *str, char c)
{
	char	**ptr_alloc;

	ptr_alloc = malloc(sizeof(char *) * count_word(str, c) + 1);
	if (!ptr_alloc)
		return (0);
	return (ptr_alloc);
}

static char	*dup_word(char const *str, int start, char c)
{
	int		i;
	char	*result;
	size_t	len_word;

	i = start;
	len_word = 0;
	while (str[i] != c && str[i])
	{
		len_word++;
		i++;
	}
	i = 0;
	result = malloc(sizeof(char) * (len_word + 1));
	if (!result)
		return (0);
	while (str[start] != c && str[start])
	{
		result[i] = str[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

static char	**ft_free(char **pointer, size_t index)
{
	while (index > 0)
		free (pointer[--index]);
	free (pointer);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i_word;
	size_t	i_tab;
	char	**tab;

	i_word = 0;
	i_tab = 0;
	tab = alloc(s, c);
	if (!tab)
		return (0);
	while (s[i_word])
	{
		while (s[i_word] == c && s[i_word])
			i_word++;
		if (s[i_word])
		{
			tab[i_tab] = dup_word(s, i_word, c);
			if (!tab[i_tab])
				return (ft_free(tab, i_tab));
			i_tab++;
			while (s[i_word] != c && s[i_word])
				i_word++;
		}
	}
	tab[i_tab] = NULL;
	return (tab);
}

// int	main()
// {
// 	char const str[] = "Bien le bonjour";
// 	char c = ' ';
// 	char **result;
// 	result = ft_split(str, c);
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }