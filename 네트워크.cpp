#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int visit[200];
int count = 0;
 
void DFS(int v, vector<vector<int>> computers, int length) {
    visit[v] = 1;
    for (int j = 0; j < length; j++) {
        if (computers[v][j] == 1 && visit[j] == 0) {
            DFS(j, computers, computers.size());
        }
    }
}
 
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (visit[i] == 0) {
            DFS(i, computers, computers.size());
            answer++;
        }
    }
    return answer;
}
