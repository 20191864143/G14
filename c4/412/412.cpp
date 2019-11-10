// 412.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float l1,l2,l3,l4,x,y,x1,y1,x2,y2,x3,y3,x4,y4;
	x1=2,y1=2,x2=-2,y2=2,x3=2,y3=-2,x4=-2,y=-2;
	printf("请输入x,y\n");
	scanf("%f,%f",&x,&y);
	l1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
	l2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	l3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
	l4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
	if(l1<1||l2<1||l3<1||l4<1)
	{
		printf("此处的高度为10");
	}
	else
	{
		printf("此处高度为0"); 
	}
	return 0; 
}

