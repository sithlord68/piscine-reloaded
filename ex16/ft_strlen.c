/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:08:08 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/13 13:12:20 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
		cpt++;
	return (cpt);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str = "test de message !!!";

	(void) argc;
	(void) **argv;
	printf("longeur \"%s\": %i\n", str, ft_strlen(str));
}
*/