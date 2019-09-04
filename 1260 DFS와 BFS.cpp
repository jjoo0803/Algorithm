#include <iostream>
#include <queue>
#include <cstring>
 
using namespace std;
 
const int MAX = 1001;
int N,M,V; // N 노드 M 간선 V 정점
int arr[MAX][MAX];
int visit[MAX];
queue<int> q;
 
void dfs(int v) {
    cout << v << " ";
    visit[v] = 1; // 정점 방문 표시
    for(int i=1; i<N+1; i++){
        if(visit[i] == 0 && arr[v][i] == 1){ // 방문의 유무 && 간선의 유무 (방문하지 않았고,간선이 있다면)
            dfs(i); // dfs 재귀호출
        } else {
            continue;
        }
    }
}
 
void bfs(int v) {
    visit[v] = 1;
    q.push(v);
    while(!q.empty()){
        v = q.front();
        q.pop();
        cout << v << " ";
        for(int i = 0; i<N+1; i++){
            if(visit[i] == 0 && arr[v][i] == 1){ // 방문의 유무 && 간선의 유무 (방문하지 않았고,간선이 있다면)
                q.push(i); // 큐에 추가 
                visit[i] = 1;
            } else {
                continue;
            }
        }
    }
}
 
int main() {
    int x,y;
    cin >> N >> M >> V;
    for (int i = 0; i<M; i++) {
        cin >> x >> y;
        arr[x][y] = arr[y][x] = 1;
    }
    dfs(V);
    memset(visit, 0, sizeof(visit)); // 배열을 초기화 시키는 함수
    cout << endl;
    bfs(V);
    return 0;
}