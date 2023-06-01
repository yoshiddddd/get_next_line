/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:45:24 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/31 18:51:53 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)malloc(n * size);
	if (tmp == NULL)
		return (NULL);
	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	if (n > SIZE_MAX / size)
		return (NULL);
	ft_memset(tmp, 0, n * size);
	return (tmp);
}

// int	main(void)
// {
// 	char	*test;

// 	test = calloc(SIZE_MAX, SIZE_MAX+1);
// 	printf("%s", test);
// }
