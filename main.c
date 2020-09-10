#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dbg.h"
#include "logfind.h"

char line[COUNT];

int main(int argc, char *argv[]) {
	int i = 1;
    
	if (argc < 2) {
		puts("You must enter a search word.");
		goto error;
    }
	
	void compareWords(char *a[], char *b[]) {
		int rc = strncmp(argv[i], line, COUNT);
		word_compare(rc == 0);
	}
	
	void readLine(FILE *fp) {
		while (fscanf(fp, "%1023s", line) == 1) {
			compareWords(argv[i], line);
		}
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
