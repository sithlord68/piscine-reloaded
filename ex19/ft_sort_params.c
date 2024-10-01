/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:30:08 by pjolidon          #+#    #+#             */
/*   Updated: 2024/09/30 18:17:19 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		ft_putchar(str[x++]);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	if (s1[x] > s2[x])
		return (s1[x]);
	if (s1[x] < s2[x])
		return (-s2[x]);
	return (0);
}

void	ft_strcpy(char *s1, char *s2)
{
	int		x;

	x = 0;
	while (s1[x] != '\0')
	{
		s2[x] = s1[x];
		x++;
	}
	s2[x] = s1[x];
}

void	ft_swap(char *s1, char *s2)
{
	char	s3[100];

	ft_strcpy(s1, s3);
	ft_strcpy(s2, s1);
	ft_strcpy(s3, s2);
}

int	main(int argc, char **argv)
{
	char	s[50][100];
	int		x;
	int		y;

	x = 1;
	while (x < argc)
	{
		ft_strcpy(argv[x], s[x]);
		x++;
	}
	x = 1;
	while (x < argc - 1)
	{
		y = x + 1;
		while (y < argc)
		{
			if (ft_strcmp(s[x], s[y]) > 0)
				ft_swap(s[x], s[y]);
			y++;
		}
		x++;
	}
	x = 1;
	while (x < argc)
		ft_putstr(s[x++]);
}
