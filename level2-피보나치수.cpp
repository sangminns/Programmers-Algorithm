#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if (n == 1) {
		answer = n;
	} else {
		// low performance
		// answer = fibonacci(num - 1) + fibonacci(num - 2);
		long front = 0;
		long mid = 0;
		long back = 1;
		for (int i = 0; i < n; i++) {
			front = back;
			back = mid;
			mid = (front + back)%1234567;
		}
		answer = mid%1234567;
	}
    return answer;
}