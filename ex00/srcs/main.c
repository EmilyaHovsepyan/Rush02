/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:12:12 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/14 17:27:56 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int ft_is_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str  > '9')
			return (0);
		str++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!ft_is_number(argv[1]))
		{
			ft_putstr(2,"Error\n");
			return (1);
		}

		struct s_dict dict;
		fill_dict_default(&dict);
	}
	else
	{
		ft_putstr(2,"Error! Number of arguments is incorrect\n");
		return (1);
	}
	
}
