#include<stdio.h>
void main()
{
int a[100],b,i,j,s=0,s1=0,n=0,n1=0,avg,avg1;
scanf("%d",&b);
for(i=0;i<b;i++)
scanf("%d",&a[i]);
for(i=0;j<n/2;j++)
{
s=s+a[i];
n++;
}
for(i=b/2;i<b;i++)
{
s1=s1+a[i];
}
avg=s/n;
avg1=s1/n1;
if(avg==avg1)
printf("possible");
else
printf("not possible");
}
