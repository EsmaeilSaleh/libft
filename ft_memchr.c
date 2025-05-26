/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:56:12 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/26 16:11:31 by esaleh           ###   ########.fr       */
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
		s++;
		i++;
	}
	return (0);
}
int	main(void)
{
	char str[] = "Hello how are you doing?";
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	int *c = ft_memchr(tab, -49, 7);
	if (*c)
	{
		printf("%s\n", "Congratulation!");
		printf("%s\n", "We have the char!");
		printf("%c\n", *c);
	}
	else
		printf("%s\n", "No, We don't have it!'");
	return (0);
}
