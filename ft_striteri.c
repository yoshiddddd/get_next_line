/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:41:31 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/05/25 09:55:34 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include<string.h>
// #include<stdio.h>

void iter(unsigned int i, char * s) {
        *s += i;
}
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    size_t i;
    size_t s_len;

    // if(*s==NULL)
    // return NULL;
    s_len = strlen(s);

    i=0;

    while(i<s_len)
    {
        f(i,&s[i]);
        i++;
    }
    
    s[i]='\0';


}
int main(void)
{
 	char s[] = "";
 ft_striteri(s, iter);
    printf("%s",s);
}