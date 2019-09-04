#include <string>
#include <vector>
#include <map>
 
using namespace std;
 
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string,int> m;
    int psize = participant.size();
    for(int i=0; i<psize; i++) {
        m[participant[i]]++;
    }
    
    int csize = completion.size();
    for(int i=0; i<csize; i++) {
        m[completion[i]]--;
    }
    
    map<string,int>::iterator iter;
    
    for(iter = m.begin(); iter != m.end(); iter++) {
        int n = iter->second;
        if (n == 1) {
            answer = iter->first;
        }
    }
    return answer;
}

