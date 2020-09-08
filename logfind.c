#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dbg.h"
#include "logfind.h"

extern char **global_argv;

char line[COUNT];

void readLine(FILE *fp) {
    while (fscanf(fp, "%1023s", line) == 1) { 
       compareWords(global_argv[1], line);
       //puts(line); 
    }
}

void compareWords(char *a[], char *b[]){
    int rc = strncmp(global_argv, line, COUNT);
      word_compare(rc == 0);
}
