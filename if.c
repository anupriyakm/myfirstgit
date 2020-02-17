#include<stdio.h>
#include<string.>
void main()
{
char s[20];
int keyword[3][3]={"if"};
printf("enter the statement");
gets(s);
while(s[i]!='\0')
{
if(s[i]==keyword[i])
{
printf("valid if statement");
}
else
{
printf("Invalid if statement");
}
}
}
