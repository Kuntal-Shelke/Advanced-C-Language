#include <stdio.h>
void swapChars(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    char char1, char2;
    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);
    printf("Before swapping:char1=%c,char2=%c\n", char1, char2);
    swapChars(&char1, &char2);
    printf("After swapping:char1=%c,char2=%c\n", char1, char2);
    return 0;
}
