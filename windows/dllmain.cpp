// Author: Sean Pesce

#define WIN32_LEAN_AND_MEAN    // Exclude rarely-used stuff from Windows headers

#include <windows.h>
#include <stdio.h>
#include <process.h>

#define SHELL_PATH "C:\\Windows\\System32\\cmd.exe"
#define SHELL_COMMAND "C:\\Windows\\System32\\cmd.exe"

BOOL APIENTRY DllMain(HMODULE h_module, DWORD  ul_reason_for_call, LPVOID lp_reserved)
{
    long long err = -2;
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        puts("[lib2shell by SeanP]");
        printf("Starting %s\n", SHELL_COMMAND);
        err = _execl(SHELL_PATH, SHELL_PATH, "/c", SHELL_COMMAND, NULL);
        printf("Result: %lld\n", err);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

