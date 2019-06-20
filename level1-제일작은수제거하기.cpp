#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size()==1) {
        answer.push_back(-1);
    } else {
        int tmp = arr[0];
        int idx = 0;
        for(int i=1; i<arr.size(); i++) {
            if(tmp < arr[i]) {
                continue;
            } else {
                idx = i;
                tmp = arr[i];
            }  
        }
        arr.erase(arr.begin()+idx);
        answer = arr;
    }
    
    return answer;
}