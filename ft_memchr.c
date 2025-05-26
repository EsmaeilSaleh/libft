/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:56:12 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/26 15:34:16 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == c)
		{
			return ((unsigned char *)s);
		}
		printf("%c\n", *(unsigned char *)s);
		s++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "Hello how are you doing?";
	if (ft_memchr(str, 'i', 25*sizeof(char)))
	{
		printf("%s\n", "We have the char");
	}
	else
		printf("%s\n", "No, We don't have it!'");
	return (0);
}
