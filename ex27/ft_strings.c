/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:08:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/17 17:12:00 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
		cpt++;
	return (cpt);
}

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
