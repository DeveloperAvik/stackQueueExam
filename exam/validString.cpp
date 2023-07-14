#include <bits/stdc++.h>
using namespace std;

class validString
{
public:
    string s;
    validString(string str)
    {
        s = str;
    }

    bool isValid()
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == 'A' && !st.empty() && st.top() == 'B')
                st.pop();
            else if (c == 'B' && !st.empty() && st.top() == 'A')
                st.pop();
            else
                st.push(c);
        }

        return st.empty();
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        validString valid(a);
        bool result = valid.isValid();
        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
