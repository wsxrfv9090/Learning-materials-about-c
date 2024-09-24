#include <stdio.h> 
int main()
{
    FILE* fp = fopen("C:\\Users\\Administrator\\Desktop\\text.txt", "r");
    if (fp == NULL)
        printf("Read process failure.Exiting");
    char ch = fgetc(fp);
    printf("%c", ch);
    fclose(fp);
    return 0;
}