#ifndef INCLUDE_VGSMML_H
#define INCLUDE_VGSMML_H

#define VGSMML_ERR_SUCCESS 0
#define VGSMML_ERR_NO_MEMORY 1

#ifdef __cplusplus
extern "C" {
#endif

struct VgsBgmData {
    void* data;
    size_t size;
};

struct VgsMmlErrorInfo {
    int code; /* error code */
    int line; /* MML's line number (0: not syntax error) */
    char message[248];
};

struct VgsBgmData* vgsmml_compile_from_file(const char* path, struct VgsMmlErrorInfo* err);
struct VgsBgmData* vgsmml_compile_from_memory(void* data, size_t size, struct VgsMmlErrorInfo* err);

#ifdef __cplusplus
};
#endif

#endif
