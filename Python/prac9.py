lol = [[1,2,3],[4,5],[6,7,8,9]]
print(lol[0])
print(lol[2][1])
for sub in lol :
    for item in sub :
        print(item, end  = " ")
    print()

'''
정답:
[1, 2, 3]
7
1 2 3 
4 5 
6 7 8 9 

- 리스트 변수 print → 대괄호 포함 전체 출력
- for문으로 요소 print → 값만 순서대로 출력
'''