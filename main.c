/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkellehe <jkellehe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 21:38:15 by jkellehe          #+#    #+#             */
/*   Updated: 2018/08/14 22:26:09 by jkellehe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char **line;
	int fd = 1;

	argv[1]++;
	write(1, "hey\n", 5);
	line = (char**)malloc(sizeof(char*));
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (get_next_line(fd, line) > 0)
	{
		printf("%s\n", *line);
	}
	return (0);
}
