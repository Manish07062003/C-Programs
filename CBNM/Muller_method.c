#include<stdio.h>
#include<math.h>
double eq_I(double x);
double eq_II(double x);
double eq_III(double x);
double eq_IV(double x);
double Muller_eq_I(void);
double Muller_eq_II(void);
double Muller_eq_III(void);
double Muller_eq_IV(void);
int main()
{
    printf("\nRoot of x^3-13x-12 is ");
    printf("%lf\n\n",Muller_eq_I());
    printf("Root of x^7+3x^67x^5+x^4+5x^3+2x^2+5x+5 is ");
    printf("%lf\n\n",Muller_eq_II());
    printf("Root of x+sinx-0.5 is ");
    printf("%lf\n\n",Muller_eq_III());
    printf("Root of x^4-x-10 is ");
    printf("%lf\n\n",Muller_eq_IV());
}
double eq_I(double x)
{
    return x*x*x-13*x-12;
}
double eq_II(double x)
{
    return pow(x,7)+3*pow(x,6)+7*pow(x,5)+pow(x,4)+5*pow(x,3)+2*x*x+5*x+5;
}
double eq_III(double x)
{
    return x+sin(x)-0.5;
}
double eq_IV(double x)
{
    return pow(x,4)-x-10;
}
double Muller_eq_I(void)
{
    double x=4.5,y=5.5,z=5,f_x,f_y,f_z,f_root,h_k,h_k1,g,c,lambda_k,lambda_k1,delta_k,root,temp,lambda_k2;
    do
    {
        temp=z;
        f_x=eq_I(x);
        f_y=eq_I(y);
        f_z=eq_I(z);
        h_k=z-y;
        h_k1=y-x;
        lambda_k=h_k/h_k1;
        delta_k=1+lambda_k;
        c=lambda_k*(lambda_k*f_x-delta_k*f_y+f_z);
        g=lambda_k*lambda_k*f_x-delta_k*delta_k*f_y+(lambda_k+delta_k)*f_z;
        lambda_k1=(-2*delta_k*f_z)/(g+sqrt(g*g-4*delta_k*f_z*c));
        lambda_k2=(-2*delta_k*f_z)/(g-sqrt(g*g-4*delta_k*f_z*c));
        if(fabs(lambda_k2)<fabs(lambda_k1))
        {
            lambda_k1=lambda_k2;
        }
        root=z+lambda_k1*(z-y);
        f_root=eq_I(root);
        x=y;
        y=z;
        z=root;
    } while (fabs(f_root)>=0.00001);
    return root;
}
double Muller_eq_II(void)
{
    double x=-0,y=-0.1,z=-0.2,f_x,f_y,f_z,f_root,h_k,h_k1,g,c,lambda_k,lambda_k1,lambda_k2,delta_k,root,temp;
    do
    {
        temp=z;
        f_x=eq_II(x);
        f_y=eq_II(y);
        f_z=eq_II(z);
        h_k=z-y;
        h_k1=y-x;
        lambda_k=h_k/h_k1;
        delta_k=1+lambda_k;
        c=lambda_k*(lambda_k*f_x-delta_k*f_y+f_z);
        g=lambda_k*lambda_k*f_x-delta_k*delta_k*f_y+(lambda_k+delta_k)*f_z;
        lambda_k1=(-2*delta_k*f_z)/(g+sqrt(g*g-4*delta_k*f_z*c));
        lambda_k2=(-2*delta_k*f_z)/(g-sqrt(g*g-4*delta_k*f_z*c));
        if(fabs(lambda_k2)<fabs(lambda_k1))
        {
            lambda_k1=lambda_k2;
        }
        root=z+lambda_k1*(z-y);
        f_root=eq_II(root);
        x=y;
        y=z;
        z=root;
    } while (fabs(f_root)>=0.00001);
    return root;
}
double Muller_eq_III(void)
{
    double x=1,y=2,z=1.36,f_x,f_y,f_z,f_root,h_k,h_k1,g,c,lambda_k,lambda_k1,delta_k,root,temp,lambda_k2;
    do
    {
        temp=z;
        f_x=eq_III(x);
        f_y=eq_III(y);
        f_z=eq_III(z);
        h_k=z-y;
        h_k1=y-x;
        lambda_k=h_k/h_k1;
        delta_k=1+lambda_k;
        c=lambda_k*(lambda_k*f_x-delta_k*f_y+f_z);
        g=lambda_k*lambda_k*f_x-delta_k*delta_k*f_y+(lambda_k+delta_k)*f_z;
        lambda_k1=(-2*delta_k*f_z)/(g+sqrt(g*g-4*delta_k*f_z*c));
        lambda_k2=(-2*delta_k*f_z)/(g-sqrt(g*g-4*delta_k*f_z*c));
        if(fabs(lambda_k2)<fabs(lambda_k1))
        {
            lambda_k1=lambda_k2;
        }
        root=z+lambda_k1*(z-y);
        f_root=eq_III(root);
        x=y;
        y=z;
        z=root;
    } while (fabs(f_root)>=0.00001);
    return root;
}
double Muller_eq_IV(void)
{
    double x=1,y=2,z=1.71,f_x,f_y,f_z,f_root,h_k,h_k1,g,c,lambda_k,lambda_k1,delta_k,root,temp,lambda_k2;
    do
    {
        temp=z;
        f_x=eq_IV(x);
        f_y=eq_IV(y);
        f_z=eq_IV(z);
        h_k=z-y;
        h_k1=y-x;
        lambda_k=h_k/h_k1;
        delta_k=1+lambda_k;
        c=lambda_k*(lambda_k*f_x-delta_k*f_y+f_z);
        g=lambda_k*lambda_k*f_x-delta_k*delta_k*f_y+(lambda_k+delta_k)*f_z;
        lambda_k1=(-2*delta_k*f_z)/(g+sqrt(g*g-4*delta_k*f_z*c));
        lambda_k2=(-2*delta_k*f_z)/(g-sqrt(g*g-4*delta_k*f_z*c));
        if(fabs(lambda_k2)<fabs(lambda_k1))
        {
            lambda_k1=lambda_k2;
        }
        root=z+lambda_k1*(z-y);
        f_root=eq_IV(root);
        x=y;
        y=z;
        z=root;
    } while (fabs(f_root)>=0.00001);
    return root;
}