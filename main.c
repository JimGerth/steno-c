#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "steno.h"

char *file;
char *message;
char *output;

void getFile() {
	printf("Enter the input audio file: ");
	char tmp[100];
	scanf("%s", tmp);
	file = malloc(sizeof(char) * (strlen(tmp) + 1));
	strcpy(file, tmp);
}

void getMessage() {
	printf("Enter message you want to hide: ");
	char tmp[1000];
	scanf("%s", tmp);
	message = malloc(sizeof(char) * (strlen(tmp) + 1));
	strcpy(message, tmp);
}

void getOutput() {
	printf("Enter the output path: ");
	char tmp[100];
	scanf("%s", tmp);
	output = malloc(sizeof(char) * (strlen(tmp) + 1));
	strcpy(output, tmp);
}

int main(int argc, char **argv) {

	// at the moment message can only be one word, because of how arguments work
	switch (argc) {
		case 4:
			file = argv[1];
			message = argv[2];
			output = argv[3];
			break;
		case 3:
			file = argv[1];
			message = argv[2];
			getOutput();
			break;
		case 2:
			file = argv[1];
			getMessage();
			getOutput();
			break;
		case 1:
			getFile();
			getMessage();
			getOutput();
			break;
		// TODO: make the default so that anything from the second to the second to last argument is the message
		default: printf("correct usage: steno <input audio file path> [message file path [desired output audio file path]]"); return 0;
	}

	printf("%s %s %s", file, message, output);

	int status;
	// int status = steno(file, message, output);

	switch(status) {
		case 1: printf("an error occured while trying to hide message"); return 1;
		default: return 0;
	}
}
