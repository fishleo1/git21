/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:52:16 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/16 15:52:18 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int number;
	int i;

	i = 1;
	number = 1;
	while (i <= nb)
	{
		number = number * i;
		i++;
	}
	return (number);
}
