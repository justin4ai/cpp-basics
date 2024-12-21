#include <iostream>

class Complex {
private:
    double real;
    double img;

public:
    Complex(double real, double img) : real(real), img(img) {};
    Complex(const Complex& comp) {
        real = comp.real;
        img = comp.img;
    }

    Complex operator+(const Complex& comp) const;
    Complex operator-(const Complex& comp) const;
    Complex& operator=(const Complex& c) ;
    Complex& operator+=(const Complex& c);
    Complex& operator-=(const Complex& c);
};

Complex Complex::operator+(const Complex& c) const {
  Complex aux(real + c.real, img + c.img);
  return aux;
}

Complex Complex::operator-(const Complex& c) const {
  Complex temp(real - c.real, img - c.img);
  return temp;
}

Complex& Complex::operator=(const Complex& c)

{
  real = c.real;
  img = c.img;
  return *this;
}

Complex& Complex::operator+=(const Complex& c) {
  (*this) = (*this) + c;
  return *this;
}
Complex& Complex::operator-=(const Complex& c) {
  (*this) = (*this) - c;
  return *this;
}

int main() {
  Complex a(1.0, 2.0);
  Complex b(3.0, -2.0);

  // not implemented
//   Complex c = a * b;

//   c.println();
}