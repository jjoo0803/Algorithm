#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int num = 0;
    int n;
    int arr[3];
    int b[100];
    int csize = commands.size();
 
    for(int i = 0; i<csize; i++) {
        int cisize = commands[i].size();
        for (int j = 0; j<cisize; j++) {
            arr[j] = commands[i][j];
        }
        for (int k = arr[0]; k<=arr[1]; k++) {
            b[num] = array[k-1];
            num++;
        }
        n = arr[1] - arr[0] + 1;
        sort(b, b+n);
        int aa = b[arr[2]-1];
        memset(b, 0, sizeof(b));
        num = 0;
        answer.push_back(aa);
    }
    return answer;
}
