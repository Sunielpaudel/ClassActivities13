#include <iostream>
using namespace std;

int main() {
    int numTemperatures;
    double temperature, sum = 0, average;

    cout << "Enter the number of temperatures: ";
    cin >> numTemperatures;  

    cout << "Enter temperatures one by one: " << endl;

 

    for (int i = 0; i < numTemperatures; i++) {
        cin >> temperature; 
        sum += temperature;
    }

    average = sum / numTemperatures;

    cout << "Average temperature: " << average << endl; 

    return 0;
}