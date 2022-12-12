/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 07:57:31 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/03 21:01:46 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
