#include <stdio.h>

int str_len (char* str1)
{
    int n = 0;
    while (str1[n] != '\0') {
        n += 1;
    }
    return n;
}

int isPrime (int int1)
{
    if (int1 == 1)
    {
        printf("Not prime \n");
    }
    else
    {
        for (int i = 2; i < int1; i++)
        {
            if ((int1 % i) == 0)
            {
                printf("Not prime \n");
                return 0;
            }
        }
        printf("Prime \n");
    }
}

char* concatStrings(char* str2,char* str3)
{
    int len = str_len(str2) + str_len(str3);
    char str4[len];
    for (int i=0;i<str_len(str2);i++)
    {
        str4[i] = str2[i];
    }
    int n = 0;
    for (int j=str_len(str2);j<len;j++)
    {
        str4[j] = str3[n];
        n += 1;
    }
    printf("%s\n",str4);
}

int main ()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area of circle = %f\n", radius * radius * 3.14);

    printf("Volume of sphere = %f\n", 4.19 * radius * radius * radius);

    char str1[50];
    printf("Enter string: ");
    scanf("%s", str1);

    printf("%d\n",str_len(str1));

    int int1;
    printf("Enter number: ");
    scanf("%d", &int1);
    isPrime(int1);

    char str2[50],str3[50];
    printf("Enter string: ");
    scanf("%s", str2);
    printf("Enter string: ");
    scanf("%s", str3);
    concatStrings(str2,str3);

    return 0;
}