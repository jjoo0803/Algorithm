#include <string>
#include <vector>
#include <queue>
 
using namespace std;
 
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    int count = 1;
    for (int i=0; i<progresses.size(); i++) {
        int n = 100-progresses[i];
        if (n % speeds[i]) {
            q.push(n/speeds[i]+1);
        } else {
            q.push(n/speeds[i]);
        }
    }
 
    int f = q.front();
    q.pop();
    
    while(!q.empty()) {
        if ( f >= q.front()) {
            q.pop();
            count++;
        } else {
            answer.push_back(count);
            count = 1;
            f = q.front();
            q.pop();
        }
    }
    
    answer.push_back(count);
    
    return answer;
}

