/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:25:55 by kyoshida          #+#    #+#             */
/*   Updated: 2023/06/01 16:28:17 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// int	main(void)
// {
// 	char test1[10] = "abcdef";
// 	char test2[20] = "あiueo";

// 	int len1, len2;

// 	//test1の文字列の長さを取得
// 	len1 = ft_strlen(test1);

// 	//test2の文字列の長さを取得
// 	len2 = ft_strlen(test2);

// 	//表示
// 	printf("test1の文字列の長さは→%d\n", len1);
// 	printf("test2の文字列の長さは→%d\n", len2);

// 	return (0);
// }