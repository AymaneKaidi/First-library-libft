/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaidi <akaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:31:11 by akaidi            #+#    #+#             */
/*   Updated: 2026/10/19 21:33:57 by akaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	len;
	size_t	start;
	char	*s;

	nbr = n;
	len = count_digits(nbr);
	s = malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	start = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		s[0] = '-';
		start = 1;
	}
	while (len > start)
	{
		len--;
		s[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (s);
}
