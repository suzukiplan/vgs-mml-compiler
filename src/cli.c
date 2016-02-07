#include <stdio.h>
#include "vgsmml.h"

int main(int argc, char* argv[])
{
    struct VgsBgmData* bgm;
    struct VgsMmlErrorInfo err;
    if (argc < 3) {
        puts("usage: vgs2mml mml-file bgm-file");
        return 1;
    }
    bgm = vgsmml_compile_from_file(argv[1], &err);
    if (NULL == bgm) {
        if (err.line) {
            printf("error(%d) line=%d: %s\n", err.code, err.line, err.message);
        } else {
            printf("error(%d) %s\n", err.code, err.message);
        }
        return 2;
    }
    vgsmml_free_bgm_data(bgm);
    return 0;
}
