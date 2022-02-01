#include<stdio.h>
#include<math.h>
double eq(double a);
int main()
{
    double initial,final,epsilon,mid,f_in,f_fi,f_mid;
    scanf("%lf,%lf,%lf",&initial,&final,&epsilon);
    int cnt=0;
    f_in=eq(initial);
    f_fi=eq(final);
    do
    {
        mid=(initial+final)/2;
        f_mid=eq(mid);
        if(f_mid*f_in<0)
        {
            final=mid;
            f_fi=eq(final);
        }
        else if(f_mid*f_fi<0)
        {
            initial=mid;
            f_in=eq(initial);
        }
        cnt++;
    }while((final-initial)>=epsilon);
    printf("%lf,%d\n",(initial+final)/2,cnt);
}
double eq(double a)
{
    return a-1.4*cos(a);
}