import time

def normal_sleep():
    print('before sleep')
    time.sleep(1)
    print('after sleep')

def normal_sleeps(n):
    for _ in range(n):
        normal_sleep()

# Normal execution
start = time.time()
normal_sleeps(2)
print(f'duration: {time.time() - start:.0f}')