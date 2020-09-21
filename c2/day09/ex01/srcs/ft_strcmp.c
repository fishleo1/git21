/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:06:53 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/20 16:07:04 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	raz;

	i = 0;
	while (s1[i] && s2[i])
	{
		raz = s1[i] - s2[i];
		if (raz != 0)
		{
			return (raz);
		}
		i++;
	}
	if (s1[i] && !s2[i])
		return (1);
	else if (!s1[i] && s2[i])
		return (-1);
	else
		return (0);
}
