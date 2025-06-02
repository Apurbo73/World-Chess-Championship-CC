#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        string S;
        cin >> X >> S;

        int c = 0, n = 0;

        for (char ch: S) {
            if (ch == 'C') c += 2;
            else if (ch == 'N') n += 2;
            else {
                c++;
                n++;
            }
        }

        if (c > n) cout << 60 * X << endl;
        else if (c < n) cout << 40 * X << endl;
        else cout << 55 * X << endl;
    }

    return 0;
}