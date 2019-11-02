// 49.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int g,s,b,q,w,a,n;
	printf("输入一个不多于五位数的整数");
	scanf("%d",&a);
	if(a>9999)
	{
		n=5;
	 } 
	 else 
	 	if(a>999)
	 {
	 	n=4;
	 }
	 else
	 	if(a>99)
	 {
	 	n=3;
	 }
	 else
	 	if(a>9)
	 {
	 	n=2;
	 }
	 else
	 {
	 
	 	n=1;
	}
	printf("%d\n",n);
	w=a/10000;
	q=(a-10000*w)/1000;
	b=(a-10000*w-1000*q)/100;
	s=(a-10000*w-1000*q-100*b)/10;
	g=(a-10000*w-1000*q-100*b-10*s);
	switch(n)
	{
		case 5:printf("%d,%d,%d,%d,%d\n",w,q,b,s,g);
		printf("%d,%d,%d,%d,%d\n",g,s,b,q,w);break;
		case 4:printf("%d,%d,%d,%d\n",q,b,s,g);
		printf("%d,%d,%d,%d\n",g,s,b,q);break;
		case 3:printf("%d,%d,%d\n",b,s,g);
		printf("%d,%d,%d\n",g,s,b);break;
		case 2:printf("%d,%d\n",s,g);
		printf("%d,%d\n",g,s);break;
		case 1:printf("%d\n",g);printf("%d\n",g);break;
		
		
		
	}
	
	
	
	return 0;
}
