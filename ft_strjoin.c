/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:38:27 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/28 20:04:56 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*concat_s;
	int		i;

	i = 0;
	len = ft_count2(s1, s2);
	concat_s = (char *)malloc(sizeof(char) * len + 1);
	if(concat_s == NULL)
	return NULL;
	while (*s1 != '\0')
	{
		concat_s[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		concat_s[i] = *s2;
		s2++;
		i++;
	}
	concat_s[i] = '\0';
	return (concat_s);
}

int 	ft_count2(const char *c, const char *c2)
{
	int 	i;
	int 	k;

	i = 0;
	k = 0;
	while (c[i] != '\0')
		i++;
	while (c2[k] != '\0')
		k++;
	return (i + k);
}
// int	main(void)
// {
// }