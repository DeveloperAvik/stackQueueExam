#include <bits/stdc++.h>
#include <vector>
using namespace std;
/* © Copyright 2023 - Developed/coded by Avik Das. All right reserved.
Github: DeveloperAvik
Linkedln: DeveloperAvik
*/

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    myStack st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // if(st.size() == false){
    //     cout << st.top() << endl;
    // }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin >> x;
        st.push(x);
    }
    cout << "<-----------Print Start ----------->" << endl;

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}