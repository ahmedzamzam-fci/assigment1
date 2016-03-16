#include"q1.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <cmath>
#include <sstream>
using namespace std;

BigDecimalInt::BigDecimalInt()
{
    value="";
}

BigDecimalInt::BigDecimalInt(string v)
{
   value=v;
}

BigDecimalInt::BigDecimalInt(int v)
{
    stringstream cast;
        cast<<v;
        cast>>value;
}


void BigDecimalInt::setValue(string v)
{
    value=v;
}


string BigDecimalInt::getString()
{
   return value;
}


int BigDecimalInt::toDecimal()const
{
  stringstream cast(value);
    int n=0;
    cast>>n;
    return n;//to num
}

BigDecimalInt BigDecimalInt::operator+(const BigDecimalInt& righthandside)
{
   return (this->toDecimal()+righthandside.toDecimal());
}


BigDecimalInt BigDecimalInt::operator-(const BigDecimalInt& righthandside)
{
    return(this->toDecimal()-righthandside.toDecimal());
}
ostream& operator<<(ostream& out,const BigDecimalInt & z)
{
    out<<z.value<<endl;
    return out;
}


istream& operator>>(istream& in,BigDecimalInt& z)
{
    in>>z.value;
    return in;
}

int main()
{
    string number1,number2;
        cin>>number1>>number2;
    BigDecimalInt B1(number1);
    BigDecimalInt B2(number2);

   BigDecimalInt B3;
   cout<<number1<<endl;
   cout<<number2<<endl;
   B3 = B1+B2;
   cout << "B1+B2 is" << B3 << endl;
    return 0;
}
