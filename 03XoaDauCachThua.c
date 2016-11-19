#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[100];int i,k;
    gets(a);
    for(i=1;i<=strlen(a);i++)
    {
        if (a[i]==a[i+1]&&a[i]==' ')
        {
            for(k=i+1;k<strlen(a);k++)
                a[k]=a[k+1];
                i--;

        }
    }
    puts(a);


}

