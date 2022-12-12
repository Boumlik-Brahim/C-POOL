/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:40:12 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/15 14:26:33 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	i;

	if (min >= max)
	{
		range[0] = 0;
		return (0);
	}
	l = max - min;
	*range = malloc(sizeof(int) * l);
	if (range[0] == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < l)
	{
		range[0][i] = min + i;
		i++;
	}
	return (l);
}
