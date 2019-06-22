#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    int stu[n];
    for(int i=0; i<n; i++) {
        stu[i] = 1;
    }
    
    for(int i=0; i<lost.size(); i++) {
        stu[lost[i]-1] -= 1;
    }
    
    for(int i=0; i<reserve.size(); i++) {
        stu[reserve[i]-1] += 1; 
    }
    
    for(int i=1; i<n-1; i++) {
        if(stu[i-1]==0 && stu[i]==2) {
            stu[i-1] += 1;
            stu[i] -= 1;
        } else if(stu[i]==0 && stu[i-1]==2) {
            stu[i] += 1;
            stu[i-1] -= 1;
        } else if(stu[i]==0 && stu[i+1]==2) {
            stu[i] += 1;
            stu[i+1] -= 1;
        }
    }
    
    for(int i=0; i<n; i++) {
        if(stu[i]>0)
            answer++;
    }
    
    return answer;
}