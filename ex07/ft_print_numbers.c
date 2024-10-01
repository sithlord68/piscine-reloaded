/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 00:05:16 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/12 00:30:19 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	alpha;

	alpha = '0';
	while (alpha <= '9')
		ft_putchar(alpha++);
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/