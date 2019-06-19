def solution(arr):
    answer = 0
    for i in arr:
        answer = answer + int(i)
    answer = answer/len(arr)
    return answer