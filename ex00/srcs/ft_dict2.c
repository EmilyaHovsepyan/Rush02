/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:09:24 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/15 20:11:40 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

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

char	*read_file(char *file_path, char *value, char *buffer)
{
	int 	fd;
	char	*res;

	res = 0;
	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		ft_putstr(2, "Dict Error\n");
	else
	{
		while (read(fd, buffer, BUFFER_SIZE - 1) > 0)
			res = find_line(buffer, value);
		if (res == 0)
			ft_putstr(2, "Dict Error\n");
	}
	close(fd);

	return (res);
}

char *split_word(char *str)
{
	int		i;
	char	*res;

	res = 0;
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		if (str[i] == ':')
		{
			i++;
			while (str[i] && str[i] != '\n'  && str[i] == ' ')
				i++;
			if (str[i] && str[i] != '\n')
				res = &str[i];
			while (str[i] && str[i] != '\n')
				i++;
			break;
		}
		i++;
	}
	str[i] = 0;
	if (!res)
		ft_putstr(2, "Dict Error\n");
	return (res);
}

void	fill_1(struct s_dict *dict, char *nbr, int len, char *tmp)
{
	char	**dict_arr;
	int		index;

	index = 0;
	dict_arr = 0;
	if(len == 1)
	{
		dict_arr = dict->miavor;
		index = 0;
	}
	else if(len == 2 && nbr[0] == '1')
	{
		index = 1;
		dict_arr = dict->tasnavor1;
	}
	else if(len == 2)
	{
		index = 0;
		dict_arr = dict->tasnavor;
	}
	if (dict_arr[nbr[index] - '0'] == 0)
		free(dict_arr[nbr[index] - '0']);
	dict_arr[nbr[index] - '0'] = ft_strdup(tmp);
}

void	set_number_name(struct s_dict *dict, char *file_path, char *nbr)
{
	char	*tmp;
	char	buffer[BUFFER_SIZE];
	int		len;
	int		index;

	len = ft_strlen(nbr);
	tmp = split_word(read_file(file_path, nbr, buffer));
	if (len <= 2)
		fill_1(dict, nbr, len, tmp);
	else
	{
		if (len == 3)
			index = 0;
		else
			index = (len - 1) / 3;
		if (dict->haryuravor_and_more[index] == 0)
			free(dict->haryuravor_and_more[index]);
		dict->haryuravor_and_more[index] = ft_strdup(tmp);
	}
}
