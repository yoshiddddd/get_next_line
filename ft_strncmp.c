/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:32:33 by kyoshida          #+#    #+#             */
/*   Updated: 2023/06/01 16:28:04 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sub_s1;
	unsigned char	*sub_s2;

	sub_s1 = (unsigned char *)s1;
	sub_s2 = (unsigned char *)s2;
	if (!s1 || !s2)
		return (0);
	while (n > 0)
	{
		if (*sub_s1 != *sub_s2)
			return (*sub_s1 - *sub_s2);
		if (*sub_s2 == '\0' || *sub_s1 == '\0')
			break ;
		n--;
		sub_s1++;
		sub_s2++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str0;
// 	char *str1;

// 	// printf("%d\n", strncmp("b", "b", 2147483647));
// 	str0 = "AA";
// 	str1 = "AACDD";
// 	// str1[5] = CHAR_MIN;
// 	printf("strncmp    : ABC ABD   = %d\n", ft_strncmp(NULL, str1, 10));
// 	// printf("ft_strncmp : ABC ABD   = %d\n\n", ft_strncmp(str0, str1, 10));

// 	return (0);
// }