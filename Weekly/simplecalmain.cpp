#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double arithmetic(double num1, double num2, char op);

double computeFunction(string func, double num);

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Invalid number of arguments" << endl;
        return 1;
    }

    if (argc == 3) { // Trường hợp có hai tham số
        string func = argv[1];
        double num = atof(argv[2]);
        cout << computeFunction(func, num) << endl;
        return 0;
    }

    if (argc == 4) { // Trường hợp có ba tham số
        double num1 = atof(argv[1]);
        char op = argv[2][0];
        double num2 = atof(argv[3]);
        cout << arithmetic(num1, num2, op) << endl;
        return 0;
    }

    cout << "Invalid input format" << endl;
    return 1;
}

double arithmetic(double num1, double num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case 'x': return num1 * num2;
        case '/':
            if (num2 == 0) {
                cout << "Invalid divisor" << endl;
                exit(1);
            }
            return num1 / num2;
        default:
            cout << "Invalid operator" << endl;
            exit(1);
    }
}

double computeFunction(string func, double num) {
    if (func == "sin") return sin(num);
    if (func == "cos") return cos(num);
    if (func == "tan") return tan(num);
    if (func == "sqrt") {
        if (num < 0) {
            cout << "Invalid input for sqrt" << endl;
            exit(1);
        }
        return sqrt(num);
    }
    cout << "Invalid function" << endl;
    exit(1);
}
