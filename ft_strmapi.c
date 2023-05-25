/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:31:35 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/05/25 09:31:35 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char addOne(unsigned int i, char c) {return (i + c);}
char *ft_strmapi(char const *s , char (*f)(unsigned int ,char ))
{
    size_t s_len;
    size_t i;
    char *ans;
    s_len= strlen(s);

    if(*s==NULL)
    return NULL;

    ans = (char *)malloc(sizeof(char)*s_len+1);
        if(ans==NULL)
        return NULL;
    while(i<s_len)
    {
        ans[i] = f(i,s[i]);  

        i++;

    }
    ans[i]='\0';
    return ans;
}

int main(void)
{
    char * s = ft_strmapi("1234", addOne);

    printf("%s",s);
}