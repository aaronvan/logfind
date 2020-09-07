#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "logfind.h"

char line[COUNT];

void readLine(FILE *fp) {
    // read a line
    while (fgets(line, COUNT, fp) != NULL) {
       printf("%s", line); 
    }
    rewind(fp);
}

void searchWord(char *argv[1], FILE *fp) {
    // compare each word in the line 
    // to the seach word (argv[1])
    char *search = argv[1];
    for (int i = 0; i < COUNT; i++) {
      if (strcmp(search, line[i]) == 0) {
	printf("There is a match.");
      }
    }
}
