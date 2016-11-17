/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:34:48 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/15 17:03:12 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat(char *str)
{
	int repeat;

	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			repeat = *str - 64;
		else if(*str >= 97 && *str <= 122)
			repeat = *str - 97;
		else
			repeat = 0;
		while (repeat-- >= 0 )
			ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
