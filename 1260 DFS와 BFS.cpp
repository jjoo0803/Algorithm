#include <iostream>
#include <queue>
#include <cstring>
 
using namespace std;
 
const int MAX = 1001;
int N,M,V; // N ��� M ���� V ����
int arr[MAX][MAX];
int visit[MAX];
queue<int> q;
 
void dfs(int v) {
    cout << v << " ";
    visit[v] = 1; // ���� �湮 ǥ��
    for(int i=1; i<N+1; i++){
        if(visit[i] == 0 && arr[v][i] == 1){ // �湮�� ���� && ������ ���� (�湮���� �ʾҰ�,������ �ִٸ�)
            dfs(i); // dfs ���ȣ��
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
            if(visit[i] == 0 && arr[v][i] == 1){ // �湮�� ���� && ������ ���� (�湮���� �ʾҰ�,������ �ִٸ�)
                q.push(i); // ť�� �߰� 
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
    memset(visit, 0, sizeof(visit)); // �迭�� �ʱ�ȭ ��Ű�� �Լ�
    cout << endl;
    bfs(V);
    return 0;
}