/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:03:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/13 21:30:00 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cpt;

	cpt = 0;
	while (s1[cpt] && s2[cpt] && s1[cpt] == s2[cpt])
		cpt++;
	if (s1[cpt] > s2[cpt])
		return (s1[cpt]);
	if (s1[cpt] < s2[cpt])
		return (-s2[cpt]);
	return (0);
}

/*
int	main(int argc, char **argv)
{
	char	*s1 = "test de message !!!";
	char	*s2 = "test de me144ad!!!";

	(void) argc;
	(void) **argv;
	printf("comp \"%s\" et \"%s\": %i\n", s1, s2, ft_strcmp(s1, s2));
	printf("comp \"%s\" et \"%s\": %i\n", s2, s1, ft_strcmp(s2, s1));
	printf("comp \"%s\" et \"%s\": %i\n", s1, s1, ft_strcmp(s1, s1));
}
*/