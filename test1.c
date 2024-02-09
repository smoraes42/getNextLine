/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:44:28 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/09 22:01:42 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <fcntl.h>

char *get_next_line(int fd)
{
	size_t ind;
	size_t size;
	char str[BUFF_SIZE];

	int reed;
}
int do_stuff()
{
	long long int check;

	check = read(fd, str, BUFF_SIZE);
	if (check < 0)
		return (NULL);
	while(str[ind] != EOF)
	{
		while (ind <= BUFF_SIZE)
		{
			if(str[ind] == '\n')
			{
				size += ind;
				return size;
			}
			if(str[ind] == EOF)
				return NULL;
			ind++;
		}
		size += ind;
		check = read(fd, str, BUFF_SIZE);
		if (reed < 0)
			return (NULL);
	}
}

int main(void)
{
	int fd = open("./README.md", O_RDONLY);
	reed = get_next_line(fd);

}
