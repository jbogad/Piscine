/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jboga-d@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:47:53 by jaboga-d          #+#    #+#             */
/*   Updated: 2024/11/13 14:44:52 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comma(int count)
{
	if (count != 9899)
	{
		write(1, ",", 1);
	}
}

void	ft_print_comb2(void)

{
	char	a;
	char	b;
	char	c;
	char	d;
	int		count;

	count = 0;
	while (count <= 9999)
	{
		a = '0' +(count / 1000);
		b = '0' +(count / 100 % 10);
		c = '0' +(count / 10 % 10);
		d = '0' +(count / 1 % 10);
		if (a * 10 + b < c * 10 + d)
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			ft_print_comma(count);
		}
		++count;
	}
}
