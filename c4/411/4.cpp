// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
 int a,b,c,d,e;
 scanf("%d,%d,%d,%d,%e",&a,&b,&c,&d,&e);
 if(a>b)
 {
 e=a;
 a=b;
 b=e;
 }
 if(a>c)
 {
 e=a;
 a=c;
 c=e;
 }
 if(a>d)
 {
 e=a;
 a=d;
 d=e;
 }
 if(b>c)
 {
 e=b;
 b=c;
 c=e;
 }
 if(b>d)
 {
 e=b;
 b=d;
 d=e;
 }
 if(c>d)
 {
 e=c;
 c=d;
 d=e;
 }
printf("%d,%d,%d,%d",a,b,c,d);


	return 0;
}

