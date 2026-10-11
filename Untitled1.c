#include<stdio.h>
int main(){
int n,rev=0,temp;
printf("ENTER NUMBER TO CHECK:");
scanf("%d",&n);
// check //
temp=n;
while(temp>0){
rev= rev*10 + temp%10;
temp= temp/10;
}
if(rev==n)
{printf("IS PALLINDROME");}
else
{printf("NOT PALLINDROME");}

return 0;
}
