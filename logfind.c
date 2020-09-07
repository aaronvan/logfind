#include <stdio.h>
#include <stdlib.h>

#include "logfind.h"

char line[COUNT];

void readLine(FILE *fp) {
		// read each line
		while (!feof(fp)) { 
			fgets(line, COUNT, fp);
			printf("%s", line); 
		}
		puts("\n");
	}