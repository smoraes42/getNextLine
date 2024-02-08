/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:25:10 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/08 20:04:20 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
   cc -D BUFFER_SIZE=n    -> ... BUFFER_SIZE
   cc -D B_SIZE=n    -> ... B_SIZE

   hola mundo\n
   adios paco

   15
   buffer <- "hola mundo\nadios"
   retorno <- "hola mundo\n"
   static <- "adios"
   -> " paco"

   15
   buffer <- " paco"
   retorn <- "adios paco" = static + buffer
   static <- NULL

   printf("BUFFER_SIZE -> %d\n", BUFFER_SIZE);
   int fd = open("../basics/read/text.txt", 1);
   if (fd < 0)
   {
   printf("Error Number %d\n", errno);
   perror("Program\n");
   return(0);
   }
   get_next_line(fd);
   if (close(fd1) < 0)
   {
   printf("Error Number %d\n", errno);
   perror("File Not Closed");
   return(0);
   }
   printf("closed the fd.\n");

*/

char *get_next_line(int fd);

int main(void)
{
	char test[BUFFER_SIZE];
	int fd = open("get_next_line.h", O_RDONLY);
	strlcpy(test, get_next_line(fd), BUFFER_SIZE);
	printf("%s", test);
	return (0);

	// read stuff
}

char	*get_next_line(int fd)
{
	size_t	ret;
	size_t	bsiz;
	char	str[BUFFER_SIZE];
	char	*buff = (char *) malloc(BUFFER_SIZE * sizeof(char));
	
	bsiz = 0;
	ret = read(fd, str, BUFFER_SIZE);
	if (ret == -1)
	{
		free(buff);
		return (NULL);
	}
	while (str[bsiz] != '\n' || bsiz - BUFFER_SIZE)
		bsiz++;
	if (str[bsiz] == '\n')
	{
		buff -< 
		return 
	}

	printf("read bytes -> %d", ret);
	return (buff);


	//while(size_t--)
	//line = read <-
 	//if char = \n
	//return line
	//else 
	//save index
	//continue readinng
	//if end of file or not \n 
	//return NULL
/*
Repeated calls (e.g., using a loop) to your get_next_line() function should let
you read the text file pointed to by the file descriptor, one line at a time.

Your function should return the line that was read.
If there is nothing else to read or if an error occurred, it ttl should return NULL.

	Make sure that your function works as expected both when reading a file and when
reading from the standard input.

Please note that the returned line should include the terminating \n character,
except if the end of file was reached and does not end with a \n character.

	Because you will have to read files in get_next_line(), add this option to your
compiler call: -D BUFFER_SIZE=n
It will define the buffer size for read().
*/

}

