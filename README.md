# World Chess Championship CC


---

### 🔹 Code Explanation:

```cpp
#include <iostream>
using namespace std;
```

* Includes the input/output library so you can use `cin` and `cout`.

---

```cpp
int main() {
```

* This is where the program starts running.

---

```cpp
    int T;
    cin >> T;
```

* Reads the number of test cases (`T`), meaning how many times the program will process a match.

---

```cpp
    while (T--) {
```

* This loop runs once for each test case.

---

```cpp
        int X;
        string S;
        cin >> X >> S;
```

* Reads:

  * `X`: the prize multiplier (the prize pool is `100 * X`)
  * `S`: the result string of 14 games (made of letters: `C`, `N`, `D`)

---

```cpp
        int c = 0, n = 0;
```

* Sets up two counters:

  * `c` for Carlsen's points.
  * `n` for Chef's points.

---

```cpp
        for (char ch: S) {
```

* Goes through each character in the result string `S`.

---

```cpp
            if (ch == 'C') c += 2;
```

* If Carlsen wins the game (`'C'`), give him 2 points.

```cpp
            else if (ch == 'N') n += 2;
```

* If Chef wins the game (`'N'`), give him 2 points.

```cpp
            else {
                c++;
                n++;
            }
```

* If it’s a draw (`'D'`), both players get 1 point each.

---

```cpp
        if (c > n) cout << 60 * X << endl;
```

* If Carlsen has more points, he wins and gets `60 * X` prize money.

```cpp
        else if (c < n) cout << 40 * X << endl;
```

* If Chef has more points, Carlsen loses and gets only `40 * X`.

```cpp
        else cout << 55 * X << endl;
```

* If it’s a tie, Carlsen wins (he's the defending champ) and gets `55 * X`.

---

```cpp
    }

    return 0;
}
```

* Ends the loop and returns from the program.

---

### 💡 Summary:

* This code reads match results, calculates points for each player, and prints how much prize money **Carlsen** gets, based on whether he wins, loses, or ties.

This C++ program calculates the prize money Carlsen wins based on 14 chess game results for each test case. It reads a number X (used for prize calculation) and a string of game results (C, N, D). Carlsen gets 2 points for each C, Chef gets 2 for each N, and both get 1 point for each D. The program keeps track of both players' scores using two counters.

At the end of each test case, it compares their total points. If Carlsen has more, he gets 60 * X; if Chef has more, Carlsen gets 40 * X. If the points are equal, Carlsen still wins (as defending champion) but receives 55 * X. This output is printed for each test case.
