#include<stdio.h>
struct std_details
{
    char name[50];
    int roll_no;
    int marks[3];
    int total;
    float avg;
};
int main()
{
    int n,i,j;
    printf("Enter the no.of students: ");
    scanf("%d",&n);
    struct std_details std[n];
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the details of the student no.%d:\n",i+1);
        printf("Name: ");
        scanf("%s",std[i].name);
        printf("Roll No: ");
        scanf("%d",&std[i].roll_no);
        std[i].total=0;
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the mark of subject no.%d: ",j+1);
            scanf("%d",&std[i].marks[j]);
            std[i].total+=std[i].marks[j];
        }
        std[i].avg=std[i].total/3.0;
    }
    for ( i = 0; i < n; i++)
    {
        printf("\nDetails of the student no.%d: ",i+1);
        printf("\nName: %s",std[i].name);
        printf("\nRoll No: %d",std[i].roll_no);
        printf("\nTotal marks: %d",std[i].total);
        printf("\nAverage marks: %.2f\n",std[i].avg);
    }
    return 0;
}
