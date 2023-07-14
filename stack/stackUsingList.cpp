#include<bits/stdc++.h>
using namespace std;
/* © Copyright 2023 - Developed/coded by Avik Das. All right reserved.
Github: DeveloperAvik
Linkedln: DeveloperAvik */

class myStack {
    public:

    list<int> l;

    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_back();
    }

    int top(){
        return l.back();
    }

    int size () {
        return l.size();
    }

    bool empty(){
        if(l.size() == false)
            return true;
        else 
            return false;
    }
};
int main(){
    myStack s;
    int n;
    cin >> n ;
    for(int i =0; i < n ; i++) {
        int x ;
        cin >> x ;
        s.push(x);
    }

    cout << "<------------ Print Start -------------->" << endl;

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
  return 0;
}