#define CREATE_LIB // export functions
#include <test.h>

DLL_DECL int function(int a) 
{
    return a + 1;
}
