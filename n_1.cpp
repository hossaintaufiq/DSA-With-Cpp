#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 1) {
        cout << 1;
    } else {
        cout << n << " ";
        printNumbers(n - 1);
    }
}

int main() {
    int N;
    cin >> N;
    printNumbers(N);
    return 0;
}
