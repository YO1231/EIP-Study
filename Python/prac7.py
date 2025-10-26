a = [[1,1,0,1,0],
     [1,0,1,0]]
tot,totsu = 0, 0
for i in a:
    for j in i:
        tot += j
    totsu = totsu + len(i)
print(totsu, tot)

'''
정답: 9 5

- totsu는 두 리스트 길이의 합을 누적 : 5 + 4 = 9
- tot은 각 리스트의 모든 요소를 더하는데,
첫 리스트 합: 1+1+0+1+0 = 3
두번째 리스트 합: 1+0+1+0 = 2
합계: 3 + 2 = 5
'''