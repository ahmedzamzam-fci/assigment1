#ifndef Q1_H_INCLUDED
#define Q1_H_INCLUDED

#include <iostream>
using namespace std;
class BigDecimalInt{
protected:
    string value;
public:
        BigDecimalInt();
       BigDecimalInt (string v);
       BigDecimalInt  (int v);
       void setValue(string v );
     void setValue(int v );
       string getString();
       int toDecimal()const;
        BigDecimalInt operator+(const BigDecimalInt& righthandside);
        BigDecimalInt operator-(const BigDecimalInt& righthandside);
        friend ostream& operator<<(ostream& out,const BigDecimalInt& z);
            friend istream& operator>>(istream& in,BigDecimalInt & z);

    };

#endif // Q1_H_INCLUDED
