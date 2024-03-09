#include "Integer.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


Integer operator-(const Integer& integer) {
    Integer result;
    result.value = -integer.value;
    return result;
}

ostream& operator<<(std::ostream& out, const Integer& integer) {
    out << integer.value;
    return out;
}

istream& operator>>(std::istream& in, Integer& integer) {
    in >> integer.value;
    return in;
}

Integer Integer::operator+(const Integer& other) {
    Integer result;
    result.value = this->value + other.value;
    return result;
}

Integer::operator string() const{
    stringstream ss;
    ss << "Your value: " << value << endl;
    return ss.str();
}