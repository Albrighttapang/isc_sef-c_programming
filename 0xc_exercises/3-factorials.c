#include <stdio.h>
int factorial(int n) {
if(n<0){
printf("UNDEFINEd\n");}

else if (n == 0){
printf("The factorial of 0 is 1");}
else{
return n * factorial(n - 1);
}
}
int main() {
int num;
printf("Please enter number;\n");
scanf("%d", &num);
printf("Factorial of %d is %d\n", num, factorial(num));
return 0;
}
