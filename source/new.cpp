#include <inttypes.h>
#include <stddef.h>

void* __cdecl
operator new[](size_t size, const char*, int, unsigned, const char*, int)
{
  return new uint8_t[size];
}

void* __cdecl
operator new[](size_t size,
               size_t,
               size_t,
               const char*,
               int,
               unsigned,
               const char*,
               int)
{
  return new uint8_t[size];
}
