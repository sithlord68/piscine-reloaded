/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:53:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/30 19:15:59 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	res;
	int	resft;

	i = 0;
	resft = 0;
	while (tab[i])
	{
		res = f(tab[i]);
		if (res == 1)
			resft++;
		i++;
	}
	return (resft);
}

/*
#include <unistd.h>
int	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
	{
		write(1, &str[cpt], 1);
		cpt++;
	}
	return (cpt % 2);
}
int	main(int argc, char **argv)
{
	char	*tab[3] = { "mbh80SZ1gvHn"
		, "vbK453aR", "SuPkV8fKDIZ3" };

	(void) argc;
	(void) argv;
	
	ft_count_if(tab, &ft_putstr);
	return (0);
}
*/