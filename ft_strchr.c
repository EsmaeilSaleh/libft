/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaleh <esaleh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 00:27:35 by esaleh            #+#    #+#             */
/*   Updated: 2025/05/28 13:47:53 by esaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str);

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	len = st_strlen(s);
	i = 0;
	while (i < len)
	{
		if (*s == c)
			return ((char *)s);
		s++;
		i++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (0);
}
