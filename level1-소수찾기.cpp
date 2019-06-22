#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // 에라토스테네스의 체 : 배수를 지워나가는 방식
    vector<bool> eratos(n+1);

    for(int i=2;i<=n;i++)
    {
        if(!eratos[i]){ //값이 false면 answer에 더하고
            answer ++;
        }
        
        for(int j=i; j<=n; j+=i){ //그 값에 배수를 모두 true로 바꿔준다.
            eratos[j] = true;
        }
    }
   
    return answer;
}

