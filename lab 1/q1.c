#include<stdio.h>
struct complex
{
    float real;
    float img;
};
void main()
{
    struct complex c1,c2,c3;
    printf("enter the real part of first number");
    scanf("%f",&c1.real);
    printf("enter the imaginary part of first number");
    scanf("%f",&c1.img);
    printf("enter the real part of second number");
    scanf("%f",&c2.real);
    printf("enter the imaginary part of second number");
    scanf("%f",&c2.img);
    c3.real= c1.real+c2.real;
    c3.img= c1.img+c2.img;
    printf("the sum of the complex numbers are %f+i%f",c3.real,c3.img);
}
