//
// Created by User on 23.06.2025.
//

#include <stdio.h>

int main(){
    char name[50];
    printf("Enter file name: ");
    scanf("%49s", name);

    FILE *in = fopen(name, "r");
    if (!in) return printf("File %s could not be opened\n", name), 1;

    int ch;
    while ((ch = getc(in)) != EOF) putchar(ch);

    fclose(in);
}
