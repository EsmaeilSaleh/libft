/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:36:19 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/29 10:30:37 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*orig_dest;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	orig_dest = d;
	if (!dest && !src && n > 0)
		return (NULL);
	if (d > s && d < s + n)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *)orig_dest);
}
/*

#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	size_t	arr[50];

	i = 0;
	while (i < n)
	{
		arr[i] = *(char *)src;
		src++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)dest = arr[i];
		dest++;
		i++;
	}
	return (dest - n);
}
*/
