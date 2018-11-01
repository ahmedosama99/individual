#include "complex1.h"
#include <iostream>

complex1::complex1() {}

istream&operator >> (istream & taek , complex1 &num) ///taek from user numbers
{
    cout<<"enter the real number : ";
    taek>>num.real;    ///enter the real number
    cout<<"enter the imaginary : ";
    taek>>num.imaginary;  ///enter the imaginary number
    return taek;
}
ostream&operator << (ostream&print , complex1 &num) ///print the result
{
    print<<num.real; ///print the real number
    if(num.imaginary>0)///check if the result - or +
    {
        print<<'+';
    }
    print<<num.imaginary; ///print the imaginary number
    print<<'i';
    print<<endl;
    return print;
}
complex1 operator + (complex1 num1 , complex1 num2) ///summation
{
    complex1 num;
    num.real=num1.real+num2.real; ///add the real numbers
    num.imaginary=num1.imaginary+num2.imaginary; ///add the imaginary numbers
    return num;
}
complex1 operator - (complex1 num1 , complex1 num2 ) ///Subtraction
{
    complex1 num ;
    num.real = num1.real-num2.real; ///Subtraction the real numbers
    num.imaginary=num1.imaginary-num2.imaginary;///Subtraction the imaginary numbers
    return num;

}
complex1 operator * (complex1 num1 , complex1 num2) ///Multiply
{
    complex1 num ;
    num.real = num1.real*num2.real-num1.imaginary*num2.imaginary; ///Multiply the real numbers
    num.imaginary= num1.real*num2.imaginary+num2.real*num1.imaginary; ///Multiply the imaginary numbers
    return num;
}
bool operator == (complex1 num1 , complex1 num2) ///check if is Equal or not
{
    if(num1.real==num2.real&&num1.imaginary==num2.imaginary)  ///is Equal
    {
        return true;
    }
    else ///is not Equal
    {
        return false;
    }
}
