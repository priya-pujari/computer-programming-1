#include<stdio.h>
void main()
{
float num, sum=0,mean;
printf ("enter the 10 numbers: \n");
for (int i=0; i<10; i++)
{
scanf("%f",&num);
sum+=num;
}
mean= sum/10;
printf ("sum= %.2f\n mean= %.2f\n",sum,mean);
}
