#include <iostream>
using namespace std;

void series1() {
    double sum = 0;
    double current;
    for (int i = 0; i < 10; i++) {
        cin >> current;
        sum += current;
    }
    cout << sum << endl;
}

void series2() {
    double product = 1;
    double current;
    for (int i = 0; i < 10; i++) {
        cin >> current;
        product *= current;
    }
    cout << product << endl;
}

void series3() {
    double sum = 0;
    double current;
    for (int i = 0; i < 10; i++) {
        cin >> current;
        sum += current;
    }
    cout << sum/10 << endl;
}

void series4() {
    int n;
    cin >> n;
    double sum = 0;
    double product = 1;
    double current;
    for (int i = 0; i < n; i++) {
        cin >> current;
        sum += current;
        product *= current;
    }
    cout << sum << ' ' << product << endl;
}

void series8() {
    int n;
    cin >> n;
    int current;
    int amount = 0;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (current % 2 == 0) {
            cout << current << endl;
            amount++;
        }
    }
    cout << amount << endl;
}
int main()
{
    std::cout << "Hello World!\n";
}

