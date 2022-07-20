#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,c,ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    c=pow(1+r/100,t);
    ci=c*p;
    printf("%.2lf",ci);
}