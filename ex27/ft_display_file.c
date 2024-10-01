/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:00:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/10/01 09:59:40 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_fopenr(char *filepath);
int		ft_fclose(int file);

int	ft_display_file(char *filepath)
{
	int		fileid;
	int		result;
	char	charread;

	fileid = ft_fopenr(filepath);
	if (fileid == -1)
		return (75);
	while (read(fileid, &charread, 1))
		write(1, &charread, 1);
	result = ft_fclose(fileid);
	return (result);
}

int	main(int argc, char **argv)
{
	int	result;

	result = 1;
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		result = 42;
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		result = 42;
	}
	else
	{
		result = ft_display_file(argv[1]);
		if (result != 1)
			ft_putstr("Cannot read file.\n");
	}
	return (result);
}
