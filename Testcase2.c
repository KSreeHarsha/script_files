#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
		FILE *fp;
		char *line = NULL;
		size_t len = 0;
		ssize_t read;

		fp = fopen("text","a+");
		if (fp == NULL)
		{	printf("Error openning the file\r\n");			
			exit(EXIT_FAILURE);}

		while ((read = getline(&line, &len, fp)) != -1) {
				printf("Retrieved line of length %zu :\n", read);
				printf("%s", line);
		}

		free(line);
		fclose(fp);
		exit(EXIT_SUCCESS);
}

