/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:46:56 by pamalkha          #+#    #+#             */
/*   Updated: 2024/11/28 15:51:45 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	res;

	res = 0;
	while (*str != 0)
	{
		res++;
		str++;
	}
	return (res);
}
/*
int	main(void)
{
	char	*str;

	str = "12345";
	printf("res = %d\n", ft_strlen(str));
}
*/
