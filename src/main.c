#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum command length
#define MAX_INPUT 256

void shell_loop(void);

int main() {
    printf("Welcome to Mini Shell!\n");
    printf("Type exit to terminate the program.\n");
    shell_loop();
    return 0;
}

void shell_loop(void) {
    char input[MAX_INPUT];

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

        printf("You entered: %s\n", input);
    }
}
