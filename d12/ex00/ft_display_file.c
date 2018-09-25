/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:05:55 by imgutier          #+#    #+#             */
/*   Updated: 2018/07/05 22:05:35 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;
	char *a;
	int i;

	i = 0;
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	else if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while (0 != read(fd, &a, 1))
	{
		write(1, &a, 1);
	}
	close(fd);
	return (0);
}
