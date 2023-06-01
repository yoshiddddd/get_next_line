/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:40:58 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/30 20:21:34 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		k;
	char	*s2;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
		i++;
	s2 = (char *)malloc(sizeof(char) * i + 1);
	if (s2 == NULL)
		return (NULL);
	k = 0;
	while (s[k] != '\0')
	{
		s2[k] = s[k];
		k++;
	}
	s2[k] = '\0';
	return (s2);
}

// int main(void)
// {

// }