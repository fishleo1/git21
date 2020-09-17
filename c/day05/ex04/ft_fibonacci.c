/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:26:35 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/16 18:26:36 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int res;

	if (index == 1 || index == 2)
	{
		return (1);
	}
	else if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else
	{
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (res);
}
