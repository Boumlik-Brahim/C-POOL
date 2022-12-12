/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:04:44 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/15 12:09:59 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	l;

	if (min >= max)
	{
		return (0);
	}
	l = max - min;
	tab = malloc(sizeof(int) * l);
	i = 0;
	while (i < l)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
