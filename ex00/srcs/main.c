/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:12:12 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/15 20:38:08 by arvardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_is_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

void	init_dict(struct s_dict *dict)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		dict->miavor[i] = 0;
		dict->tasnavor[i] = 0;
		dict->tasnavor1[i] = 0;
		dict->haryuravor_and_more[i] = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	struct s_dict	dict;

	init_dict(&dict);
	if (argc == 2)
	{
		if (!ft_is_number(argv[1]))
		{
			ft_putstr(2, "Error\n");
			return (1);
		}
		fill_dict(&dict, "srcs/numbers.dict");
		print_number(&dict, argv[1]);
		ft_putstr(1, "\n");
	}
	else if (argc == 3)
	{
		fill_dict(&dict, argv[2]);
		print_number(&dict, argv[1]);
		ft_putstr(1, "\n");
	}
	else
	{
		ft_putstr(2, "Error! Number of arguments is incorrect\n");
		return (1);
	}
}
