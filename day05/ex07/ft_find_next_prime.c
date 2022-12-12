/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 09:07:02 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/11 18:13:09 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	s;

	i = 2;
	s = 0;
	if (nb <= 1)
		return (0);
	while (i < (nb / 2))
	{
		if ((nb % i) == 0)
		{
			s = s + 1;
			break ;
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
