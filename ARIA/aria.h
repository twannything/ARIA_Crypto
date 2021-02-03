/* 평문 비트 / 키 사이즈 / 라운드 
128 - 16 / 16 / 12
192 - 16 / 24 / 14
256 - 16 / 32 /16
*/

#include <stdio.h>
#include <string.h>


#define Nk 16
#define Nb 16

#if Nk == 16
#define Nr 12

#elif Nk == 24
#define Nr == 14

#else
#define Nr ==16

#endif

typedef unsigned char byte;



