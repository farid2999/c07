/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:54:43 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/16 10:53:28 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char *sr = "hello";
	char *dt = ft_strdup(sr);
	printf("dt = %s", dt);
}*/
