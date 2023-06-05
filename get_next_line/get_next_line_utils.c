/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:35:34 by kyoshida          #+#    #+#             */
/*   Updated: 2023/06/05 20:18:55 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	num;

	if (!s)
		return (0);
	num = 0;
	while (s[num] != '\0')
		num++;
	return (num);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_s;
	int		i;

	i = 0;
	concat_s = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (concat_s == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1 != '\0')
			concat_s[i++] = *s1++;
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
			concat_s[i++] = *s2++;
	}
	concat_s[i] = '\0';
	return (concat_s);
}

char	ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;

	while (*s != '\0')
	{
		if (*s == ch)
			return (s);
		s++;
	}
	return (NULL);
}
