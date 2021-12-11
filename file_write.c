// writing file in c language
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("main.txt", "w");
    printf("Enter String : ");
    gets(str);
    fprintf(fp, "%s", str);
    return 0;
}
