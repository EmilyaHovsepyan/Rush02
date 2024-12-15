/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:23:42 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/15 17:38:26 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

struct s_dict
{
	char	*miavor[10];
	char	*tasnavor1[10];
	char	*tasnavor[10];
	char	*haryuravor_and_more[13];
};

void	ft_putstr(int ft, char *str);
int		ft_strlen(char *str);
void	fill_dict(struct s_dict *dict, char *file_path);
char	*ft_strdup(char *src);
char	*ft_strstr(char *str, char *to_find);
void	set_number_name(struct s_dict *dict, char *file_path, char *nbr);
void	print_number(struct s_dict *dict, char *nbr);
#endif
