#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rolldice(void);
int main()
{
    srand(time(NULL));
    int sum=rolldice();
    if(sum == 7 || sum == 11)
    {
        printf("PLAYER WINS\n");
        return 0;
    }
    else if(sum == 2 || sum == 3 || sum == 12)
    {
        printf("PLAYER LOST\n");
        return 0;
    }
    else 
    {
        int point=sum;
        int sum1;
        printf("PLAYER POINT IS %d\n",point);
        do
        {
            sum1=rolldice();
            if(sum1 == 7)
            {
                printf("PLAYER LOST\n");
                return 0;
            }
        }while (sum1 != point);
        printf("PLAYER WINS\n");
    }
}
int rolldice(void)
{
    int dice1,dice2;
    dice1=1+rand()%6;
    dice2=1+rand()%6;
    int s=dice1+dice2;
    printf("PLAYER ROLLED %d + %d = %d\n",dice1,dice2,s);
    return s;
}
