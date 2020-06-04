
#include<stdio.h>
int main()
{
    int i,j,a[10],temp,k;
    insertation(a,i,j,temp);
//    for(i=1; i<5; i++)
//    {
//        j=i;
//        while (a[j]<a[j-1]  && j>0)
//        {
//
//            temp=a[j];
//            a[j]=a[j-1];
//            a[j-1]=temp;
//            j--;
//        }
//    }
//
//    for(i=0; i<5; i++)
//    {
//        printf("%d",a[i]);
//    }
//return 0;
//for(k=0; k<5; k++)
//    {
//        printf("%d",a[i]);
//    }
}
void insertation(int a[],int i,int j,int temp)
{
    int n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
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

    for(k=0; k<5; k++)
    {
        printf("%d",a[k]);
    }

}
