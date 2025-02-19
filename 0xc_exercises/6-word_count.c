#include<stdio.h>
write(FILE *file){
char line[100];
// Open the file in read mode ("r")
FILE *file = fopen("example.txt", "r");
if (file == NULL) {
printf("Error opening file for reading!\n");
return 1;
}
// Read the file line by line and print each line
while (fgets(line, sizeof(line), file) != NULL) {
fprintf(output.txt,"%s", line);
}
// Close the file
fclose(file);

int count_words(FILE *file) {
char ch;
int word_count = 0;
int in_word = 0;
while ((ch = fgetc(file)) != EOF) {
// Check if the character is a letter or digit
if (isalnum(ch)) {if (!in_word) {
in_word = 1; // Start of a word
word_count++;
}
} else {
in_word = 0; // End of a word
}
}
return word_count;
}
int main() {
FILE *file=fopen("output.txt", "w");
// Open the file in read mode ("r")
FILE *file = fopen("sample_text.txt", "r");
if (file == NULL) {
printf("Error opening file!\n");
return 1;
}
// Count words in the file
int word_count = count_words(file);
// Output the result
printf("The file contains %d words.\n", word_count);
// Close the file
fclose(file);
return 0;
