/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jboga-d@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:10:40 by jaboga-d          #+#    #+#             */
/*   Updated: 2024/11/13 09:46:41 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
}

void	print_separator(char c1, char c2, char c3)
{
	if (c1 != '0' || c2 != '1' || c3 != '2')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	c2 = '1';
	c3 = '2';
	while (c1 <= '7')
	{
		c2 = c1 + 1;
		while (c2 <= '8')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				print_separator(c1, c2, c3);
				ft_write_comb(c1, c2, c3);
				++c3;
			}
			++c2;
		}
		++c1;
	}
}
