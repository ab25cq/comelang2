typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;

static inline __uint16_t
swap_16 (int __bsx)
{
  int a = 111 & 0xff;
  //(((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));
}

