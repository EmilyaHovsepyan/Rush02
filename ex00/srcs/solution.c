/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:20:58 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/15 21:12:02 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_miavor(struct s_dict *dict, char *nbr, int len, int *fl)
{
	if (len == 1 && nbr[0] == '0')
		ft_putstr(1, dict->miavor[0]);
	else if (len > 0 && nbr[len - 1] != '0')
	{
		if (*fl)
			ft_putstr(1, " ");
		*fl = 1;
		ft_putstr(1, dict->miavor[nbr[len - 1] - '0']);
	}
}

void	print_tasnavor(struct s_dict *dict, char *nbr, int len, int *fl)
{
	if (len >= 2 && nbr[len - 2] == '1')
	{
		if (*fl)
			ft_putstr(1, " ");
		*fl = 1;
		ft_putstr(1, dict->tasnavor1[nbr[len - 1] - '0']);
	}
	else
	{
		if (len >= 2 && nbr[len -2] != '0')
		{
			if (*fl)
				ft_putstr(1, " ");
			*fl = 1;
			ft_putstr(1, dict->tasnavor[nbr[len - 2] - '0']);
		}
		print_miavor(dict, nbr, len, fl);
	}
}

void	print_haryuravor(struct s_dict *dict, char *nbr, int len, int *fl)
{
	char	tmp[2];

	tmp[1] = 0;
	if (len >= 3 && nbr[len - 3] != '0')
	{
		tmp[0] = nbr[len - 3];
		print_miavor(dict, tmp, 1, fl);
		if (*fl)
			ft_putstr(1, " ");
		*fl = 1;
		ft_putstr(1, dict->haryuravor_and_more[0]);
	}
	print_tasnavor(dict, nbr, len, fl);
}

void	print_and_more(struct s_dict *dict, char *nbr, int len, int *fl2)
{
	int		index;
	char	haryuravor[4];
	int		mnacord;
	int		fl;

	fl = 0;
	if (len > 3)
	{
		mnacord = (len - 1) % 3;
		index = (len - 1) / 3;
		set_haryuravor(haryuravor, nbr, len);
		set_fl(haryuravor, mnacord, &fl);
		if (mnacord == 0)
			print_haryuravor(dict, haryuravor, 1, fl2);
		else if (mnacord == 1)
			print_haryuravor(dict, haryuravor, 2, fl2);
		else if (mnacord == 2)
			print_haryuravor(dict, haryuravor, 3, fl2);
		nbr += print_and_more_2(dict, &fl, fl2, len);
		print_and_more(dict, nbr, len - (mnacord + 1), fl2);
	}
	else
		print_haryuravor(dict, nbr, len, fl2);
}

void	print_number(struct s_dict *dict, char *nbr)
{
	int	fl;

	fl = 0;
	print_and_more(dict, nbr, ft_strlen(nbr), &fl);
}
