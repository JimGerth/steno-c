#include <stdio.h>
// #include "steno.h"

int main(int argc, char **argv) {

	char *file;
	char *message;
	char *output;

	int status;
	// int status = steno(file, message, output);

	switch(status) {
		case 1: printf("an error occured while trying to hide message"); return 1;
		default: return 0;
	}
}
