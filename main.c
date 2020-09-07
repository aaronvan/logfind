#include <stdio.h>
#include <stdlib.h>

#include "dbg.h"

#define COUNT 500 

int main(int argc, char *argv[]) {
    FILE *fp = NULL;
    char words[COUNT];

    fp = fopen(argv[1], "r");
    check(fp != NULL, "File failed to open.");

    fread(words, sizeof(char), COUNT, fp);

    for (int i = 0; i < COUNT; i++) {
	printf("%c", words[i]);
    }

    fclose(fp);

    return EXIT_SUCCESS;

error:
    return EXIT_FAILURE;
}
