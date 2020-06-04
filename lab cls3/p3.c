#include<stdio.h>
int main()
{
    int k;
    printf("chose 1 to insertation_sort\n chose 2 for Quick_sort\n");
    scanf("%d",&k);
    if(k==1)
    {
        int i,j,a[10],temp,n;
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

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

//   int t=0,r,z,e,mi,c,y,m;
//
//            for(y=0;y<n;y++)
//            {
//                if(a[y]>a[y+1])
//                {
//                  t++;
//                }
//            }
//            if(t==0)
//            {
//                printf("Linear Search is not posibol \n");
//
//             printf("Enter the number to be search: ");
//
//            scanf("%d",&m);
//
//    e=0,z=n-1;
//   while(e<=z){
//         mi=(e+z)/2;
//         if(r==a[mi]){
//             c=1;
//             break;
//         }
//         else if(r<a[mi]){
//             z=mi-1;
//         }
//         else
//             e=mi+1;
//    }
//
//    if(c==0)
//    {
//        printf("The number is not found.");
//    }
//
//    else
//    {
//        printf("The number is found.");
//    }
//            }
//
//
   }
    else if(k==2)
    {
       int a[50],n,i;
    printf("How many elements?");
    scanf("%d",&n);
    printf("\nEnter array elements:");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quick_sort(a,0,n-1);
    printf("\nArray after sorting:");

    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
    printf("\n");

        int p=0,m,u,l,mid,x,q;

            for(q=0;q<n;q++)
            {
                if(a[q]>a[q+1])
                {
                  p++;
                }
            }
            if(p==0)
            {
                printf("Linear Search is not posibol \n");

             printf("Enter the number to be search: ");

            scanf("%d",&m);

    l=0,u=n-1;
    while(l<=u){
         mid=(l+u)/2;
         if(m==a[mid]){
             x=1;
             break;
         }
         else if(m<a[mid]){
             u=mid-1;
         }
         else
             l=mid+1;
    }
            }
    if(x==0)
         printf("The number is not found.");
    else
         printf("The number is found.");


    return 0;
    }
    else
    {
        printf("Not Maches");
    }
}
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
