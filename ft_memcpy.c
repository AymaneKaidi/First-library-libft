/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaidi <akaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:23:17 by akaidi            #+#    #+#             */
/*   Updated: 2026/10/15 22:00:34 by akaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*f;
	unsigned char		*t;
	size_t				i;

	f = (const unsigned char *) src;
	t = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		t[i] = f[i];
		i++;
	}
	return (dest);
}
