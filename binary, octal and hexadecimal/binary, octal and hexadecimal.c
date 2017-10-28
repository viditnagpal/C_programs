// WAP to find binary.. octal.. hexadecimal representation of a number

#include<stdio.h>

int binary(num);
int octal(num);
int hexadecimal(num);

main()
{
    int num,bin,oct,hex;
    printf("Enter a number\n");
    scanf("%d",&num);

    bin = binary(num);
    oct = octal(num);
    hex = hexadecimal(num);

    printf("binary = %d\noctal = %d\nHeaxadecimal = %x",bin,oct,hex);

}

int binary (num)
{
    int temp,rem,place=1,bin=0;
    temp =num;

    while (temp !=0)
    {
        rem = temp%2;
        bin = bin +(rem*place);
        temp = temp/2;
        place = place*10;
    }
   return bin;
}

int octal (num)
{
    int rem,temp,place=1,oct=0;
    temp =num;

    while (temp!=0)
    {
        rem = temp%8;
        oct = oct+(rem*place);
        temp = temp/8;
        place=place*10;
    }
    return oct;
}

int hexadecimal (num)
{
    return num;
}
