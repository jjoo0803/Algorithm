#include <iostream>
#include <cstring>
 
using namespace std;
const int MAX = 1002;
int N,T;
int n;
int visit[MAX];
int cycle[MAX];
int cycleCount = 0;
 
void dfs(int v) {
    visit[v] = true;
    int c = cycle[v];
    for (int i = 1; i<N+1; i++) {
        if (visit[c] == 0) {
            dfs(c);
        } else {
            //cycleCount++;
            break;
        }
    }
}
 
 
int main() {
    cin >> T; // testcase
 
    for (int i = 0; i<T; i++) {
        
        cin >> N; // 순열의 크기
        for (int i=1; i<N+1; i++) {
            cin >> n;
            cycle[i] = n;
        }
        
        for (int i = 1; i<N+1; i++) {
            if (visit[i] == 0) {
                dfs(i);
                cycleCount++;
            }
        }
        cout << cycleCount << endl;
        memset(visit, 0, sizeof(visit));
        memset(cycle, 0, sizeof(cycle));
        cycleCount = 0;
    }
    return 0;
}
