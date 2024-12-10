// Function to read a character and check whether it is a vowel or not
#include <iostream>
using namespace std;

void Checker(int a) {
    int check = 0;
    int arrvowel[10] = {65, 97, 69, 101, 73, 105, 79, 111, 85, 117};

    for (int i = 0; i < 10; i++) {
        if (a == arrvowel[i]) {
            check++;
        }
    }
    if (check > 0) {
        cout << "VOWEL" << endl;
    } else {
        cout << "CONSONANT" << endl;
    }
}

int main() {
    char a;
    cout << "Enter the character: ";
    cin >> a;
    int x = a;
    Checker(x);

    return 0;
}
