#include<stdio.h>
struct army
{
    char nam[20];
    char rank[10];
    float hight;
    int misn;
};
struct army e[100];
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&e[i].nam);
        scanf(" %s",&e[i].rank);
        scanf("%f",&e[i].hight);
        scanf("%d",&e[i].misn);

    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",e[i].nam);
        printf("%s\n",e[i].rank);
        printf("%f\n",e[i].hight);
        printf("%d\n",e[i].misn);
    }
    return 0;
}

