/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:50:22 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/16 22:58:28 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



void	inter(char *s1, char *s2)
{
	while (*s1)
	{
		while(*s2)
		{
			if(*s1 == *s2)
			{
				chft_putchar(*s1);
				s1++;
			}
			s2++;
		}
		ft_check()
		s1++;
	}
	*s1 = '\0';
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	else
	{
		ft_putchar('\n');
	}
	ft_putchar('\n');
	return (0);
}
