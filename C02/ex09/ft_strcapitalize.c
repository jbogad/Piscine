/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jboga-d@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:56:52 by jaboga-d          #+#    #+#             */
/*   Updated: 2024/11/20 17:13:27 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start_w;

	i = 0;
	start_w = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && start_w == 1)
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && start_w != 1)
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			start_w = 0;
		}
		else
		{
			start_w = 1;
		}
		i++;
	}
	return (str);
}
