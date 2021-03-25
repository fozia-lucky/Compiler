#include<stdio.h>
int main()
{
int i,n,sum=0;
int arr[10],max,min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
max=arr[i];
min=arr[i];

for(i=0;i<n;i++)
{

   if( arr[i]>max)
   {
       max=arr[i];

   }

}
printf("%d ",sum);

return 0;

}
