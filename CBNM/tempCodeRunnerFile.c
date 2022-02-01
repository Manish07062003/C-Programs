#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double *gauss_elimination_method(double eq[][4]);
double *gauss_jordan_method(double eq[][3],double B[]);
double *matrix_multiply(double **A,double B[]);
double *LU_decomposition_method(double eq[][3],double B[]);
double **twoD_dynamic_allocation(int r,int c);
double *oneD_dynamic_allocation(int x);
int main()
{
    double G_E_eqI[3][4]={3,4,-1,-6,0,4,-2,-2,0,-2,10,-8};
    double G_E_eqII[3][4]={4,5,7,16,9,2,3,15,0,5,6,11};
    double G_E_eqIII[3][4]={2,4,6,22,3,8,5,27,-1,1,2,2};
    double *ge_eqA=gauss_elimination_method(G_E_eqI);
    double *ge_eqB=gauss_elimination_method(G_E_eqII);
    double *ge_eqC=gauss_elimination_method(G_E_eqIII);
    printf("\t1.Gauss Elimination Method\t\n\n");
    printf("a.x1,x2,x3 values are ");
    for(int i=0; i<3; i++)
    {
        printf("%lf,",ge_eqA[i]);
    }
    printf("respectively.\n");
    printf("b.x1,x2,x3 values are ");
    for(int j=0; j<3; j++)
    {
        printf("%lf,",ge_eqB[j]);
    }
    printf("respectively.\n");
    printf("c.x1,x2,x3 values are ");
    for(int k=0; k<3; k++)
    {
        printf("%lf,",ge_eqC[k]);
    }
    printf("respectively.\n\n\n");
    double G_J_eqIA[3][3]={1,3,-5,3,11,-9,-1,1,6};
    double G_J_eqIB[3]={2,4,5};
    double G_J_eqIIA[3][3]={1,1,1,2,3,5,4,0,5};
    double G_J_eqIIB[3]={5,8,2};
    double G_J_eqIIIA[3][3]={1,2,-3,6,3,9,7,17,-19};
    double G_J_eqIIIB[3]={2,6,13};
    double *gj_eqA=gauss_jordan_method(G_J_eqIA,G_J_eqIB);
    double *gj_eqB=gauss_jordan_method(G_J_eqIIA,G_J_eqIIB);
    double *gj_eqC=gauss_jordan_method(G_J_eqIIIA,G_J_eqIIIB);
    printf("\t2.Gauss Jordan Method\t\n\n");
    printf("a.x1,x2,x3 values are ");
    for(int i=0; i<3; i++)
    {
        printf("%lf,",gj_eqA[i]);
    }
    printf("respectively.\n");
     printf("b.x1,x2,x3 values are ");
    for(int j=0; j<3; j++)
    {
        printf("%lf,",gj_eqB[j]);
    }
    printf("respectively.\n");
    printf("c.x1,x2,x3 values are ");
    for(int k=0; k<3; k++)
    {
        printf("%lf,",gj_eqC[k]);
    }
    printf("respectively.\n\n\n");
    double LU_eqIA[3][3]={1,2,4,3,8,14,2,6,13};
    double LU_eqIB[3]={3,13,4};
    double LU_eqIIA[3][3]={2,12,5,-1,-3,-1,1,6,2};
    double LU_eqIIB[3]={-4,17,9};
    double LU_eqIIIA[3][3]={25,5,1,64,8,1,144,12,1};
    double LU_eqIIIB[3]={106.8,177.2,279.2};
    double *lu_eqA=LU_decomposition_method(LU_eqIA,LU_eqIB);
    double *lu_eqB=LU_decomposition_method(LU_eqIIA,LU_eqIIB);
    double *lu_eqC=LU_decomposition_method(LU_eqIIIA,LU_eqIIIB);
    printf("\t3.LU Decomposition Method\t\n\n");
    printf("a.x1,x2,x3 values are ");
    for(int i=0; i<3; i++)
    {
        printf("%lf,",lu_eqA[i]);
    }
    printf("respectively.\n");
     printf("b.x1,x2,x3 values are ");
    for(int j=0; j<3; j++)
    {
        printf("%lf,",lu_eqB[j]);
    }
    printf("respectively.\n");
    printf("c.x1,x2,x3 values are ");
    for(int k=0; k<3; k++)
    {
        printf("%lf,",lu_eqC[k]);
    }
    printf("respectively.\n\n\n");
}
double *gauss_elimination_method(double eq[][4])
{
    double **first_stage,*second_stage,*x1_x2_x3;
    second_stage=oneD_dynamic_allocation(2);
    x1_x2_x3=oneD_dynamic_allocation(3);
    first_stage=twoD_dynamic_allocation(3,3);
    int row=1;
    for(int i=0; i<2; i++)
    {
        int col=1;
        for(int j=0; j<3; j++)
        {
            if(j!=2)
            {
                    first_stage[i][j]=eq[row][col]-((eq[row][0]/eq[0][0])*eq[0][col]);
                    col++;
            }
            else
            {
                    first_stage[i][j]=eq[row][col]-((eq[row][0]/eq[0][0])*eq[0][col]);
            }
        }
        row++;
    }
    second_stage[0]=first_stage[1][1]-((first_stage[1][0]/first_stage[0][0])*first_stage[0][1]);
    second_stage[1]=first_stage[1][2]-((first_stage[1][0]/first_stage[0][0])*first_stage[0][2]);
    x1_x2_x3[2]=second_stage[1]/second_stage[0];
    x1_x2_x3[1]=(first_stage[0][2]-first_stage[0][1]*x1_x2_x3[2])/first_stage[0][0];
    x1_x2_x3[0]=(eq[0][3]-eq[0][1]*x1_x2_x3[1]-eq[0][2]*x1_x2_x3[2])/eq[0][0];
    return x1_x2_x3;
}
double *gauss_jordan_method(double eq[][3],double B[])
{
    double **I=twoD_dynamic_allocation(3,3);
    double **A=twoD_dynamic_allocation(3,3);
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
    double *AB=matrix_multiply(I,B);
    return AB;
}
double *matrix_multiply(double **A,double B[])
{
    double *C;
    C=oneD_dynamic_allocation(3);
    double sum=0;
    int k=0;
    for(int m=0; m<3; m++)
    {
        for(int n=0; n<3; n++)
        {
            sum+=A[m][n]*B[n];
        }
        C[k]=sum;
        sum=0;
        k++;
    }
    return C;
}
double *LU_decomposition_method(double eq[][3],double B[])
{
    double **l,**u,*z,*x;
    x=oneD_dynamic_allocation(3);
    z=oneD_dynamic_allocation(3);
    l=twoD_dynamic_allocation(3,3);
    u=twoD_dynamic_allocation(3,3);
    for(int i=0; i<3; i++)
    {
        u[i][i]=1;
        for(int j=0; j<3; j++)
        {
            if(i>=j)
            {
                l[i][j]=eq[i][j];
                for(int k=0; k<=j-1; k++)
                {
                    l[i][j]-=l[i][k]*u[k][j];
                }
            }
            else if(i<=j)
            {
                u[i][j]=eq[i][j];
                for(int k=0; k<=i-1; k++)
                {
                    u[i][j]-=l[i][k]*u[k][j];
                }
                u[i][j]/=l[i][i];
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        z[i]=B[i];
        for(int k=0; k<=i-1; k++)
        {
            z[i]-=l[i][k]*z[k];
        }
        z[i]/=l[i][i];
    }
    for(int i=2; i>=0; i--)
    {
        x[i]=z[i];
        for(int k=2; k>=i+1; k--)
        {
            x[i]-=u[i][k]*x[k];
        }
        x[i]/=u[i][i];
    }
    return x;
}
double **twoD_dynamic_allocation(int r,int c)
{
    double **a=malloc(r*sizeof(double *));
    for(int i=0; i<3; i++)
    {
        a[i]=malloc(c*sizeof(double));
    }
    return a;
}
double *oneD_dynamic_allocation(int x)
{
    double *a=malloc(x*sizeof(double));
    return a;
}