/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:31:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/12 16:48:00 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	valeur1;
	int	valeur2;
	int	div;
	int	mod;

	(void) argc;
	(void) argv;
	valeur1 = 42;
	valeur2 = 4;
	ft_div_mod(valeur1, valeur2, &div, &mod);
	printf("division de %i par %i\n", valeur1, valeur2);
	printf("resultat div %i mod %i\n", div, mod);
}
*/