#ifndef  __COMMON_H__
#define  __COMMON_H__
#include <reg52.h>

#define   uchar   unsigned char
#define   uint    unsigned int   

sbit   A138= P2^5 ;
sbit   B138= P2^6 ;
sbit   C138= P2^7 ;

sbit   buzz = P0^6;
void delay (unsigned int n);

#endif