/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralverta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 16:07:44 by ralverta          #+#    #+#             */
/*   Updated: 2021/01/04 16:07:57 by ralverta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(char *s, int c)
{
	if (s)
	{
		while (*s != '\0')
		{
			if (*s == c)
				return (s);
			s++;
		}
	}
	if (c == 0)
		return (s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sum;
	size_t	size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(sum = (char *)malloc(size + 1)))
		return (NULL);
	while (s1 && s1[i])
	{
		sum[i] = s1[i];
		i++;
	}
	while (s2[j])
		sum[i++] = s2[j++];
	sum[i] = '\0';
	free((void *)s1);
	return (sum);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
