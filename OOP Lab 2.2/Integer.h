#pragma once
#include <string>
using namespace std;
class Integer {
private:
    int value;
public:
    Integer() {
        value = 0;
    }
    Integer(int val) {
        this->value = val;
    }
    Integer(const Integer& other) {
        value = other.value;
    }
    ~Integer() {}

    Integer operator+(const Integer& other);

    int getValue() const { return value; };
    
    friend Integer operator-(const Integer& integer);


    friend std::ostream& operator<<(std::ostream& out, const Integer& integer);

    friend std::istream& operator>>(std::istream& in, Integer& integer);

    operator string() const;
};