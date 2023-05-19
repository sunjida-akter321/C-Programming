#include <stdio.h>
#include <conio.h>
int main() {
char character;
char string [20], sentence[100];

scanf("%c", &character);
scanf("%s\n", &string);
scanf("%[^\n]%*c", &sentence);

printf("%c\n",character);
printf("%s\n",string);
printf("%s\n",sentence);
return 0;
}