#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s, result;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s.length() > 10)
        {
            result += s[0] + to_string(s.length()-2) + s[s.length() - 1] + "\n";
        }
        else
        {
            result += s + "\n";
        }
    }

    cout << result; 

    return 0;
}
