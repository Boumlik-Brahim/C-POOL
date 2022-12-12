/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 18:23:12 by bbrahim           #+#    #+#             */
/*   Updated: 2021/07/02 09:59:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}

int main()
{
	int a;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr9;

	a = 15;
	nbr1=&a;
	nbr2=&nbr1;
	nbr3=&nbr2;
	nbr4=&nbr3;
	nbr5=&nbr4;
	nbr6=&nbr5;
	nbr7=&nbr6;
	nbr8=&nbr7;
	nbr9=&nbr8;
	
	ft_ultimate_ft(nbr9);
	printf("%p\n", nbr9);
	printf("%d\n", a);

}


