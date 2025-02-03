/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:46:30 by jowoundi          #+#    #+#             */
/*   Updated: 2025/01/28 16:07:05 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin_gnl(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*final_string;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (free(s1), NULL);
	final_string = malloc(sizeof(char) * (ft_strlen_gnl(s1)
				+ ft_strlen_gnl(s2) + 1));
	if (!final_string)
		return (free(s1), NULL);
	while (s1[i])
	{
		final_string[i] = s1[i];
		i++;
	}
	while (s2[j])
		final_string[i++] = s2[j++];
	final_string[i] = '\0';
	free(s1);
	return (final_string);
}

char	*ft_strchr_gnl(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}

char	*ft_strdup_gnl(const char *s1)
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
