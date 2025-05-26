/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:56:12 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/26 16:40:00 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	int tmp = c;
	if (c < 0)
		tmp *= -1;	

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == tmp)
		{
			return ((signed char *)s);
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
	unsigned char *c = ft_memchr(tab, -2, 7*sizeof(int));
	if (*c)
	{
		printf("%s\n", "Congratulation!");
		printf("%s\n", "We have the char!");
		//printf("%c\n", *c);
		printf("%s\n", "The char is:");
		printf("%d\n",*(signed int *)c);
	}
	else
		printf("%s\n", "No, We don't have it!'");
	return (0);
}
