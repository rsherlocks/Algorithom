#include<stdio.h>
int main()
{
int a[5]={2,1,8,5,4};
int temp,i,j;
for(j=2;i<5;i++)
{
    //j=i;
    i=j-1;
    temp=a[j];
    while(temp<a[i] && i>0)
          {
                //temp=a[j];
    a[i+1]=a[i];
    //a[i]=temp;
    //j--;
    i=i-1;

          }
          a[i+1]=temp;



}
for(i=0;i<5;i++)
{
    printf("%d",a[i]);
}

}
