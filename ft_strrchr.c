/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaidi <akaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:18:32 by akaidi            #+#    #+#             */
/*   Updated: 2026/10/16 14:38:13 by akaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	size_t		i;

	p = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = &s[i];
		i++;
	}
	if (s[i] == (char)c)
		p = &s[i];
	return ((char *)p);
}
