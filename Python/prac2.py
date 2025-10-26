arr_str = input('input String :').split('-')
arr_len = int(input('input number : '))
arr_val = list(range(0,arr_len,2))
arr_val.remove(4)
print(arr_str[1].find('i') + arr_val[2])
'''
입력 :
input string : information-technology
input number : 12 

정답 : 5
- split('-') → ['information', 'technology']
- range(0, 12, 2) → [0, 2, 4, 6, 8, 10]
- remove(4) → [0, 2, 6, 8, 10]
- find('i') → -1
- arr_val[2] → 6
- 합계: -1 + 6 = 5
'''