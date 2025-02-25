#include<stdio.h>
int main(){
int i,j,len;
char str1[20],temp;
printf("Enter a string: ");
scanf("%[^\n]",str1);
for(len=0;str1[len]!='\0';len++);
	i=len-1;
	for(j=0;j<len/2;j++){
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
		i--;
		}
printf("String in reverse order: %s",str1);
return 0;
}
