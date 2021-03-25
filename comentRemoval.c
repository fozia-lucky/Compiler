#include<stdio.h>
#include<stdlib.h>

void check_comment(char);
void single_comment();
FILE *fozia,*tv;
int main(void)
{
    char c;
    fozia= fopen("fozia.txt","r");
    tv= fopen("newfile.txt","w");

    while((c=fgetc(fozia))!=EOF)
        check_comment(c);
    fclose(fozia);
    fclose(tv);

    return 0;
}
void check_comment(char c)
{
    char d;
    if(c=='/')
    {

        if((d=fgetc(fozia))=='/')
        {
            single_comment();
        }
        else
        {
            fputc(c,tv);
            fputc(d,tv);
        }
    }
    else
        fputc(c,tv);
}

void single_comment()
{
    char d;
    while((d=fgetc(fozia))!=EOF)
    {
        if(d=='\n')
              return;

    }
}
