// 72.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	float dis1(float a,float b,float c);
	float dis2(float a,float b,float c);
	float dis3(float a,float b,float c);
	float a,b,c,temp;
	printf("Please input three numbers");
	scanf("%f,%f,%f",&a,&b,&c);
	temp=b*b-4*a*c;
	if(temp==0)
	{
		printf("%f",dis1(a,b,c));
	}
	else if(temp>0)
	{
		printf("x1=%f",dis2(a,b,c));
		printf("x2=%f",dis3(a,b,c));
	}
	else
	{
		printf("NO");
	}
	return 0;

}
float dis1(float a,float b,float c)
{
	float m;
	m=(-b)/(2*a);
	return(m);

}
float dis2(float a,float b,float c)
{
	float m;
	m=((-b)+sqrt(b*b-4*a*c))/(2*a);
	return m;
}
float dis3(float a,float b,float c)
{
	float m;
	m=((-b)-sqrt(b*b-4*a*c))/(2*a);
	return m;

}



