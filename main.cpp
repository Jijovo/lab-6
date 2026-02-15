#include <iostream>
using namespace std;
//Prototypwes
void enterArrayData(double* arr, int size);
void outputArrayData(double* arr, int size);
double sumArray(double* arr, int size);

int main() {
    const int size = 5;
    double* dArray = new double[size];
    enterArrayData(dArray, size);
    outputArrayData(dArray, size);
    double sum = sumArray(dArray, size);
    cout << "Sum of array elements: " << sum << endl;
    delete[] dArray;
    return 0;
}
//Enter function, takes input from user and fills array
void enterArrayData(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}
//Output function, displays array elements in console
void outputArrayData(double* arr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//Sum function, calculates and returns the sum of array elements
double sumArray(double* arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}