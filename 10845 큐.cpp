#include <iostream>
#include <queue>
using namespace std;
 
int main() {
    
    int n;
    string com;
    queue<int> qu;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> com;
        if (com == "push") {
            int k;
            cin >> k;
            qu.push(k);
        }
        else if (com == "pop") {
            if (qu.size() == 0) {
                cout << "-1" << endl;
            }
            else {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
        else if (com == "size") {
            cout << qu.size() << endl;
        }
        else if (com == "empty") {
            if (qu.size() == 0) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
        else if (com == "front") {
            if (qu.size() == 0){
                cout << -1 << endl;
            }
            else {
                cout << qu.front() << endl;
            }
        }
        else if (com == "back") {
            if (qu.size() == 0) {
                cout << -1 << endl;
            }
            else {
                cout << qu.back() << endl;
            }
        }
    }
 
    return 0;
}
