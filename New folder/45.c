
#include<stdio.h>
int main()
{
    int i,j,a[5]= {2,1,8,5,4},temp;
    for(i=1; i<5; i++)
    {
        j=i;
        while (a[j]<a[j-1]  && j>0)
        {

            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%d",a[i]);
    }
}
