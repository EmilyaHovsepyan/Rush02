/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:22:28 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/14 19:19:29 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

char *find_line(char *buffer, char *value)
{
	char *res;
	if ((res = ft_strstr(buffer, value)) != 0)
	{
		return (res);
	}

	return (0);
}

char	*read_file(char *file_path, char *value)
{
	int 	fd;
	char	buffer[BUFFER_SIZE];
	char	*res;
	
	res = 0;
	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, "Dict Error\n");
	}
	else
	{
		while (read(fd, buffer, BUFFER_SIZE - 1) > 0)
		{
			res = find_line(buffer, value);
		}
		if (res == 0)
		{
			ft_putstr(2, "Dict Error\n");
		}
		else
		{
			ft_putstr(1, res);
		}
	}
	close(fd);
}

void	set_number_name(struct s_dict *dict, char *file_path, char *nbr)
{
	int		len;
	char	*tmp;

	len = ft_strlen(nbr);
	if (len == 1)
	{
		tmp = dict->miavor[*nbr - '0'];
	//	free(tmp);
		read_file(file_path, nbr);
	}
	read_file(file_path, nbr);

}

void	fill_dict_default(struct s_dict *dict)
{
	set_number_name(dict, "srcs/numbers.dict", "11");	
}
