/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 08:17:59 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/31 08:26:26 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *str);

int	 main()
{
	char dest [] = "supertacos";
	char src[] = "tacos";
	printf("%s\n", ft_strcpy(dest, src));
	return(0);
}

