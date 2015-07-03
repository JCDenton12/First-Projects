#include <iostream>
#include <cmath>
using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double sqrt(double x);
double print_results_add(double x, double y);
double print_results_subtract(double x, double y);
double print_results_multiply(double x, double y);
double print_results_divide(double x, double y);
double print_results_sqrt(double x);


int main()
{
    while (true) {
    int op, *a, b, x, y;
    a = &op;
    cout << "Hello! What operation would you like to carry out? \n";
    cout << "add(1), subtract(2), multiply(3), divide(4), square root(5)(0 to quit): ";
    cin >> op;
    if ( op == 0) {
         break;
         }
    switch(op) {
    case 1:
         cout << "Please enter values to be added: ";
         cin >> x >> y;
        double add(double x, double y);
        print_results_add(x, y);
         break;
    case 2:
         cout << "Please enter values to be subtracted: ";
         cin >> x >> y;
        double subtract(double x, double y);
        print_results_subtract(x, y);
         break;
    case 3:
         cout << "Please enter values to be multiplied: ";
         cin >> x >> y;
        double multiply(double x, double y);
        print_results_multiply(x, y);
         break;
    case 4:
         cout << "Please enter values to be dividied: ";
         cin >> x >> y;
       double divide(double x, double y);
       print_results_divide(x, y);
         break;
    case 5:
         cout << "Please enter value to be square rooted: ";
         cin >> x;
         double sqrt(double x);
         print_results_sqrt(x);
         break;
         }
    }
         
         
    system("PAUSE");
    return 0;
}

double print_results_add(double x, double y) {
       cout << "The solution is " << add(x, y) << endl;;
}
double print_results_subtract(double x, double y) {
       cout << "The solution is " << subtract(x, y) << endl;
}
double print_results_multiply(double x, double y) {
       cout << "The solution is " << multiply(x, y) << endl;
}
double print_results_divide(double x, double y) {
       cout << "The solution is " << divide(x, y) << endl;
}
double print_results_sqrt(double x) {
       cout << "The solution is " << sqrt(x) << endl;
}
double add(double x, double y) {
       return x + y;
}

double subtract(double x, double y) {
       return x - y;
}

double multiply(double x, double y) {
       return x * y;
}

double divide(double x, double y) {
       return x / y;
}
double sqrt_value(double x) {
       return sqrt(x);
}
       
               
