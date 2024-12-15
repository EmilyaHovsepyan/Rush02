/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:20:58 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/15 17:59:12 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_miavor(struct s_dict *dict, char *nbr, int len)
{
	if (len == 1 && nbr[0] == '0')
		ft_putstr(1, dict->miavor[0]);
	else if (len > 0 && nbr[len - 1] != '0')
	{
		ft_putstr(1, dict->miavor[nbr[len - 1] - '0']);
	}
}

void	print_tasnavor(struct s_dict *dict, char *nbr, int len)
{
	if (len >= 2 && nbr[len - 2] == '1')
	{
		ft_putstr(1, dict->tasnavor1[nbr[len - 1] - '0']);
		ft_putstr(1, " ");
	}
	else
	{
		if (len >= 2)
		{
			ft_putstr(1, dict->tasnavor[nbr[len - 2] - '0']);
			ft_putstr(1, " ");
		}
		print_miavor(dict, nbr, len);
	}
}


void	print_haryuravor(struct s_dict *dict, char *nbr, int len)
{
	char tmp[2];

	tmp[1] = 0;
	if (len >= 3)
	{
		tmp[0] = nbr[len - 3];
		print_miavor(dict, tmp, 1);
		ft_putstr(1, " ");
		ft_putstr(1, dict->haryuravor_and_more[0]);
		ft_putstr(1, " ");
	}
	print_tasnavor(dict, nbr, len);
}
void	print_number(struct s_dict *dict, char *nbr)
{
	print_haryuravor(dict, nbr, ft_strlen(nbr));
}
