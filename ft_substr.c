/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaidi <akaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:46:22 by akaidi            #+#    #+#             */
/*   Updated: 2026/10/19 14:19:24 by akaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	slen;
	size_t	n;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	n = 0;
	if (start < slen)
		n = slen - start;
	if (n > len)
		n = len;
	p = malloc((n + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
