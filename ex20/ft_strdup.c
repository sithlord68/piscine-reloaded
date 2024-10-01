/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:22:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/14 21:40:00 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	result = malloc(sizeof (char) * (i + 1));
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = src[i];
	return (result);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*src;
	char	*dst;

	(void) argc;
	(void) argv;
	src = "Ceci est une string de test";
	dst = ft_strdup(src);
	printf("chaine source: \"%s\"\n", src);
	printf("chaine destination: \"%s\"\n", dst);
}
*/