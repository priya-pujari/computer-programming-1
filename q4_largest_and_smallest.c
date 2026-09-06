#include<stdio.h>
void main()
{
int num,max,min;
printf ("enter 10 numbers: \n");
scanf ("%d", &num);
max = min= num;
for(int i=1; i<10; i++)
{
scanf("%d", &num);
if (num>max) max=num;
if (num<min) min=num;
}
printf("largest=%d\n smallest=%d\n", max,min);
}
