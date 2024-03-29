/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:11:38 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/10 17:43:10 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	s;

	i = 2;
	s = 0;
	if (nb <= 1)
	{
		return (0);
	}
	while (i < (nb / 2))
	{
		if ((nb % i) == 0)
		{
			s = s + 1;
		}
		i++;
	}
	if (s == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
