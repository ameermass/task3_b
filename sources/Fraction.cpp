#include "Fraction.hpp"

namespace ariel{


    Fraction::Fraction(int number1, int number2) : m_number1(number1), m_number2(number2){}
    Fraction::Fraction(float number) : m_number1(number), m_number2(number) {}

    Fraction Fraction::operator+(const Fraction& other) const {
        int first = this->m_number1 + other.m_number1;
        int second = this->m_number2 + other.m_number2;

        return Fraction(first,second);
    }

    Fraction Fraction::operator-(const Fraction& other) const {
        int first = this->m_number1 - other.m_number1;
        int second = this->m_number2 - other.m_number2;

        return Fraction(first,second);
    }

    Fraction Fraction::operator*(const Fraction& other) const{
        int first = this->m_number1 * other.m_number1;
        int second = this->m_number2 * other.m_number2;

        return Fraction(first,second);
    }

    Fraction operator*(float num, const Fraction &other){

        return Fraction(1,2);
        }

    Fraction Fraction::operator/(const Fraction& other) const{
        int first = this->m_number1 / other.m_number1;
        int second = this->m_number2 / other.m_number2;

        return Fraction(first,second);
    }

    bool Fraction::operator==(const Fraction& other) const{
        bool flag1 = m_number1 == other.m_number1;
        bool flag2 = m_number2 == other.m_number2;

        return flag1 && flag2;
    }

    bool Fraction::operator!=(const Fraction& other) const{
        bool flag1 = m_number1 != other.m_number1;
        bool flag2 = m_number2 != other.m_number2;

        return flag1 || flag2;
    }

    bool Fraction::operator<(const Fraction& other) const{
        bool flag1 = m_number1 < other.m_number1;
        bool flag2 = m_number2 < other.m_number2;

        return flag1 && flag2;
    }

    bool Fraction::operator<=(const Fraction& other) const{
        bool flag1 = m_number1 <= other.m_number1;
        bool flag2 = m_number2 <= other.m_number2;

        return flag1 && flag2;
    }

    bool Fraction::operator>(const Fraction& other) const{
        bool flag1 = m_number1 < other.m_number1;
        bool flag2 = m_number2 < other.m_number2;

        return flag1 && flag2;
    }

    bool Fraction::operator>=(const Fraction& other) const{
        bool flag1 = m_number1 <= other.m_number1;
        bool flag2 = m_number2 <= other.m_number2;

        return flag1 && flag2;
    }

    Fraction Fraction::operator++(){
        this->m_number1 = this->m_number1 + 1;
        this->m_number2 = this->m_number2 + 1;

        return *this;
    }

    Fraction Fraction::operator++(int i){
        this->m_number1 = this->m_number1 + i;
        this->m_number2 = this->m_number2 + i;

        return *this;
    }
    
    Fraction Fraction::operator--(){
        this->m_number1 = this->m_number1 - 1;
        this->m_number2 = this->m_number2 - 1;

        return *this;
    }

    Fraction Fraction::operator--(int i){
        this->m_number1 = this->m_number1 - i;
        this->m_number2 = this->m_number2 - i;

        return *this;
    }

    ostream& operator<<(ostream& out, const Fraction& f){
        return out;
    }

    std::istream& operator>>(std::istream& in, Fraction& f){
        return in;
    }

    int Fraction::getNumerator() const {
        return this->m_number1;
    }

    int Fraction::getDenominator() const {
        return this->m_number2;
    }

    Fraction Fraction::operator+(float &f, const Fraction& other){
        int first = this->m_number1 + other.m_number1;
        int second = this->m_number2 + other.m_number2;

        return Fraction(first,second);
    }

}