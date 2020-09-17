/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:03:33 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/10 21:03:37 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char array[5];

	array[3] = ',';
	array[4] = ' ';
	array[0] = '0';
	while (array[0] <= '9')
	{
		array[1] = array[0] + 1;
		while (array[1] <= '9')
		{
			array[2] = array[1] + 1;
			while (array[2] <= '9')
			{
				if (!(array[0] == '7' && array[1] == '8' && array[2] == '9'))
				{
					write(1, array, 5);
				}
				array[2]++;
			}
			array[1]++;
		}
		array[0]++;
	}
	write(1, "789", 3);
}
