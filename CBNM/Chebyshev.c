#include <stdio.h>
#include <math.h>
#define eqI(x) x*x*x-13*x-12
#define diff_eqI(x) 3*x*x -13
#define diff_diff_eqI(x) 6*x
#define eqII(x) pow(x,7)+3*pow(x,6)+7*pow(x,5)+pow(x,4)+5*pow(x,3)+2*x*x+5*x+5
#define diff_eqII(x) 7*pow(x,6)+18*pow(x,5)+35*pow(x,4)+4*x*x*x+15*x*x+4*x+5
#define diff_diff_eqII(x) 42*pow(x,5)+90*pow(x,4)+140*pow(x,3)+13*x*x+30*x+4
#define eqIII(x) x+sin(x)-0.5
#define diff_eqIII(x) 1+cos(x)
#define diff_diff_eqIII(x) -sin(x)
#define eqIV(x) pow(x,4)-x-10
#define diff_eqIV(x) 4*x*x*x-1
#define diff_diff_eqIV(x) 12*x*x
double chebyshev_eqI(void);
double chebyshev_eqII(void);
double chebyshev_eqIII(void);
double chebyshev_eqIV(void);
int main()
{

    printf("First equation root is %lf\n",chebyshev_eqI());
    printf("Second equation root is %lf\n",chebyshev_eqII());
    printf("Third equation root is %lf\n",chebyshev_eqIII());
    printf("Fourth equation root is %lf\n",chebyshev_eqIV());
}
double chebyshev_eqI(void)
{
    double x=5.0,f_x,df_x,ddf_x,y;
    do
    {
        f_x=eqI(x);
        df_x=diff_eqI(x);
        ddf_x=diff_diff_eqI(x);
        y=x-(f_x/df_x)-(1/2)*(f_x*f_x/df_x*df_x*df_x)*ddf_x;
        x=y;
    }while(fabs(eqI(x))>=0.00001);
    return x;
}
double chebyshev_eqII(void)
{
    double x=-0.1,f_x,df_x,ddf_x,y;
    do
    {
        f_x=eqII(x);
        df_x=diff_eqII(x);
        ddf_x=diff_diff_eqII(x);
        y=x-(f_x/df_x)-(1/2)*(f_x*f_x/df_x*df_x*df_x)*ddf_x;
        x=y;
    }while(fabs(eqII(x))>=0.00001);
    return x;
}
double chebyshev_eqIII(void)
{
    double x=1.36,f_x,df_x,ddf_x,y;
    do
    {
        f_x=eqIII(x);
        df_x=diff_eqIII(x);
        ddf_x=diff_diff_eqIII(x);
        y=x-(f_x/df_x)-(1/2)*(f_x*f_x/df_x*df_x*df_x)*ddf_x;
        x=y;
    }while(fabs(eqIII(x))>=0.00001);
    return x;
}
double chebyshev_eqIV(void)
{
    double x=1.71,f_x,df_x,ddf_x,y;
    do
    {
        f_x=eqIV(x);
        df_x=diff_eqIV(x);
        ddf_x=diff_diff_eqIV(x);
        y=x-(f_x/df_x)-(1/2)*(f_x*f_x/df_x*df_x*df_x)*ddf_x;
        x=y;
    }while(fabs(eqIV(x))>=0.00001);
    return x;
}