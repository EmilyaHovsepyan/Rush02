/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:22:28 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/15 20:15:11 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	add_0(char *arr)
{
	int	i;

	while (*arr)
		arr++;
	i = 0;
	while (i < 3)
	{
		*arr = '0';
		i++;
		arr++;
	}
	*arr = 0;
}

void	fill_dict(struct s_dict *dict, char *file_path)
{
	char	i[38];
	int		j;

	i[0] = '0' - 1;
	i[1] = 0;
	while (++i[0] <= '9')
		set_number_name(dict, file_path, i);
	i[0] = '1';
	i[1] = '0' - 1;
	i[2] = 0;
	while (++i[1] <= '9')
		set_number_name(dict, file_path, i);
	i[1] = '0';
	while (++i[0] <= '9')
		set_number_name(dict, file_path, i);
	set_number_name(dict, file_path, "100");
	i[0] = '1';
	i[1] = 0;
	j = 0;
	while (++j < 13)
	{
		add_0(i);
		set_number_name(dict, file_path, i);
	}
}
