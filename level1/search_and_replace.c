/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:33:55 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/15 23:16:40 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	search_and_replace(char *s1, char *s2, char *s3)
{

	while (*s1)
	{
		if (*s1 == *s2)
		{
			ft_putchar(*s3);
			s1++;
		}
		ft_putchar(*s1);
		s1++;
	}
	return (*s1);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{ 
		if (argv[2][1] == '\0' &&  argv[3][1] == '\0')
			search_and_replace(argv[1], argv[2], argv[3]);
	}
	ft_putchar('\n');
	return (0);
}
