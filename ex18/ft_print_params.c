/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:20:08 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/30 18:09:57 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	cpt;
	int	strcpt;

	cpt = 1;
	while (cpt < argc)
	{
		strcpt = 0;
		while (argv[cpt][strcpt])
			ft_putchar(argv[cpt][strcpt++]);
		ft_putchar('\n');
		cpt++;
	}
}
