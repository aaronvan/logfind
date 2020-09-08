#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dbg.h"
#include "logfind.h"

char **global_argv;

int main(int argc, char *argv[]) {
    global_argv = argv;
    FILE *fp = NULL;
	    
    // open the file
    fp = fopen("data.txt", "r");
    check(fp != NULL, "File failed to open.");
	
    // read each line in file to sdout
    readLine(fp);	
    // compare each word with the search word
    searchWord(argv[1]);
	
    fclose(fp);

    return EXIT_SUCCESS;

error:
    return EXIT_FAILURE;
}
