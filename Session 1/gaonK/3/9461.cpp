#include <iostream>
using namespace std;

long long p[101];

int main() {

    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 2;
    p[5] = 2;

    for (int i = 6; i <= 100; i++) {
        p[i] = p[i - 1] + p[i - 5];
    }

    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << p[N] << '\n';
    }
    
    return 0;
}