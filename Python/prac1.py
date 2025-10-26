x = input() # 입력 : Python programming
x = x.capitalize()
y = x.split()
print(y[0][::2], end = '*')
print(y[1][3:6])

'''
정답 Pto*gra

capitalize() - 첫 글자만 대문자, 나머지는 소문자
x = x.capitalize()  # "Python programming"

split() - 공백 기준으로 나눔, y에 배열 형태로 저장
y = x.split()  # ["Python", "programming"]

# y[0] = "Python"
# y[0][::2] - 0번부터 2칸씩 건너뛰기
# P(0) t(2) o(4) → "Pto" 
print(y[0][::2], end = '*')  # "Pto*"

# y[1] = "programming"
# y[1][3:6] - 인덱스 3~5
# g(3) r(4) a(5) → "gra"
print(y[1][3:6])  # "gra"

'''
