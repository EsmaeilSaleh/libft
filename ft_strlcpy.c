/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:39:44 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/29 12:55:16 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*src)
		i++;
	if (size > 0)
	{
		j = 0;
		while (j < size - 1 && src[j])
		{
			dst[j] = src[i];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
