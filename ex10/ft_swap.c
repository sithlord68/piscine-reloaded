/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:31:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/12 12:45:12 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	valeur1;
	int	valeur2;

	(void) argc;
	(void) argv;
	valeur1 = -3684;
	valeur2 = 423642;
	printf("valeurs avant traitement %i / %i\n", valeur1, valeur2);
	ft_swap(&valeur1, &valeur2);
	printf("valeurs apres traitement %i / %i\n", valeur1, valeur2);
}
*/