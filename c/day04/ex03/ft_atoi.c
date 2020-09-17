/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 22:41:24 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/15 22:41:27 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int cur_number;
	int fin_number;

	i = 0;
	sign = 1;
	cur_number = 0;
	fin_number = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = sign * (-1);
	}
	while (str[i] > 47 && str[i] < 58)
	{
		cur_number = str[i] - 48;
		fin_number = fin_number * 10 + cur_number;
		i++;
	}
	return (sign * fin_number);
}
