#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < N; k++) {
                    for (int l = 0; l < N; l++) {
                        if (i != j && i != k && i != l && j != k && j != l && k != l) {
                            int AB = A[i] ^ A[j];
                            int BC = A[j] ^ A[k];
                            int CD = A[k] ^ A[l];
                            int DA = A[l] ^ A[i];
                            if (AB > 0 && BC > 0 && CD > 0 && DA > 0 && AB == CD && (A[i] ^ A[k]) == (A[j] ^ A[l])) {
                                count++;
                            }
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}