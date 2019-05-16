#include "al2o3_platform/platform.h"

#define STB_EXTERN AL2O3_EXTERN_C

#define STB_DXT_IMPLEMENTATION

#define STB_IMAGE_IMPLEMENTATION
#define STBI_MALLOC malloc
#define STBI_REALLOC realloc
#define STBI_FREE free
#define STBI_ASSERT ASSERT
#if defined(__ANDROID__)
#define STBI_NO_SIMD
#endif

#define STB_IMAGE_RESIZE_IMPLEMENTATION

#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STBIW_MALLOC malloc
#define STBIW_REALLOC realloc
#define STBIW_FREE free
#define STBIW_ASSERT ASSERT


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