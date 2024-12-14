/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:23:42 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/14 18:27:06 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

struct s_dict
{
	char	*miavor[10];
	char	*tasnavor1[10];
	char	*tasnavor[10];
	char	*haryuravor_and_more[10];
};

void	ft_putstr(int ft, char *str);
int		ft_strlen(char *str);
void	fill_dict_default(struct s_dict *dict);
char	*ft_strdup(char *src);
char	*ft_strstr(char *str, char *to_find);
#endif
