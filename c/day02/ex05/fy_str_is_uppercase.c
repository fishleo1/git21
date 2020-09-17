/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fy_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:39:05 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/12 23:39:08 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= 'Z' && str[i] <= 'Z')
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
