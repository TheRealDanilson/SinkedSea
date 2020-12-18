factorial(n) {
    if (n == 0) {
        return 1;
    }
    global n = 20;
    return n * factorial(n - 1);
}
global n = 10;
print("Let's calculate the factorial of 10 and print the result!");
print(factorial(n));