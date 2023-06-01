/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:56:28 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/30 20:22:37 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ans;

	i = 0;
	ans = 0;
	ans = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (ft_strlen(src));
	if (!dest || !src)
		return (0);
	if (size != 0)
	{
		while (size - 1 > 0 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
			size--;
		}
		dest[i] = '\0';
	}
	return (ans);
}
