#include<stdio.h>
#include<math.h>
double eq_III(double a);
double eq_IV(double a);
double Secant_eq_III(void);
double Secant_eq_IV(void);
double Regula_Falsi_eq_III(void);
double Regula_Falsi_eq_IV(void);
int main()
{
    printf("f(x)=cos(x)+2sin(x)+x^2\n");
    printf("Root doesn't lies in the interval [0,1]\n\n");
    printf("f(x)=x^3-4\n");
    printf("Root doesn't lies in the interval [0,1]\n\n");
    printf("f(x)=3x+sin(x)-e^x\n");
    printf("Secant method = %lf\n",Secant_eq_III());
    printf("Regula Falsi method = %lf\n\n",Regula_Falsi_eq_III());
    printf("f(x)=e^x-3x\n");
    printf("Secant method = %lf\n",Secant_eq_IV());
    printf("Regula Falsi method = %lf\n\n",Regula_Falsi_eq_IV());
}
double eq_III(double a)
{
    // return 3*a+sin(a)-pow(2.718282,a);
    return pow(a,3)-pow(a,2)-a-1;
}
double eq_IV(double a)
{
    return pow(2.718282,a)-3*a;
}
double Secant_eq_III(void )
{
    double x=1,y=2,z,f_x,f_y;
    int cnt=0;
    do
    {
        f_x=eq_III(x);
        f_y=eq_III(y);
        z=y-((y-x)*f_y)/(f_y-f_x);
        x=y;
        y=z;
        cnt++;
    // }while(y-x>=0.00001||x-y>=0.00001);
    }while (cnt<=2);
    return y;
}
double Secant_eq_IV(void)
{
    double x=0,y=1,z,f_x,f_y;
    do
    {
        f_x=eq_IV(x);
        f_y=eq_IV(y);
        z=y-((y-x)*f_y)/(f_y-f_x);
        x=y;
        y=z;
    }while(y-x>=0.00001||x-y>=0.00001);
    return y;
}
double Regula_Falsi_eq_III(void)
{
    double f_z,a=0,b=1,f_a,f_b,z;
    do
    {
            f_a=eq_III(a);
            f_b=eq_III(b);
            z=b-((b-a)*f_b)/(f_b-f_a);
            f_z=eq_III(z);
            if(f_a*f_z<0)
            {
                b=z;
            }
            else if(f_b*f_z<0)
            {
                a=z;
            }
            else
            {
                a=b;
                b=z;
            }
    }while(b-a>=0.00001||a-b>=0.00001);
    return b;
}
double Regula_Falsi_eq_IV(void)
{
    double f_z,a=0,b=1,f_a,f_b,z;
    do
    {
            f_a=eq_IV(a);
            f_b=eq_IV(b);
            z=b-((b-a)*f_b)/(f_b-f_a);
            f_z=eq_IV(z);
            if(f_a*f_z<0)
            {
                b=z;
            }
            else if(f_b*f_z<0)
            {
                a=z;
            }
            else
            {
                a=b;
                b=z;
            }
    }while(b-a>=0.00001||a-b>=0.00001);
    return b;
}