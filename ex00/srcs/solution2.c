/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:11:16 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/15 21:11:36 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	set_haryuravor(char *haryuravor, char *nbr, int len)
{
	int	mnacord;
	int	index;

	mnacord = (len - 1) % 3;
	index = (len - 1) / 3;
	if (mnacord == 0)
	{
		haryuravor[0] = nbr[len - index * 3 - mnacord - 1];
		haryuravor[1] = 0;
	}
	else if (mnacord == 1)
	{
		haryuravor[0] = nbr[len - index * 3 - mnacord - 1];
		haryuravor[1] = nbr[len - index * 3 - mnacord];
		haryuravor[2] = 0;
	}
	else if (mnacord == 2)
	{
		haryuravor[0] = nbr[len - index * 3 - (mnacord + 1)];
		haryuravor[1] = nbr[len - index * 3 - mnacord];
		haryuravor[2] = nbr[len - index * 3 - (mnacord - 1)];
		haryuravor[3] = 0;
	}
}

void	set_fl(char *haryuravor, int mnacord, int *fl)
{
	if (mnacord == 0)
	{
		if (haryuravor[0] == '0')
			*fl = 1;
	}
	else if (mnacord == 1)
	{
		if (haryuravor[0] == '0' && haryuravor[1] == '0')
			*fl = 1;
	}
	else if (mnacord == 2)
	{
		if (haryuravor[0] == '0' && haryuravor[1] == '0'
			&& haryuravor[2] == '0')
			*fl = 1;
	}
}

int	print_and_more_2(struct s_dict *dict, int *fl, int *fl2, int len)
{
	int	mnacord;
	int	index;

	mnacord = (len - 1) % 3;
	index = (len - 1) / 3;
	if (!(*fl))
	{
		if (*fl2)
			ft_putstr(1, " ");
		*fl2 = 1;
		ft_putstr(1, dict->haryuravor_and_more[index]);
	}
	return (mnacord + 1);
}
