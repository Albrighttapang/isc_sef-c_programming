#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isValidPassword(char password[]) {
int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
if (strlen(password) < 8) return 0;
for (int i = 0; password[i] != '\0'; i++) {
if (isupper(password[i])) hasUpper = 1;
else if (islower(password[i])) hasLower = 1;
else if (isdigit(password[i])) hasDigit = 1;
else hasSpecial = 1;
}
return hasUpper && hasLower && hasDigit && hasSpecial;
}
int main() {char password[] = "P@ssw0rd";
if (isValidPassword(password))
printf("Valid Password\n");
else
printf("Weak Password\n");
return 0;
}

