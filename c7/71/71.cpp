// 71.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int gcd(int m,int n);
int lcd(int m,int n);

int main()
{
    int a,b;
    printf("input a and b:");
    scanf("%d%d",&a,&b);
    printf("%d �� %d ���Լ��Ϊ%d\n",a,b,gcd(a,b));
    printf("��С������Ϊ:%d\n",lcd(a,b));
    return 0;
}

int gcd(int m,int n)
{
    int t;
    if(m<n)
    {
        t = m;
        m = n;
        n = t;
    }
    while(n != 0)
    {
        t = m%n;
        m = n;
        n = t;
    }
    return m;
}

int lcd(int m,int n)
{
    int t;
    t = m*n/gcd(m,n);
    return t;
}
