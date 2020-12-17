factorial(n) {
    if (n == 0) {
        return 1;
    }
    global n = 20;
    print(n);
    return n * factorial(n - 1);
}
global n = 10;
print(factorial(n));