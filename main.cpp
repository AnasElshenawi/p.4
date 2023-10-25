#include <iostream>
using namespace std;

int main() {
       int i;
       int j;
       int h;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            cout << " ";
        }

        for (h = 1; h <= i; h++) {
            cout << "#";
        }

        for (j = 1; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}
