/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaidi <akaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:01:55 by akaidi            #+#    #+#             */
/*   Updated: 2026/10/20 21:48:02 by akaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (count);
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static size_t	word_len(char const *s, size_t start, char c)
{
	size_t	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	return (len);
}

static void	free_all(char **str, size_t n)
{
	while (n--)
		free(str[n]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	start;
	size_t	len;

	if (!s)
		return (NULL);
	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	start = 0;
	while (i < count_words(s, c))
	{
		while (s[start] == c)
			start++;
		len = word_len(s, start, c);
		str[i] = ft_substr(s, start, len);
		if (!str[i])
			return (free_all(str, i), NULL);
		start += len;
		i++;
	}
	str[i] = NULL;
	return (str);
}
