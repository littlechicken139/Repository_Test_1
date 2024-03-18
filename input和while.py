# input("给用户的提示：")
# 练习：用户输入一个数，判断是否是10的倍数

x = int(input("请输入数字: "))
if x % 10 == 0:
    print("{0}是10的倍数".format(str(x)))
else:
    print("{0}不是10的倍数".format(str(x)))


# while循环
list = ["11", "22", "33", "44"]
# 用三种方法遍历列表
for char in list:
    print(char)

for i in range(0,len(list)):
    print(list[i])

i = 0
while i < len(list):
    print(list[i])
    i = i + 1

# 练习
user_input = input("请输入你想打印的: ")
while user_input != "quit":
    print("给你打印:" + user_input)
    # 还要再放一遍输入，否则无限循环
    user_input = input("请输入你想打印的: ")