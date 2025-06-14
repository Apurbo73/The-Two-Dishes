#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, S;
        cin >> N >> S;
        int min_val = max(0, S - N);
        int max_val = min(N, S);
        cout << max_val - min_val << endl;
    }
    return 0;
}
