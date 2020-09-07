#include <stdio.h>
#include <stdlib.h>

#include "logfind.h"

char line[COUNT];

void readLine(FILE *fp) {
    // read each line
    while (fgets(line, COUNT, fp) != NULL) {
       printf("%s", line); 
    }
}
