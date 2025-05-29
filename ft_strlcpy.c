/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:39:44 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/29 12:51:59 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *str, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	
	i = 0;
	while (*str)
		i++;
	if (size > 0)
	{
		j = 0;
		while (j < size - 1 && src[j])
		{
			dest[j] = src[i];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
