#ifndef SHELL_H
#define SHELL_H

#define MAX_INPUT 256
#define MAX_ARGS 11

void shell_loop(void);
void parse_input(char *input, char **args);
void execute_command(char **args);

#endif