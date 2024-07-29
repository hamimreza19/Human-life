#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Overload - operator
    Complex operator - (const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    // Overload * operator
    Complex operator * (const Complex& obj) {
        return Complex((real * obj.real - imag * obj.imag), (real * obj.imag + imag * obj.real));
    }

    // Overload / operator
    Complex operator / (const Complex& obj) {
        double denominator = obj.real * obj.real + obj.imag * obj.imag;
        return Complex((real * obj.real + imag * obj.imag) / denominator, (imag * obj.real - real * obj.imag) / denominator);
    }

    // Display the complex number
    void display() {
        if(imag < 0)
            std::cout << real << " - " << -imag << "i" << std::endl;
        else
            std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex quot = c1 / c2;

    std::cout << "c1 = "; c1.display();
    std::cout << "c2 = "; c2.display();

    std::cout << "Sum: "; sum.display();
    std::cout << "Difference: "; diff.display();
    std::cout << "Product: "; prod.display();
    std::cout << "Quotient: "; quot.display();

    return 0;
}
