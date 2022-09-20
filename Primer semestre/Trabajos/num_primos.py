def primo(n):
    for i in range(2, n):
      if n % i == 0:
        return False
    return True

print(primo(2))