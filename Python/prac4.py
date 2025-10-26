class charClass:
    a = ["Seoul", "Inchon", "Kyonggi", "Daejun", "Daegu", "Pusan"]

myVal = charClass()
str01 = ''
for i in myVal.a:
    str01 = str01 + i[0]
print(str01)

'''
정답: SIKDDP
- 반복문에서 각 도시 이름의 첫 글자(i[0])만 뽑아 str01에 이어붙임.
- 마지막에 print로 한 번에 출력.
- 이때, 따로 구분자(공백 등)를 넣지 않았으므로 모든 문자가 붙어서 출력됨.
'''