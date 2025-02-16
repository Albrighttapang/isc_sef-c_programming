#include <stdio.h>


int main() {

    int n;
   
    printf("Enter the size of the array: ");
    scanf("%d", &n);
   int Array[n];
 
    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &Array[i]);
    }

 
    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", Array[i]);
    }
return 0;}
