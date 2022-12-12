/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:10:35 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/03 21:08:57 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' && s2[j] != '\0')
		&& (i < n - 1 && j < n - 1)
		&& (s1[i] == s2[j]))
	{
		i++;
		j++;
	}
	if (s1[i] == s2[j])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[j]);
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(to_find);
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, len) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
#include<stdio.h>

int main()
{
	char *str = "abcd123efgh";
	char *to_find = "123";

	printf("%s\n", ft_strstr(str, to_find));

}