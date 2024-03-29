// Author: Sean Pesce

#include <stdio.h>
#include <unistd.h>

#define SHELL_PATH "/bin/sh"
#define SHELL_COMMAND "/bin/sh"
 
void __attribute__ ((constructor)) constructor()
{
    puts("[lib2shell by SeanP]");
    printf("Starting %s\n", SHELL_COMMAND);
    long long err = execl(SHELL_PATH, SHELL_PATH, "-c", SHELL_COMMAND, NULL);
    printf("Result: %lld\n", err);
}
