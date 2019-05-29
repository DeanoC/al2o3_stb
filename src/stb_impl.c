#include "al2o3_platform/platform.h"
#include "al2o3_memory/memory.h"

#define STB_EXTERN AL2O3_EXTERN_C

#define STBI_MALLOC Memory_GlobalAllocator.malloc
#define STBI_REALLOC Memory_GlobalAllocator.realloc
#define STBI_FREE Memory_GlobalAllocator.free
#define STBIR_MALLOC(x,u) ((void)(u),STBI_MALLOC(x))
#define STBIR_FREE(x,u) ((void)(u),STBI_FREE(x))
#define STBTT_malloc(x,u)  ((void)(u),STBI_MALLOC(x))
#define STBTT_free(x,u)    ((void)(u),STBI_FREE(x))
#define STBIW_MALLOC STBI_MALLOC
#define STBIW_REALLOC STBI_REALLOC
#define STBIW_FREE STBI_FREE

#define STBIW_ASSERT(x) { ASSERT(x); }
#define STBI_ASSERT(x) { ASSERT(x); }
#define STBTT_assert(x) ASSERT(x);
#if defined(__ANDROID__)
#define STBI_NO_SIMD
#endif

#define STB_DXT_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_RESIZE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STB_TRUETYPE_IMPLEMENTATION

#ifdef _WIN32
#define STBI_MSC_SECURE_CRT
#endif

#define STB_DEFINE

#include "al2o3_stb/stb_dxt.h"
#include "al2o3_stb/stb_image.h"
#include "al2o3_stb/stb_image_resize.h"
#include "al2o3_stb/stb_image_write.h"
#include "al2o3_stb/stb_truetype.h"
#include "al2o3_stb/stb_hash.h"
#include "al2o3_stb/stb_dict.h"