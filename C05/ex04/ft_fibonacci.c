/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jboga-d@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:33:39 by jaboga-d          #+#    #+#             */
/*   Updated: 2024/11/27 10:39:22 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// int main() {
//     printf("Fibonacci de 0: %d\n", ft_fibonacci(0));
//     printf("Fibonacci de 1: %d\n", ft_fibonacci(1));
//     printf("Fibonacci de 5: %d\n", ft_fibonacci(5));
//     printf("Fibonacci de 10: %d\n", ft_fibonacci(10));
//     printf("Fibonacci de -1: %d\n", ft_fibonacci(-1));
//     return 0;
// }
