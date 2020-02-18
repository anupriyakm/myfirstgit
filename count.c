#include<stdio.h>
#include<string.h>
void main()
{
int linecount=1,count=0;
char i,j,temp=100;
printf("enter the sentance(add '$' at the end)::\n\n");
while((i=getchar())!='$')
{
if(i==' ')
count++;
else if(i=='\n')
linecount++;
}
printf("no of space=%d",count);
printf("no of line=%d",linecount);
}
