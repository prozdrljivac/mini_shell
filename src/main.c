#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum command length
#define MAX_INPUT 256
// Maximum number of arguments on the command
#define MAX_ARGS 11

void shell_loop(void);
void parse_input(char *input, char **args);
void execute_command(char **args);

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

        if (strcmp(input, "exit") == 0) {
            printf("Goodbye!\n");
            break;
        }

        parse_input(input, args);
        execute_command(args);
    }
}

