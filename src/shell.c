#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 256
#define MAX_ARGS 11

void parse_input(char *input, char **args) {
    char *token;
    int index = 0;

    token = strtok(input, " ");
    while (token != NULL && index < MAX_ARGS - 1) {
        args[index++] = token;
        token = strtok(NULL, " ");
    }

    args[index] = NULL;
}