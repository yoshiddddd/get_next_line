/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:35:38 by kyoshida          #+#    #+#             */
/*   Updated: 2023/06/05 09:37:08 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_read(int fd,char buf)
{
    buf=(char *)malloc(sizeof(char)*BUFFER_SIZE+1);
    if(buf==NULL)
    return NULL;

}

char  *get_next_line(int fd)
{
    char    *line;
    char    *save_string;

    if(fd<=0 || BUFFER_SIZE<=0)
        return NULL;

    ft_read(fd,buf);

}