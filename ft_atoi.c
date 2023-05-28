/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:14:50 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/26 16:00:23 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"




int	ft_atoi(const char *str)
{
	int	flag;
	int	num;

	num = 0;
	flag = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
	{
		flag *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (flag == -1)
		num *= -1;
	return (num);
}

// int	main(void)
// {
// 	printf("%d\n",ft_atoi("18446744073709551614"));
// 	printf("%d",atoi("18446744073709551614"));
// }