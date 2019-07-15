#include<stdio.h>
int main()
{
int n,k,sum=0;
scanf("%d",&n);
int a[n];
scanf("%d",&k);
for(int i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(int j=0;j<=k;j++)
{
sum=sum+j;
}
printf("%d",sum);
return 0;
}
