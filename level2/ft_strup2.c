/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:59:30 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/16 18:30:30 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup (char *src)
{
	char *str;
	int len;
	int i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	str = ((char*)malloc(sizeof(char) * (len + 1)));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
