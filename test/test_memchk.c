#include <stdio.h>
#include <string.h>
#include "vgsmml.h"

int main(int argc, char* argv[])
{
    struct VgsMmlErrorInfo err;
    char foo[4];
    strcpy(foo, "foo");
    if (NULL == vgsmml_compile_from_memory(foo, 3, &err) && VGSMML_ERR_SYNTAX_UNKNOWN == err.code && 1 == err.line) {
        printf("%s (code=%d, line=%d)\n", err.message, err.code, err.line);
        return 0;
    }
    puts("test failed");
    return -1;
}
