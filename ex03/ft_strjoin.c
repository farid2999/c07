/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:48 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/17 10:15:16 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlin(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	length(char **strs, int i, int size, int sep_len)
{
	int	len;

	len = 0;
	while (i < size)
	{
		len += ft_strlin(strs[i]);
		if (i < size - 1)
			len += sep_len;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*sr;
	int		len;
	int		sep_len;

	i = 0;
	len = 0;
	sep_len = ft_strlin(sep);
	length(strs, i, size, sep_len);
	sr = malloc(sizeof(char) * (len + 1));
	if (!sr)
		return (NULL);
	sr[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i > 0)
			ft_strcat(sr, sep);
		ft_strcat(sr, strs[i]);
		i++;
	}
	return (sr);
}
/*#include <stdio.h>
int main()
{
	char *str[] = {"abc", "cv", "pp"};
	char sp[] = "//";
	char *n = ft_strjoin(3, str, sp);
	if (n)
	{
		printf("%s\n", n);
	}
}*/
