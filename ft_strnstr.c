/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:55:39 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/26 18:53:11 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigger, const char *smaller, size_t len)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	if (*smaller == '\0')
		return ((char *)bigger);
	while (i < len && *bigger != '\0')
	{
		if (ft_strncmp(bigger, smaller, ft_strlen(smaller)) == 0)
		{
			if (i + ft_strlen(smaller) > len)
				return (NULL);
			return ((char *)bigger);
		}
		bigger++;
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 		char *sp;
// 		// char * empty = (char*)"";
// 		 char haystack[30] = "aaabcabcd";
// 		puts("ft_strnstr:");
// 		sp = ft_strnstr(haystack, "cd", 8);
// 		printf("%s\n", sp);
// 			puts("strnstr:");
// 		printf("%s",strnstr(haystack, "cd", 8));
// 		// 	// sp = strnstr(s1, s2, -1);
// }