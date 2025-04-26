#include<stdio.h>
int main(){
    int num,i,j,is_prime;
    printf("Enter the limit: ");
    scanf("%d",&num);
    printf("Prime numbers upto %d are:");
    for ( i = 2; i <= num; i++)
    {
        is_prime=1;
        for ( j=2; j<i; j++)
        {
            if (i%j==0)
            {
                is_prime=0;
                break;
            }
        }
        if (is_prime)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}