/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:35:38 by kyoshida          #+#    #+#             */
/*   Updated: 2023/06/06 11:03:07 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_output(char *read_string)
{
	int		i;
	char	*ans;

	i = 0;
    if(!read_string)
    return NULL;
	while (read_string[i] != '\n')
		i++;
	ans = (char *)malloc(sizeof(char) * i + 2);
	if (ans == NULL)
		return (NULL);
        i=0;
	while (read_string[i]!='\n'&&read_string[i])
	{
		ans[i] = read_string[i];
		i++;
	}
    if(read_string[i]=='\n')
        ans[i++] = '\n';
	ans[i] = '\0';
	free(read_string);
	return (ans);
}

static char    *ft_save(char *read_string)
{
    int i;
    int count;
    char *save;
    i=0;
    count = 0;
    while(read_string[i]!='\n')
        i++;
    
    save = (char *)malloc(sizeof(char)*ft_strlen(read_string)-i+1);
    if(!save)
    return NULL;
    i+=1;
    while(read_string[i]!='\0')
    {
        save[count]=read_string[i];
        i++;
        count++;
    }
    save[count]='\0';
    return save;
}

static char	*ft_read(int fd, char *save_string)
{
	ssize_t	n_read;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	while (ft_strchr(buf, '\n') == NULL)
	{
		n_read = read(fd, buf, BUFFER_SIZE);
		if (n_read == -1)
        {
            free(buf);
			return (NULL);
        }
		buf[n_read] = '\0';
		save_string = ft_strjoin(save_string, buf);
	}
	free(buf);
	return (save_string);
}

char	*get_next_line(int fd)
{
	char		*line;
	static		char *save_string;
	char *read_string;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	read_string = ft_read(fd, save_string);
	save_string = ft_save(read_string);
	line = ft_output(read_string);
	if (!line)
		return (NULL);

	return (line);
}
