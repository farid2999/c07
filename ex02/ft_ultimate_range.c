/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:35:31 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/17 10:22:48 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == 0)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}
/*#include <stdio.h>
int main()
{
	int min = 1;
	int max = 20;
	int s;
	int *a;
	int i = 0;
	s = ft_ultimate_range(&a, min, max);
	while (i < s)
	{
		printf("%d, ", a[i]);
		i++;
	}
	free(a);
}*/