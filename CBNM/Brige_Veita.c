#include<stdio.h>
#include<math.h>
double birge_vieta_eqI(void);
double birge_vieta_eqII(void);
double birge_vieta_eqIII(void);
#define eqI(x) x*x*x-x*x-x+1
#define eqII(x) x*x*x*x-3*x*x*x+3*x*x-3*x+2
#define eqIII(x) x*x*x-x-4
int main()
{
    printf("The root of eq x^3-x^2-x+1 is %lf\n",birge_vieta_eqI());
    printf("The root of eq x^4-3x^3+3x^2 is %lf\n",birge_vieta_eqII());
    printf("The root of eq x^3-x-4 is %lf\n",birge_vieta_eqIII());
}
double birge_vieta_eqI(void)
{
    double a=-1,b=-1,c=1,p0=0.5,p1,a1,b1,c1,a2,b2;
    do
    {
        a1=a+p0;
        b1=(a1*p0)+b;
        c1=(b1*p0)+c;
        a2=a1+p0;
        b2=(a2*p0)+b1;
        p1=p0-(c1/b2);
        p0=p1;
    }while(fabs(eqI(p0))>=0.00001);
    return p0;
}
double birge_vieta_eqII(void)
{
    double a=-3,b=3,c=-3,d=2,p0=0.5,p1,a1,b1,c1,d1,a2,b2,c2;
    do
    {
        a1=a+p0;
        b1=(a1*p0)+b;
        c1=(b1*p0)+c;
        d1=(c1*p0)+d;
        a2=a1+p0;
        b2=(a2*p0)+b1;
        c2=(b2*p0)+c1;
        p1=p0-(d1/c2);
        p0=p1;
    }while(fabs(eqII(p0))>=0.00001);
    return p0;
}
double birge_vieta_eqIII(void)
{
    double a=0,b=-1,c=-4,p0=0.5,p1,a1,b1,c1,a2,b2;
    do
    {
        a1=a+p0;
        b1=(a1*p0)+b;
        c1=(b1*p0)+c;
        a2=a1+p0;
        b2=(a2*p0)+b1;
        p1=p0-(c1/b2);
        p0=p1;
    }while(fabs(eqIII(p0))>=0.00001);
    return p0;
}