#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second set of variables
    int i2;
    double d2;
    string s2;

    // Read input
    cin >> i2;
    cin >> d2;
    cin.ignore(); // ignore newline character before getline
    getline(cin, s2);

    // Output results
    cout << i + i2 << endl;
    cout << fixed << setprecision(1) << d + d2 << endl;
    cout << s + s2 << endl;

    return 0;
}
