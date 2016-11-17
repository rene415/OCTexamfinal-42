/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:21:02 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/14 20:00:49 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			return ;
		}
		i++;
	}
	return ;
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	if (argc == 2)
		aff_a(argv[1]);
	ft_putchar('\n');
	return (0);
}
