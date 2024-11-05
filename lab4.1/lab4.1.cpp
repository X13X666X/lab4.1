#include <iostream>
using namespace std;

int main() {
    int K, N, i;
    double S;

    cout << "K = "; cin >> K;
    cout << "N = "; cin >> N;
    
    S = 1.0;
    i = K;
    while (i <= N) {
        S *= ((K * 1.0 / i) + (i * 1.0 / N));
        i++;
    }
    cout << "while: " << S << endl;

    S = 1.0;
    i = K;
    do {
        S *= ((K * 1.0 / i) + (i * 1.0 / N));
        i++;
    } while (i <= N);
    cout << "do-while: " << S << endl;

    S = 1.0;
    for (i = K; i <= N; i++) {
        S *= ((K * 1.0 / i) + (i * 1.0 / N));
    }
    cout << "for (++): " << S << endl;

    S = 1.0;
    for (i = N; i >= K; i--) {
        S *= ((K * 1.0 / i) + (i * 1.0 / N));
    }
    cout << "for (--): " << S << endl;

    return 0;
}
