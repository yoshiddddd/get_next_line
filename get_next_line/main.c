/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:05:34 by kyoshida          #+#    #+#             */
/*   Updated: 2023/06/07 10:58:27 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int		fd;
	char	*line;

	line = "";
	fd = open("test.txt", O_RDONLY);
	// while (line)
	// {
				get_next_line(fd);

		get_next_line(fd);
		line = get_next_line(fd);
		printf("> %s", line);
		free(line);
	// }
	return (0);
}