#include <stdio.h>
#include<string.h>
int main()
{
    int length;int i;
    char str[20];

    printf("Enter the string to be reversed: \n");
    scanf("%s",&str);

    length=strlen(str); 
    printf("Reversed string is: \n");
    
    for(i=length-1;i>=0;i--) 
    {
        printf("%c",str[i]);
    }
}