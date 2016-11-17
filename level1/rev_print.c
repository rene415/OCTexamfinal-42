/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 12:01:14 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/15 16:05:21 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_print(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	size--;
	while (i <= size)
	{
		ft_putchar(str[size]);
		size--;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		rev_print(argv[1]);
	ft_putchar ('\n');
}
