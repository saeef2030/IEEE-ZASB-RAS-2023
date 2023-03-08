#include<stdio.h>
int main()
{
char x[1000],y[1000];
int i,n=0,z=0,j=0;
printf("Enter your first word sir: ");
scanf("%s",x);
printf("Enter your second word sir: ");
scanf("%s",y);
while(x[n]!='\0')
n++;
while(y[z]!='\0')
z++;
if(n==z)
{
for(i=0;i<n;i++)
{
if(x[i]==y[i])
j++;
}
}
if(j==z)
printf("Your two words are same");
else
printf("Your two words are not same");

}