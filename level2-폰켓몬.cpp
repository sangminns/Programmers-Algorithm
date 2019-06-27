#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
	int answer = 1;
    sort(nums.begin(), nums.end());
    for(int i=1; i<nums.size(); i++) {
        if(nums[i-1] != nums[i] && answer<nums.size()/2) {
            answer++;
        }
    }
    
	return answer;
}