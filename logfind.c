#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dbg.h"
#include "logfind.h"

extern char **global_argv;

char line[COUNT];

void readLine(FILE *fp) {
    while (fgets(line, COUNT, fp) != NULL) {
       printf("%s", line); 
       searchWord(global_argv[1]);
    }
}

void searchWord(char *argv[]){
    printf("The search word is: %s\n", global_argv[1]);
}
