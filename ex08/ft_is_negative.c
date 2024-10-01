/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:08:08 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/12 12:12:20 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int value)
{
	if (value < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*
int	main(int argc, char **argv)
{
	int	valeur;

	if (argc > 1)
	{
		valeur = *argv[1] - '0';
		ft_is_negative(valeur);
	}
	else
		ft_putchar('#');
}
*/