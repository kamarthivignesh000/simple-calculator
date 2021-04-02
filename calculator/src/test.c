#include<stdio.h>
#include "func.h"
//#include"unity_internals.h"
//#include"unity.h"
int main()
{
    int a=0,b=0,s=0,p;
    a=10;
    b=20;
    s=sum(a,b);
    p=prod(a,b);
    printf("sum=%d  product=%d\n",s,p);
}