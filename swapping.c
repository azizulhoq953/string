
//string Value input and out Swapping Value

#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    char temp[20];
    printf("Enter A Str1 Value=");
    scanf("%s",&str1);
    printf("Enter A str2 Valu=");
    scanf("%s",str2);

    printf("\n\nPrint String Number\n\n");

    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);


    printf("\n\nSwapping String Value\n\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);




getch();

}
