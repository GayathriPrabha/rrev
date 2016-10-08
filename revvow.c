#include<stdio.h>
#include<string.h>
int main()
{
int i,j=0,count=0;
char a[15];
char b[15];
scanf("%s",&a);
int len;
len=strlen(a);
for(i=len-1;i>=0;i--)
{
    b[j]=a[i];
    j++;
}
for(i=0;i<len;i++)
    printf("%c",b[i]);
printf("\n");
for(i=0;i<len;i++)
{
    if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
    {
        count++;
    }
    else
    {
        printf("%c",b[i]);
    }
}
}
