#include "builtins.h"
#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell_loop(void);

int main() {
    printf("Welcome to Mini Shell!\n");
    printf("Type exit to terminate the program.\n");
    shell_loop();
    return 0;
}

void shell_loop(void) {
    char input[MAX_INPUT];
    char *args[MAX_ARGS];

    while (1) {
        printf("mini-shell> ");
        if (fgets(input, MAX_INPUT, stdin) == NULL) {
            printf("\nExiting mini shell.\n");
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        parse_input(input, args);

        if (handle_builtin_commands(args)) {
            continue;
        }

        execute_command(args);
    }
}

