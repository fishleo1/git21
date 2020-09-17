/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:12:30 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/16 16:12:35 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (1);
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
