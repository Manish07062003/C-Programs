#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x,y,z) x+10*y+z;
double *jacobi_iterative_method(double eq[][3],double b[3]);
double *gauss_seidel_iterative_method(double eq[][3],double b[3]);
double **inverse_matrix(double eq[][3]);
double **addition_matrix(double a[][3],double b[][3]);
double **multiply_matrix(int m, int n,double a[m][m],double b[m][n]);
double **substraction_matrix(double a[][3],double b[][3]);
double **twoD_dynamic_allocation(void);
int main()
{
    // double eq[3][3]={10,1,1,1,10,1,1,1,10};
    // double b[3]={12.5,17,12.5};
    // double *eqI=jacobi_iterative_method(eq,b);
    double a[3][3]={4,3,-1,3,5,3,1,1,1};
    double b[3][3]={1,1,1};
    double **eqI=multiply_matrix(3,1,a,b);
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<1; j++)
        {
            printf("%lf ",eqI[i][j]);
        }
        printf("\n");
    }
    
}
double *jacobi_iterative_method(double eq[][3],double b[3])
{
    double initial[3]={0,0,0},sum=0,*x;
    x=malloc(3*sizeof(double));
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                if(j!=k)
                {
                    sum=sum-eq[j][k]*initial[k];
                }
                else
                {
                    sum+=b[j];
                }
            }
            sum/=eq[j][j];
            x[j]=sum;
            sum=0;
        }
        for(int b=0; b<3; b++)
        {
            initial[b]=x[b];
        }
    }
    return x;
    
}
double *gauss_seidel_iterative_method(double eq[][3],double b[3])
{
    double **x=malloc(3*sizeof(double*));
    for(int i=0; i<3; i++)
    {
        x[i]=malloc(1*sizeof(double));
    }
    double initial_x[3][1]={0,0,0};
    double **d=twoD_dynamic_allocation();
    double **l=twoD_dynamic_allocation();
    double **u=twoD_dynamic_allocation();
    double **d_add_l,**d_add_l_inverse,**d_add_l_inverse_mutliply_u,**d_add_l_inverse_mutliply_u_mutliply_intialx,**d_add_l_inverse_multiply_b;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                d[i][j]=eq[i][j];
            }
            else if(i<j)
            {
                u[i][j]=eq[i][j];
            }
            else
            {
                l[i][j]=eq[i][j];
            }
        }
    }
    for(int i=0; i<1; i++)
    {
        d_add_l=addition_matrix(d,l);
        d_add_l_inverse=inverse_matrix(d_add_l);
        d_add_l_inverse_mutliply_u=multiply_matrix(3,3,d_add_l_inverse,u);
        d_add_l_inverse_mutliply_u_mutliply_intialx=multiply_matrix(3,1,d_add_l_inverse_mutliply_u,initial_x);
        d_add_l_inverse_multiply_b=multiply_matrix(3,1,d_add_l_inverse,b);
        x=subtraction_matrix(d_add_l_inverse_multiply_b,d_add_l_inverse_mutliply_u_mutliply_intialx);
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<1; j++)
        {
            printf("%lf ",x[i][j]);
        }
        printf("\n");
    }
}
double **inverse_matrix(double eq[][3])
{
    double **I=twoD_dynamic_allocation();
    double **A=twoD_dynamic_allocation();
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                I[i][j]=1;
            }
        }
    }
    for(int h=0; h<3; h++)
    {
        for(int j=0; j<3; j++)
        {
            for(int i=0; i<3; i++)
            {
                for(int z=0; z<3; z++)
                {
                    A[i][z]=eq[i][z];
                }
            }
            for(int k=0; k<3; k++)
            {
                if(h==j)
                {
                    eq[h][k]=A[h][k]/A[h][h];
                    I[h][k]=I[h][k]/A[h][h];
                }
                else
                {
                    eq[j][k]=A[j][k]-(A[j][h]*A[h][k]/A[h][h]);
                    I[j][k]=I[j][k]-(A[j][h]*I[h][k]/A[h][h]);
                }
            }
        }
    }
    return I;
    
}
double **addition_matrix(double a[][3],double b[][3])
{
    double **add=twoD_dynamic_allocation();
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    return add;
}
double **twoD_dynamic_allocation(void)
{
    double **a;
    a=malloc(3*sizeof(double*));
    for(int i=0; i<3; i++)
    {
        a[i]=malloc(3*sizeof(double));
    }
    return a;
}
double **multiply_matrix(int m,int n,double a[m][m], double b[m][n])
{
    double **multi=malloc(m*sizeof(double *)),sum=0;
    for(int i=0; i<m; i++)
    {
        multi[i]=malloc(n*sizeof(double));
    }
    int r=0,j,k,c;
    while(r<m)
    {
        j=0;
        while(j<n)
        {
            c=0,k=0;
            while(k<m)
            {
                sum+=a[r][k]*b[k][j];
                k++;
            }
            multi[r][j]=sum;
            sum=0;
            j++;
        }
        r++;
    }
    return multi;
}
double **substraction_matrix(double a[][3],double b[][3])
{
    double **add=twoD_dynamic_allocation();
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            add[i][j]=a[i][j]-b[i][j];
        }
    }
    return add;
}