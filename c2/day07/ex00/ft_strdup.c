/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:20:59 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/17 19:21:01 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dst = malloc(sizeof(&src[i]) + 1);
	j = 0;
	while (j <= i)
	{
		dst[j] = src[j];
		j++;
	}
	return (dst);
}
