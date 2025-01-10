#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    public:
        T add(T a, T b) {
            return a + b;
        }

        T subtract(T a, T b) {
            return a - b;
        }

        T multiply(T a, T b) {
            return a * b;
        }

        T divide(T a, T b) {
            if (b==0) {
                cout<< "Error: Division by zero!" <<"\n";
                return 0;
            }
            return a / b;
        }
};

int main() {
    Calculator<int> intCalculator;
    cout << intCalculator.add(5,8)<<"\n";
    cout << intCalculator.subtract(5,8)<<"\n";

    Calculator<float> floatCalculator;
    cout << floatCalculator.add(5.2,7.84)<<"\n";
    cout << floatCalculator.subtract(5.2,7.84)<<"\n";
    cout << floatCalculator.multiply(5.2,7.84)<<"\n";
    cout << floatCalculator.divide(5.2,7.84)<<"\n";

    cin.get();

}