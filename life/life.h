#ifndef LIFE_H
# define LIFE_H

#define BUFFERSIZE 5

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

typedef struct s_data
{
	int width;
	int height;
	int iteration;
	int buf_size;
	char* buf;
	char** map;
	char** map2;
	char dead;
	char live;
} t_data;


#endif
