#include <stdio.h>
#include <stddef.h>
#include <inttypes.h>

int main()
{
    printf("Hello World.\n");
    printf("Platform: %s.\n", SIZE_MAX == UINT64_MAX ? "64-bit" : "32-bit");
    return 1;
}
