#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <char> st;
     int t; cin >> t;

     while (t--)
     {
        int n; cin >> n;
        while (n--)
        {
            char c; cin >> c;
            if(!st.empty() &&st.top() == c){
                st.pop();
            }
            else if (!st.empty() and c == 'R' && st.top() == 'B' || !st.empty() && c == 'B' and st.top() == 'R')
            {
                st.pop();
                st.push('P');
            }
            else if (!st.empty() && c == 'R' && st.top() == 'G' || !st.empty() && c == 'G' && st.top() == 'R')
            {
                st.pop();
                st.push('Y');
            }
            else if (!st.empty() and c == 'B' and st.top() == 'G' || !st.empty() and c == 'G' and st.top() == 'B')
            {
                st.pop();
                st.push('C');
            }
            else{
                st.push(c);
            }
        }
        stack<char> temp;
        while (!st.empty())
        {
            if(!temp.empty() && st.top() == temp.top()){
                st.pop();
                temp.pop();
            }
            else{
                temp.push(st.top());
                st.pop();
            }
        }

        while (!temp.empty())
        {
            cout << temp.top();
            temp.pop();
        }
        cout << endl;
     }
     

    return 0;
}