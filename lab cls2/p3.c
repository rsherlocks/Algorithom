#include<stdio.h>
int cri(float f )
{
    float p;
    p=((f-32)*5)/9;

    return p;
}
int fri(float c)
{
    float k;
    k=((c*9)/5)+32;

    return k;
}
int main()
{
    float c,f,slv,slv1;
    int x;
    printf("calcius=1 AND ferhanhite");
    scanf("%d",&x);

    if(x==1)
    {
        scanf("%f",&f);
        slv=cri(f);
        printf("Ferhanfite= %.2f\n",slv);

    }
    if(x==2)
    {
        scanf("%f",&c);
        slv1=fri(c);
        printf("calcius= %.2f\n",slv1);

    }
    return 0;

}

