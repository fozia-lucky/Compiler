#include <stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
    char str[20];
    int n=0,count;

    printf("Enter a string:");
    gets(str);


    if (!((str[0] >= 'a' && str[0] <= 'z')
            || (str[0] >= 'A' && str[1] <= 'Z')
            || str[0] == '_'))

    {


        for (int i = 1; i < strlen(str); i++)
        {
            if (!((str[i] >= 'a' && str[i] <= 'z')
                    || (str[i] >= 'A' && str[i] <= 'Z')
                    || (str[i] >= '0' && str[i] <= '9')
                    || str[i] == '_'))
            {
                n++;
            }
        }
        if( n == strlen(str));
        {
            count=0;
        }
    }
    else
    {
        count=1;
    }


    if (count==1)
        printf("%s is Valid identifier",str) ;
    else
        printf("%s is Invalid identifier",str) ;

    return 0;
}
