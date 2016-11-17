/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:39:50 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/17 11:27:40 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		str++;
	while (*str < 33)
		str--;
	while (*str != ' ')
		str--;
	str++;
	while (*str != ' ' && *str != '\0')
		ft_putchar(*str++);
	*str = '\0';
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		last_word(argv[1]);
	ft_putchar('\n');
}
