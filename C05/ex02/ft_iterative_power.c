/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jboga-d@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:38:53 by jaboga-d          #+#    #+#             */
/*   Updated: 2024/11/27 09:56:05 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (0);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// int main()
// {
// 	int nb = 0;
// 	int power = 0;

// 	int result = ft_iterative_power(nb, power);
// 	printf("result %d\n", result);
// }
