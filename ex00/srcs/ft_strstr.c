/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:09:39 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/14 19:12:55 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] != 0 && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
