/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboga-d <jboga-d@student.42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:34:12 by jaboga-d          #+#    #+#             */
/*   Updated: 2024/11/23 14:48:13 by jaboga-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
/*
int main()
{
    char dest[50] = "Hi, "; 
    char src[] = "madrid";
    
    printf("Antes: %s\n", dest);
    ft_strcat(dest, src);
    printf("Después: %s\n", dest);
    return 0;
}
*/