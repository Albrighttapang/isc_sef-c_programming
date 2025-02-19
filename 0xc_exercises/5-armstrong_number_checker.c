#include<stdio.h>
int main(){
int n;
printf("Enter a 3 digit number");
scanf("%d",&n);
int a=n%10;
int b=(n/10)%10;
int c=((n/10)/10)%10;
if((a*a*a)+(b*b*b)+(c*c*c)==n){
printf("Your number is an armstrong number");}
else{
printf("Your number is not an armstrong number");
}
return 0;}
