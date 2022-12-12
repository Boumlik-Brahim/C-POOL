/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:45:26 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/15 14:19:33 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}

int	ft_calcul_l(int size, char **strs, char *sep)
{
	int	i;
	int	l;
	int	l_sep;

	l_sep = ft_strlen(sep);
	i = 0;
	l = 0;
	while (i < size)
	{
		l = l + ft_strlen(strs[i]);
		i++;
	}
	l = l + l_sep * (size - 1);
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		l;

	if (size < 0 || !strs || !sep)
	{
		return (NULL);
	}
	if (size == 0)
	{
		tab = malloc(1);
		tab[0] = 0;
		return (tab);
	}
	l = ft_calcul_l(size, strs, sep);
	tab = malloc(sizeof(char) * l + 1);
	ft_strcpy(tab, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(tab, sep);
		ft_strcat(tab, strs[i]);
		i++;
	}
	return (tab);
}
