/*
author:lawrence kipruto koskei
reg no:ct101/G/24773
*/

#include <stdio.h>
#include <math.h>
int main(){
float principle,time,rate,N;
printf("enter principle:");
scanf("%f",& principle);

printf("enter the time:");
scanf("%f",&time);

printf("enter the rate:");
scanf("%f",& rate);

printf("enter the value of N:");
scanf("%f",&N);

float compound_interest=principle*pow((1+(rate/(100*N))),N*time)-principle;
printf("the compound_interest is:%f", compound_interest);
return 0;

}