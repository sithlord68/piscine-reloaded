/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 00:05:16 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/12 00:30:19 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
		ft_putchar(alpha++);
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/