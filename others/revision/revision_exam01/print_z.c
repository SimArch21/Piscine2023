/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_z.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:59:20 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/26 20:02:01 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	main(void)
{
	char	a;

	a = 'z';
	write(1, &a, 1);
}