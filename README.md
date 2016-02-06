# vgs-mml-compiler
In memory compiler for VGS MMLs

## Interface (draft)
```
struct VgsBgmData
{
    void* data;
    size_t size;
};

struct VgsMmlErrorInfo
{
    int code; /* error code */
    int line; /* MML's line number (0: not syntax error) */
    char message[248];
};

struct VgsBgmData* vgsmml_compile_from_file(const char* path, struct VgsMmlErrorInfo* err);
struct VgsBgmData* vgsmml_compile_from_memory(void* data, size_t size, struct VgsMmlErrorInfo* err);
```

### arguments
- `mml` : path of a MML file
- `data` : pointer of loaded MML file
- `size` : size of data
- `err` : stores error information (must not NULL)

### return value
- NULL: failed
- !NULL: success
