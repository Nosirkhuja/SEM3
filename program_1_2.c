#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    FILE *file;
    char mas[80];
    char c;
    int i;
    char *name_of_file;
    printf("Welcome,please,enter file name:\n");
    name_of_file=argv[1];
    file=fopen(name_of_file,"r+");
    if (file!=NULL) printf("File open successfully!\n");
    else
        printf("File not found!\n");

    while (c!=EOF){
        for (i=0;((c=fgetc(file))!='\n')&&(c!=EOF);++i){
            mas[i]=c;}
        for(int j=0;j<i;j++) printf("%c",mas[j]);
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
    }
    return 0;
}
