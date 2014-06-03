#ifndef __TEST_H__
#define __TEST_H__

#ifdef _WIN32
#  ifdef CREATE_LIB
#    define DLL_DECL __declspec(dllexport) // create DLL
#  else
#    define DLL_DECL __declspec(dllimport) // use DLL
#  endif
#else
#  define DLL_DECL // not required on other platforms than Windows
#endif

DLL_DECL int function(int a);

#endif
