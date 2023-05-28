/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:22:06 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/28 19:56:57 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	char	*s2;
	size_t	i;
	size_t	k;
	size_t	leng;
	i = 0;
	k = 0;
	leng=0;
	if (!s)
		return (NULL);
	s2 = (char *)s;
	if(ft_strlen(s)-start<len)
	leng = ft_strlen(s)-start;
	else
	leng = len;

	ans = (char *)malloc(sizeof(char) * leng + 1);
	if (ans == NULL)
		return (NULL);
	while (k < start && s2[k] != '\0')
		k++;
	if (s2[k] != '\0')
	{
		while (i < len && s2[k] != '\0')
		{
			ans[i] = s2[k];
			i++;
			k++;
		}
	}
	ans[i] = '\0';
	return (ans);
}

// int	main(void)
// {
// 	char *test;   
// 	char * str = strdup("1");
// 	test = ft_substr(str, 42, 42000000);
// 	printf("%s", test);

// 	free(test);
// }