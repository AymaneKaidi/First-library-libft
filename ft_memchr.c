/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaidi <akaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:32:17 by akaidi            #+#    #+#             */
/*   Updated: 2026/10/24 10:13:00 by akaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*f;
	size_t				i;

	i = 0;
	f = (const unsigned char *)s;
	while (i < n)
	{
		if (f[i] == (unsigned char)c)
			return ((void *)&f[i]);
		i++;
	}
	return (NULL);
}
