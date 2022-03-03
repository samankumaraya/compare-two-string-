#include <stdio.h>

int compare(char[],char[]);
int main()
{
    char string1[20];
    char string2[20] ;

    printf("Enter the first string :");
    scanf("%s",string1);
    printf("Enter the second string :");
    scanf("%s",string2);

    int value = compare(string1,string2);

    if (value==0){
        printf("Strings are same");
    }
    else
        printf("string are not same");
    return 0;
}
int compare(char a[],char b[]){
 int i=0,choice=0;
    while(a[i]!='\0' &&b[i]!='\0')
 {
     if(a[i]!=b[i])
     {
         choice=1;
         break;
     }
     i++;
 }
 if(choice==0)
    return 0;
    else
    return 1;
}
