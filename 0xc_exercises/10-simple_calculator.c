#include<stdio.h>
int main(){
int num1, num2,result;
char operation;
printf("Please enter operation; \n");
 scanf("%c",&operation);

printf("Please enter first number; ");
scanf("%d",&num1);
printf("Please enter second number; :\n");
scanf("%d",&num2);
switch(operation){
case '+':
result=num1+num2;
break;
case '-':
result=num1-num2;
break;
case '*':
result=num1*num2;
break;
case '/':
result=num1/num2;
break;
default:
printf("Error\n");
}
if(operation=='*' || operation=='-' || operation=='+' || operation=='/'){
printf("Result=%d\n",result);}
return 0;
}
