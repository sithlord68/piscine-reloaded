/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:08:08 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/13 12:12:20 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
	{
		ft_putchar(str[cpt]);
		cpt++;
	}
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	(void) **argv;
	ft_putstr("test de message");
}
*/