// module_a.h
#ifndef MODULE_B_H
#define MODULE_B_H

#ifdef _WIN32
  #define MODULEB_EXPORT __declspec(dllexport)
#else
  #define MODULEB_EXPORT
#endif

void MODULEA_EXPORT hello_b();

#endif // MODULE_B_H