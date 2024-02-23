#ifndef WLEDDISPLAYLIB_H
#define WLEDDISPLAYLIB_H
#include <Arduino.h>
void write(int x, int y, int z);
void brightness(int b);
void clear();
void fill();
void Random();
void onebyone(int d);
void VM(int x);
void hearts();
void letters();
extern int itr[8];
extern int alphabet[26][8];
extern int smallAlphabet[26][8];
extern int V[8];
extern int M[8];
#endif