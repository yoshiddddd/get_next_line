/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:21:39 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/05/27 12:52:19 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int     ft_free(char **ans,int len)
{
    while(len>=0)
    {
        free(ans[len]);
        len--;
    }

    return -1;
}
int ft_wordcount(char const *s,char c)
{
    int i;
    int count;
    count=0;
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]!=c&&(s[i+1]==c || s[i+1]=='\0'))
            count++;
        i++;
    }
    return count;
}
// void    ft_writeword(char *ans,char *s)s

int ft_checkword(char **ans,char const *s ,char c)
{
    int     i;
    int     j;
    int count;

    i=0;
    count=0;
    while(s[i]!='\0')
    {
        j=0;
        while(s[i]==c)
            i++;
        if(s[i]!='\0')
        {
            while(s[i+j]!=c)
                j++;
        
            if((ans[count]=(char *)malloc(sizeof(char)*j+1))==NULL)
                return ft_free(ans,count);
            strncpy(ans[count],s+i,j);
            ans[count][j]='\0';
            i=i+j;
            count++;

        }
    }   
ans[count]=NULL;
return 0;    
}


char **ft_split(char const *s, char c)
{
    char **ans;
    int i;
    int len;

    len = ft_wordcount(s,c);
    if((ans=(char **)malloc(sizeof(char *)*(len+1)))==NULL)
        return NULL;

    if(ft_checkword(ans,s,c)==-1)
        return NULL;

    
    return ans;
    
}


int main(void)
{
 char * * tab = ft_split("tripouille", 0);
 printf("%s",tab[1]);
}