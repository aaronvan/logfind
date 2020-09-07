#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dbg.h"
#include "logfind.h"

int main(int argc, char *argv[]) {
    FILE *fp = NULL;
	    
    // open the file
    fp = fopen("logs.txt", "r");
    check(fp != NULL, "File failed to open.");
	
	// read each line in file to sdout
	readLine(fp);	
	
    fclose(fp);

    return EXIT_SUCCESS;

error:
    return EXIT_FAILURE;
}
