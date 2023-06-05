/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:35:38 by kyoshida          #+#    #+#             */
/*   Updated: 2023/06/05 20:20:36 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_output(char *read_string)
{
	int		size;
	int		i;
	char	*ans;

	i = 0;
	while (*read_string[size] != '\n')
		size++;
	ans = (char *)malloc(sizeof(char) * size + 1);
	if (ans == NULL)
		return (NULL);
	while (i < size)
	{
		ans[i] = read_string[i];
		i++;
	}
	ans[i] = '\0';
	free(read_string);
	return (ans);
}

char	*ft_read(int fd, char save_string)
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
			return (NULL);
		buf[n_read] = '\0';
		save_string = ft_strjoin(save_string, buf);
	}
	free(buf);
	return (save_string);
}

char	*get_next_line(int fd)
{
	char		*line;
	static		char *save_string = "";
	char *read_string;

	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);

	read_string = ft_read(fd, save_string);
	save_string = ft_save(read_string);
	line = ft_output(read_string);
	if (!line)
		return (NULL);

	return (line);
}
