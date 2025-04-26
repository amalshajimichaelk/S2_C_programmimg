#include<stdio.h>
int main(){
    int arr[10],*aptr,i,max,n;
    aptr=arr;
    printf("Enter the size: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(aptr+i));
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",(aptr+i));
    }
    return 0;
}