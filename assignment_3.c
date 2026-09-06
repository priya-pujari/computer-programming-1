#include<stdio.h>
void main()
{
int sum=0;
for(int i=1;i<=100; i++)
{
if (i%13==0)
{
 sum=sum+i;
}
}
printf ("sum of numbers divisible by 13: %d\n",sum);
}
