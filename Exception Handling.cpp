#include <iostream>
using namespace std;

int main() {
    try {
        int num1, num2, num3;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter the third number: ";
        cin >> num3;

        if (num2 == 0) {
            throw -3.6;
        }

        double div = (double)(num1) / num2;
        cout << "Division: " << div << endl;

        if (num3 == 0) {
            throw 2;
        }

        double result = (double)(num2) / num3;
        cout << "Result: " << result << endl;
    }
    catch (double) {
        cout << "Divide by zero error (num2)!" << endl;
        cout << "Please try again" << endl;
    }
    catch (int) {
        cout << "Divide by zero error (num3)!" << endl;
        cout << "Please try again" << endl;
    }


    return 0;
}
