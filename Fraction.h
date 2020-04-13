//
// Created by alftunner on 13.04.2020.
//

using namespace std;

class Fraction {
public:
    int numerator, denominator;
    Fraction(){}
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void setNumerator(int numerator)
    {
        this->numerator = numerator;
    }
    void  setDenominator(int denominator){
        this->denominator = denominator;
    }
};



