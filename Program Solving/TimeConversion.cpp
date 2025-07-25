#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string meridiem = s.substr(s.length() - 2);
    int hour = stoi(s.substr(0, 2));
    if (meridiem == "AM") {
        if (hour == 12) {
            s.replace(0,2,"00");
        }
    } else {
        if (hour != 12) {
            hour += 12;
            string new_hour = to_string(hour);
            s.replace(0,2,new_hour);
        }
    }
    s = s.substr(0, s.length() - 2);
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
