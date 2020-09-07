#include <stdio.h>
#include <stdlib.h>

#include "dbg.h"

#define COUNT 500 

int main(int argc, char *argv[]) {
    FILE *fp = NULL;
    char words[COUNT];

    // open the file
    fp = fopen(argv[1], "r");
    check(fp != NULL, "File failed to open.");

    // read the file
    int rc = fread(words, sizeof(char), COUNT, fp);
    check(rc = COUNT, "File did not read properly.")

    for (int i = 0; i < COUNT; i++) {
	    printf("%c", words[i]);
    }

    fclose(fp);

    return EXIT_SUCCESS;

error:
    return EXIT_FAILURE;
}
