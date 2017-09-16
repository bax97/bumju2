#include <stdio.h>

int checkPrimeNumber(int n);
int main()
{
    int a, b, i, flag;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers between %d ,%d : ", a, b);

    for(i=a+1; i<b; ++i)
    {     
        flag = checkPrimeNumber(i);

        if(flag == 1)
            printf("%d ",i);
    }
	getchar();
	getchar();
	getchar();
    return 0;
}


int checkPrimeNumber(int n)
{
    int c, flag = 1;

    for(c=2; c <= n/2; ++c)
    {
        if (n%c == 0)
        {
            flag =0;
            break;
        }
    }
	getchar();
	getchar();
	getchar();
    return flag;
}