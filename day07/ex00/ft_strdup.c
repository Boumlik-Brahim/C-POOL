/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:48:05 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/15 12:08:53 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_strdup(char *src)
{
	char	*str;
	int		l;
	int		i;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
