#include<stdio.h>
int main(){
int n,rev,temp,sum=0;
printf("ENTER NUMBER:");
scanf("%d",&n);
// operation //
temp=n;
while(temp){
rev=rev*10+temp%10;
sum=sum+temp%10;
temp=temp/10;
}
// output //
printf("REVERSED=%d",rev);
printf("\nSUM=%d",sum);
return 0;
}
