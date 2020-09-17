/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 22:56:34 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/11 23:23:40 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void		ft_putcha(char *str)
{
	char	merge[3];
	int		i;

	i = 0;
	merge[0] = *str;
	merge[1] = '\0';
	while (merge[i] != '\0')
	{
		write(1, &merge[i], 1);
		i++;
	}
}
