// program to print the first n Fibonacci numbers using functions
#include <iostream>
using namespace std;

void Fibo(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << "\t";
            continue;
        }
        if(i == 2) {
            cout << t2 << "\t";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << "\t";
    }
}

int main() {
    int a;

    cout << "Enter the number of terms: ";
    cin >> a;
    Fibo(a);

    return 0;
}
