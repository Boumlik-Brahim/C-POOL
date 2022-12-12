/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:15:19 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/02 10:03:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int main()
{
	int	a;
	int b;

	a = 60;
	b = 2;

	int div;
	int mod;

	ft_div_mod(a,b,&div,&mod);

	printf("%d\n",div);
	printf("%d\n",mod);


}
