#include<stdio.h>
#include<string.h>
int main(){
int comp;
char str1[20],str2[30];
printf("Enter a string: ");
scanf("%[^\n]",str1);
printf("Enter another string: ");
char c=getchar();
scanf("%[^\n]",str2);
comp=strcmp(str1,str2);
if(comp==0){
	printf("The two strings are equal.");
	}
else{
	printf("The two strings are not equal.");
	}
return 0;
}
