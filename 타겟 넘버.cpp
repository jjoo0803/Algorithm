#include <string>
#include <vector>
#include <iostream>
 
using namespace std;
 
int sum = 0;
int answer = 0;
int targetNum = 0;
 
void DFS(vector<int> numbers, int index, int sum) {
    if (index == numbers.size()) {
        if (sum == targetNum) {
            answer++;
            return;
        }
    } else {
        DFS(numbers, index+1, sum + numbers[index]);
        DFS(numbers, index+1, sum - numbers[index]);
    }
}
 
int solution(vector<int> numbers, int target) {
    targetNum = target;
    DFS(numbers, 0, 0);
    return answer;
}

