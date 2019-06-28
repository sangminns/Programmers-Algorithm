#include <string>
#include <vector>

using namespace std;

int cnt;

// dfs 풀이 참고함
void dfs(vector<int> &numbers, int target, int sum, int depth) {
    if(depth == numbers.size()) {
        if(sum == target)
            cnt++;
        return;
    }
    dfs(numbers, target, sum+numbers[depth], depth+1);
    dfs(numbers, target, sum-numbers[depth], depth+1);
}
 
int solution(vector<int> numbers, int target) {
    dfs(numbers, target, numbers[0] , 1);
    dfs(numbers, target, numbers[0]*-1, 1);
    
    return cnt;
}
