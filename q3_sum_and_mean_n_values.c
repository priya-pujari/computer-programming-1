#include<stdio.h>
void main()
{
int n;
float num, sum=0,mean;
printf ("enter the number of values (n): ");
scanf ("%d",&n);
printf ("enter %d numbers :\n",n);
for (int i=0; i<n; i++)
{
scanf ("%f",&num);
sum+=num;
}
mean=sum/n;
printf ("sum= %.2f\n mean=%.2f\n",sum,mean);
}
