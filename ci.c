#include<stdio.h>
int main(){
float a,p,r,t,ci=0,si=0;
printf("enter the value of a :");
scanf("%f",&a);
printf("enter the value of p :");
scanf("%f",&p);
ci=a-p;
printf("%f\n",ci);
printf("enter the value of r :");
scanf("%f",&r);
printf("enter the value of t :");
scanf("%f",&t);
si=(p*r*t)/100;
printf("%f",si);
}
