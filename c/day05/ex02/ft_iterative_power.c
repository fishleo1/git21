/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:32:01 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/16 16:32:23 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int a;

	a = 1;
	if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			a = nb * a;
			power--;
		}
	}
	return (a);
}
