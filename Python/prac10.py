a = "REMEMBER NOVEMBER"
b = a[0:3] + a[12:16]
c = "R AND %s" % "STR"
print(b + c)

'''
정답: REMEMBER AND STR
b = REMEMBE
c = R AND STR
REMEMBER AND STR

- + 문자열 연결: 중간에 공백 없이 바로 이어 붙임
'''