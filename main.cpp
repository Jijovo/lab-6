#include <iostream>
using namespace std;
//Prototypwes
void enterArrayData(double* arr);
void outputArrayData(double* arr);
double sumArray(double* arr);

int main() {
    double* dArray = new double[5];
    enterArrayData(dArray);
    delete[] dArray;
    return 0;
}
//Enter function, takes input from user and fills array
void enterArrayData(double* arr) {
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}
//Output function, displays array elements
void outputArrayData(double* arr) {
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

