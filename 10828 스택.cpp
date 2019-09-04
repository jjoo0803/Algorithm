#include <iostream>
#include <stack>
using namespace std;
 
int main() {
    
    int n;
    string com;
    cin >> n;
    stack<int> st;
    
    for(int i=0; i<n; i++) {
        cin >> com;
        if (com == "push") {
            int k;
            cin >> k;
            st.push(k);
        }
        else if (com == "pop") {
            if (st.size() != 0) {
                cout << st.top() << endl;
                st.pop();
            }
            else {
                cout << "-1"<<endl;
            }
        }
        else if (com == "size") {
            cout << st.size() << endl;
        }
        else if (com == "empty") {
            if (st.size() == 0){
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
        else if (com == "top") {
            if (st.size() == 0){
                cout << "-1" << endl;
            }
            else {
                cout << st.top() << endl;
            }
        }
    
    }
 
    return 0;
}