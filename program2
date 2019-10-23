#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char mas[80];
    char c;
    int i;
    char *nameoffile;
    printf("Welcome,please enter file name:\n");
    scanf("%s",nameoffile);
    file=fopen(nameoffile,"r+");
    if (file!=NULL) printf("File open successfully!\n");
    else printf("File not found!\n");
    while (c!=EOF){
    for (i=0;((c=fgetc(file))!='\n')&&(c!=EOF);++i){
        mas[i]=c;}
    for(int j=0;j<i;j++) printf("%c",mas[j]);
    printf("\n%d\n",i);
    if (c!=EOF){
    fseek(file,-i-2,SEEK_CUR);
    for (int j=0;j<i;j++){
    fprintf(file,"%c",mas[i-j-1]);
    }
    fseek(file,2,SEEK_CUR);}
    else {
    fseek(file,-i,SEEK_CUR);
    for (int j=0;j<i;j++){
    fprintf(file,"%c",mas[i-j-1]);
    }
    }
    printf("The conversion was successful!");
    }
    return 0;
}
