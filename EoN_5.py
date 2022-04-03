#수 찾기
#입력 -> 배열 자르기 -> 오름차순 정렬 -> k번째 숫자 출력


	#array 입출력
array = list(map(int,input().split(',')))
print(array)
	#commands 입출력 i, j, k
commands = list(map(int,input().split(',')))
print(commands)


	#사용자 정의 함수 : solution 함수
def solution(array, commands) :
	answer = []
	for (i, j, k) in commands : #커멘드 순차 입력
		arr = array[i-1:j] #i번째에서 j번째까지 자르기; i번째수는 array[i-1]
		arr.sort() #오름차순 정렬
		answer.append(arr[k-1]) #k번째 숫자 찾기
		
	return answer
	
	#출력
print(solution(array, commands))
