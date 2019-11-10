// 10 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float i,j;
	scanf("%f",&i);
		int t;
			t=i/100000;
		if(t>=6&&i<10)
		{
		i=6;
		}
		if(t>=10)
		{
		i=10;
		}
	switch(t)
	{
		
	case 0:
		j=i*0.1;
		printf("%f\n",j);break;
	case 1:
		j=10000+(i-100000)*0.075;
		printf("%f\n",j);break;
	case 2:
		j=17500+(i-200000)*0.05;
		printf("%f\n",j);break;
	case 3:
		j=17500+(i-200000)*0.05;
		printf("%f\n",j);break;
	case 4:
		j=27500+(i-400000)*0.03;
		printf("%f\n",j);break;
	case 5:
		j=27500+(i-400000)*0.03;
		printf("%f\n",j);break;
	case 6:
		j=33500+(i-600000)*0.015;
		printf("%f\n",j);break;
	case 7:
	case 8:
	case 9:
	case 10:
		j=39500+(i-1000000)*0.01;
		printf("%f\n",j);break;


	}
	return 0;
}

