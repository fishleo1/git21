/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:42:00 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/18 20:42:03 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int size;
	int i;
	int *str;

	i = 0;
	size = max - min;
	str = (int *)malloc(sizeof(*str) * size);
	if (min >= max)
	{
		str = NULL;
	}
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
