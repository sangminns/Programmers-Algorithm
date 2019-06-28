#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    for(int i=0; i<nums.size()-2; i++) {
        for(int j=i+1; j<nums.size()-1; j++) {
            for(int k=j+1; k<nums.size(); k++) {
                int sum = 0;
                bool flag = true;
                sum += nums[i]+nums[j]+nums[k];
                for(int n=2; n<sum; n++) {
                    if(sum%n==0) {
                        flag = true;
                        break;
                    } else {
                        flag = false;
                    }
                }
                if(!flag) {
                    cout << sum << endl;
                    answer++;
                }
            }
        }
    }

    return answer;
}