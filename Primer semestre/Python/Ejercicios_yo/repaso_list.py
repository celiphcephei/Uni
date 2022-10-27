from stat import FILE_ATTRIBUTE_NO_SCRUB_DATA


def fibonacci(n):
    my_list = []
    my_list2 = []
    num1 = 0
    num2 = 1
    count = 1
    for i in range(n + 1):
        my_list.append(num1)
        num1 += num2
        my_list.append(num2)
        num2 += num1
    print(my_list)
    for x in my_list:
        my_list2.append(x)
        if count == n:
            print(my_list2)
        count += 1

fibonacci(2)