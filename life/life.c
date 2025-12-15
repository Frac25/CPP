#include"life.h"


void init_map(char** map, t_data data)
{
	int j;
	int i;

	j = 0;
	while(j < data.height)
	{
		i = 0;
		while(i < data.width)
		{
			map[j][i] = data.dead;
			i++;
		}
		j++;
	}
}

char** create_map(t_data data)
{
	char ** map;
	int j;

	map = malloc(sizeof(char*) * (data.height  + 1));
	map[data.height] = NULL;

	j = 0;
	while(j < data.height)
	{
		map[j] = malloc(sizeof(char) * (data.width  + 1));
		j++;
	}
	map[j] = NULL;
	init_map(map, data);
	return(map);
}


void copie_map(char **map, char** map2)
{
	int j;
	int i;


	j = 0;
	while(map[j])
	{
		i = 0;
		while(map[j][i])
		{
			map[j][i] = map2[j][i];
			i++;
		}
		j++;
	}
}

void free_map(char** map)
{
	int j;
	int i;

	j = 0;
	while(map[j])
	{
		free(map[j]);
		j++;
	}
	free(map);
}

void print_map(char** map)
{
	int j;
	int i;


	j = 0;
	while(map[j])
	{
		i = 0;
		while(map[j][i])
		{
			putchar(map[j][i]);
			i++;
		}
		putchar('\n');
		j++;
	}
}

void write_map(t_data data)
{
	int j = 0;
	int i = 0;
	int b = 0;
	int x = 0;

	while(data.buf[b])
	{
		if(i > data.width || j > data.height)
			printf("write error");
		if(data.buf[b] == 'x')
			x = (x + 1) % 2;
		else if(data.buf[b] == 'd')
			i++;
		else if(data.buf[b] == 'a')
			i--;
		else if(data.buf[b] == 's')
			j++;
		else if(data.buf[b] == 'w')
			j--;
		else
			printf("map format error\n");

		printf("x = %d   i = %d   j = %d    buf[b] = %c\n", x, i, j, data.buf[b]);
		if(x == 1)
			data.map[j][i] = data.live;
		b++;
	}

}

int nei(t_data data, int a, int b)
{
	if(a >= 0 && b >= 0 && a < data.width && b < data.height && data.map[a][b] == data.live)
		return(1);
	return(0);
}

int count(t_data data, int i, int j)
{
	int n = 0;

	n += nei(data, j-1, i-1);
	n += nei(data, j-1, i);
	n += nei(data, j-1, i+1);
	n += nei(data, j, i-1);
	n += nei(data, j, i+1);
	n += nei(data, j+1, i-1);
	n += nei(data, j+1, i);
	n += nei(data, j+1, i+1);

	return(n);

}

void run(t_data data)
{
	int j;
	int i;
	int n = 0;

	j = 0;
	while(data.map[j])
	{
		i = 0;
		while(data.map[j][i])
		{
			n = count(data, i, j);
			if (data.map[j][i] == data.live && (n == 2 || n == 3))
				data.map2[j][i] =  data.live;
			else if (data.map[j][i] == data.dead && n == 3)
				data.map2[j][i] =  data.live;
			else
				data.map2[j][i] =  data.dead;
			i++;
		}
		j++;
	}

}



int main(int argc, char** argv)
{
	t_data data;
	data.dead = '.';
	data.live = '0';
	int fd = 0;
	int nb_read;

	if(argc != 4)
	{
		printf("error argc\n");
		return(-1);
	}

	data.buf = malloc(sizeof(char) * (BUFFERSIZE + 1));
	data.buf_size = read(fd, data.buf, BUFFERSIZE);
	data.buf[data.buf_size -1] = '\0';

//	printf("argc : %d   argv[1] : %s iteration : %s \n", argc, argv[1], argv[3]);
//	printf("nb_read : %d \n", nb_read);
//	printf("buf_raw : %s \n", buf_raw);

	data.width = atoi(argv[1]);
	data.height = atoi(argv[2]);
	data.iteration = atoi(argv[3]);
	int j;

	printf("width : %d   height : %d iteration : %d \n", data.width, data.height, data.iteration);

	data.map = create_map(data);
	data.map2 = create_map(data);
	write_map(data);

	int it = 0;
	while(it < data.iteration)
	{
		run(data);
		copie_map(data.map, data.map2);
		it++;
		print_map(data.map);
		putchar('\n');
	}

//		print_map(data.map);
//		putchar('\n');

	free (data.buf);
	free_map(data.map);
	free_map(data.map2);
	return(0);
}