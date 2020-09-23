#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dbg.h"
#include "logfind.h"

char **global_argv;

int main(int argc, char *argv[]) {
	global_argv = argv[1];
	int i = 0;
    
	if (argc < 2) {
		puts("You must enter a search word.");
		goto error;
    }
	
    FILE *fp = NULL;
	    
    // open the file.
    fp = fopen("data.txt", "r");
    check(fp != NULL, "File failed to open.");
	
    for (; i < argc; i++) {
		readLine(fp);	
		rewind(fp);
    }	
    fclose(fp);

    return EXIT_SUCCESS;

error:
    return EXIT_FAILURE;
}
