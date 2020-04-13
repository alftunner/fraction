#include <iostream>
#include "Fraction.h"

void add(Fraction fraction1, Fraction fraction2);
void subtr(Fraction fraction1, Fraction fraction2);
void mult(Fraction fraction1, Fraction fraction2);
void dev(Fraction fraction1, Fraction fraction2);

int main() {
    Fraction fraction1(5,6);
    Fraction fraction2;
    fraction2.setNumerator(4);
    fraction2.setDenominator(7);

    add(fraction1, fraction2);
    subtr(fraction1, fraction2);
    mult(fraction1, fraction2);
    dev(fraction1, fraction2);
    return 0;
}

void add(Fraction fraction1, Fraction fraction2)
{
    int totalNumerator = fraction1.numerator*fraction2.denominator + fraction2.numerator*fraction1.denominator;
    int totalDenominator = fraction1.denominator * fraction2.denominator;
    cout << "Result of Addition: " << totalNumerator << " / " << totalDenominator << endl;
}
void subtr(Fraction fraction1, Fraction fraction2)
{
    {
        int totalNumerator = fraction1.numerator*fraction2.denominator - fraction2.numerator*fraction1.denominator;
        int totalDenominator = fraction1.denominator * fraction2.denominator;
        cout << "Result of Subtraction: " << totalNumerator << " / " << totalDenominator << endl;
    }
}
void mult(Fraction fraction1, Fraction fraction2)
{
    {
        int totalNumerator = fraction1.numerator * fraction2.numerator;
        int totalDenominator = fraction1.denominator * fraction2.denominator;
        cout << "Result of Multiply: " << totalNumerator << " / " << totalDenominator << endl;
    }
}
void dev(Fraction fraction1, Fraction fraction2)
{
    int totalNumerator = fraction1.numerator * fraction2.denominator;
    int totalDenominator = fraction1.denominator * fraction2.numerator;
    cout << "Result of Division: " << totalNumerator << " / " << totalDenominator << endl;
}