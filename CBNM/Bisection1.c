#include<stdio.h>
#include<math.h>
double equationI(double a,double b);
double eqI(double a);
int main()
{
    double a=2;
    double b=3;
    double eqI=equationI(a,b);
    printf("%lf\n",eqI);
}
double equationI(double a,double b)
{
    double mid;
    do
    {
        double f=eqI(a);
        double f1=eqI(b);
        mid=(a+b)/2;
        double f2=eqI(mid);
        if(f2*f<0)
        {
            b=mid;
        }
        else if(f2*f1<0)
        {
            a=mid;
        }
    }while (fabs(b-a)>=0.00001);
    return (a+b)/2;
}
double eqI(double a)
{
    double f=a*log10(a)-1.2;
    return f;
}