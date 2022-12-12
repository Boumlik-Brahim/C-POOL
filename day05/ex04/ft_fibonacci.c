/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:41:26 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/10 12:35:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int	index)
{
	int	f;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index <= 2)
	{
		return (1);
	}
	else
	{
		f = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (f);
	}
}
