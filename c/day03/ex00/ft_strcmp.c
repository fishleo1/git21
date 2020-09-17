/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 10:30:03 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/13 10:30:07 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *p1;
	unsigned char *p2;

	*p1 = *s1;
	*p2 = *s2;
	while (*p1 != '\0')
	{
		if (*p2 == '\0')
			return (1);
		if (*p2 > *p1)
			return (-1);
		if (*p1 > *p2)
			return (1);
		p1++;
		p2++;
	}
	if (*p2 != '\0')
		return (-1);
	return (0);
}
