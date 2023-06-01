/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:27:23 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/31 15:18:52 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	int			i;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!dst || !src)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else if (d > s)
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char *c;
// 	c="aa";
// 	ft_memmove(c,NULL,3);
// 	printf("%s",c);
// }