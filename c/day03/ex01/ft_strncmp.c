/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:40:18 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/13 14:40:20 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char *p1;
	unsigned char *p2;
	unsigned int 	i;

	*p1 = (unsigned char *)s1;
	*p2 = (unsigned char *)s2;
	while (*p1 != '\0' || i != n)
	{
		if (*p2 == '\0')
			return (1);
		if (*p2 > *p1)
			return (-1);
		if (*p1 > *p2)
			return (1);
		p1++;
		p2++;
		i++;
	}
	if (*p2 != '\0')
		return (-1);
	return (0);
}
