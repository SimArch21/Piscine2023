/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:05:33 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/25 09:34:06 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
void	imprimir(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", *(tab + i));
		i++;
	}
}

int	main(void)
{
	int	length;
	int	i;

	int table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	i = 0;
	length = 10;

	imprimir(table, length);
	printf("\n");
	printf("New Array is now: ");
	ft_rev_int_tab(table, length);
	imprimir(table, length);
}*/
