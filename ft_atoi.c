/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:14:50 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/30 11:52:17 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long parseNumber(const char *str,int flag)
{
	long	num;

	num=0;
	while ('0' <= *str && *str <= '9')
	{
			if(num>LONG_MAX/10)
				return LONG_MAX;
			else if(num==LONG_MIN/10 &&(*str+1)-'0'>LONG_MIN%10&&flag==-1)
				return LONG_MAX;
			else if(num==LONG_MAX/10 &&(*str+1)-'0'>LONG_MAX%10)
				return LONG_MAX;

		num =num*10 + (*str - '0');
		str++;
	}
	if (flag == -1)
		num *= -1;
	return num;
}


int	ft_atoi(const char *str)
{
	int		flag;
	int  	num;

	num=0;
	
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

	return (int)parseNumber(str,flag);
}

int	main(void)
{
	printf("%d\n",ft_atoi("    	-92233"));
	printf("%d",atoi("   			-92233"));
}