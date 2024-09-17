/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:51:43 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/16 13:36:17 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	array = malloc(sizeof(int) * (max - min));
	if (array == 0)
	{
		return (0);
	}
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*int main()
{
	int min = 1;
	int max = 790;
	int *a;
	int i = 0;
	a = ft_range(min, max);
	while (i < (max - min))
	{
	   printf("%d, ", a[i]);
	   i++;
	}
}*/
