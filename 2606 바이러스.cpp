#include <iostream>
using namespace std;
 
const int MAX = 101;
int N, M; // N 노드 , M 간선
int arr[MAX][MAX];
int visit[MAX];
int virus = 0;
 
void dfs(int v) {
    visit[v] = 1;
    for (int i = 1; i<N+1; i++) {
        if (visit[i] == 0 && arr[v][i] == 1) {
            virus++;
            dfs(i);            
        } else {
            continue;
        }
    }
}
 
 
int main() {
    int x,y;
    cin >> N >> M;
    for (int i = 0; i<M; i++) {
        cin >> x >> y;
        arr[x][y] = arr[y][x] = 1;
    }
    dfs(1);
    
    cout << virus << endl;
    
    return 0;
}
