#include <stdio.h>

int main(int argc, char **argv) {

	// printing all the command line arguments excluding the name of the programm
	printf("command line arguments: ");
	for (int i = 1; i < argc; i++) {
		printf("%s ", argv[i]);
	}

	return 0;
}
