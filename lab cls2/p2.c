#include<stdio.h>
#include<math.h>
int tri(float a,float b,float c)
{
    float s,q,x,y,z,r;
    s=(a+b+c)/2;
    x=(s-a);
    y=(s-b);
    z=(s-c);
    r=(s*x*y*z);
    q=sqrt(r);
    return q;
}
int main()
{
    float a,b,c,slv;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    slv=tri(a,b,c);
    printf("slv= %f\n",slv);
    return 0;

}

