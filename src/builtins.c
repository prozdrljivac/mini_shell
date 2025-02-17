#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int handle_builtin_commands(char **args) {
    if (args[0] == NULL) {
        return 0;
    }

    if (strcmp(args[0], "exit") == 0) {
        printf("Exiting mini shell.\n");
        exit(0);
    }

    if (strcmp(args[0], "cd") == 0) {
        if (args[1] == NULL) {
            fprintf(stderr, "cd: missing argument\n");
        } else if (chdir(args[1]) != 0) {
            perror("cd failed");
        }
        return 1;
    }

    return 0;
}
