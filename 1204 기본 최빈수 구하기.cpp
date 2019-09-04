#include <iostream>
using namespace std;
 
int main() {
 
    int arr[100];
    int testcase;
    int testnumber;
    int frequency = 0;
    int fre_num = 0;
    int same = 0;
    int max = 0;
    
    for(int i=1; i<=10; i++) {
        
        frequency = 0;
        fre_num = 0;
        same = 0;
        max = 0;
        
        cin >> testcase;
        
        for (int i=0; i<101; i++) {
            arr[i] = 0;
        }
        
        for (int i=0; i<1000; i++) {
            cin >> testnumber;
            arr[testnumber]++;
            
        }
        
        
        for (int i=0; i<101; i++) {
            if (arr[i] > frequency) {
                frequency = arr[i];
                fre_num = i;
            }
            if (arr[i] == frequency) {
                if (same < i) {
                    max = arr[i];
                    same = i;
                }
 
            }
            
        }
        
        if(max == frequency) {
            cout<< "#" << testcase << " " <<same<<endl;
        }
        else {
            cout<< "#" << testcase << " " <<fre_num<<endl;
        }
 
    }
    
    return 0;
}
