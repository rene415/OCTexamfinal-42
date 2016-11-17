/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 21:12:37 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/15 22:17:47 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str -32);
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str  +32);
		else
			ft_putchar(*str);
		str++;
	}
	return (*str);
}

int main(int argc , char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ulstr(argv[1]);
	ft_putchar('\n');
}
