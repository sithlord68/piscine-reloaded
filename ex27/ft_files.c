/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:12:00 by pjolidon          #+#    #+#             */
/*   Updated: 2024/10/01 09:59:34 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_fopenr(char *filepath)
{
	int	fileid;

	fileid = open(filepath, O_RDONLY);
	return (fileid);
}

int	ft_fopenw(char *filepath)
{
	int	fileid;

	fileid = open(filepath, O_WRONLY);
	return (fileid);
}

int	ft_fclose(int file)
{
	int	result;

	result = 1;
	close(file);
	return (result);
}

void	ft_fread(int fileid, char *strread)
{
	read(fileid, strread, 1);
}

void	ft_fwrite(int fileid, char strwr)
{
	write(fileid, &strwr, 1);
}
