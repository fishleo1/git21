/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmandalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:09:57 by tmandalo          #+#    #+#             */
/*   Updated: 2020/09/12 21:10:03 by tmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str){
	int i = 0;

 		if(str[i] == '\0')
		{
			return (1);
		}

	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
    	{
    		
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
		
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}