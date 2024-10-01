/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:00:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/14 22:32:00 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		result = NULL;
		return (result);
	}
	result = malloc(sizeof (int) * (max - min));
	if (result == NULL)
		return (result);
	i = 0;
	while (min + i < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*tab;
	int	min;
	int	max;
	int	i;

	(void) argc;
	(void) argv;
	min = 12;
	max = 35;
	printf("range %i / %i: \n", min, max);
	tab = ft_range(min, max);
	i = 0;
	while (tab[i])
		printf ("%i / ", tab[i++]);
	printf ("\n");
	printf("range %i / %i: \n", max, min);
	tab = ft_range(max, min);
	if (tab != NULL)
	{
		i = 0;
		while (tab[i])
			printf ("%i / ", tab[i++]);
	}
	printf ("\n");
}
*/