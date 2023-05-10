#include "iostream"

using namespace std;

namespace ariel{


    class Fraction{

    private:
        void reduce();
        int m_number1;
        int m_number2;
        int m_number;

    public:
        Fraction(int, int);
        Fraction(float);

        Fraction operator+(const Fraction& other) const;
        Fraction operator-(const Fraction& other) const;
        Fraction operator*(const Fraction& other) const;
        friend Fraction operator*(float num, const Fraction &other);
        Fraction operator/(const Fraction& other) const;
        bool operator==(const Fraction& other) const;
        bool operator!=(const Fraction& other) const;
        bool operator<(const Fraction& other) const;
        bool operator<=(const Fraction& other) const;
        bool operator>(const Fraction& other) const;
        bool operator>=(const Fraction& other) const;
        Fraction operator++(); // pre-increment
        Fraction operator++(int); // post-increment
        Fraction operator--(); // pre-decrement
        Fraction operator--(int); // post-decrement

        friend ostream& operator<<(ostream& out, const Fraction& f);
        friend std::istream& operator>>(std::istream& in, Fraction& f);


        int getNumerator() const;
        int getDenominator() const;

        Fraction operator+(float& f, const Fraction& other);
    };
}