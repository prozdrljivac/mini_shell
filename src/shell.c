#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
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

void execute_command(char **args) {
    if (args[0] == NULL) {
        return;
    }

    pid_t pid = fork();

    if (pid == -1) {
        perror("fork failed");
    } else if (pid == 0) {
        if (execvp(args[0], args) == -1) {
            perror("execvp failed");
        }
        exit(EXIT_FAILURE);
    } else {
        int status;
        waitpid(pid, &status, 0);
    }
}