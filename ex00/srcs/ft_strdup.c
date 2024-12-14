/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamalkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:19:35 by pamalkha          #+#    #+#             */
/*   Updated: 2024/12/05 16:31:24 by pamalkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*res;
	int		i;

	len = 0;
	while (src[len])
		len++;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
int main()
{
	char *res = ft_strdup("12345");
	if (*res == 0)
		printf("memory error\n");
	else
		printf("%s",res);
}*/
