global n = 0;
global ch = new chan;
// Increment global variable n ten times
increment() {
    i = 0;
    while (i < 10) {
        n = n + 1;
        i = i + 1;
    }
    1 -> ch; // Tell our main thread that we're done
    return 0;
}
i = 0;
// Call increment in multiple threads and verify that we can get different results each time due to race conditions
print("Let's increment a variable using multiple threads and see if we get inconsistent results");
while (i < 5) {
    print("Reset our variable to 0 and begin incrementing");
    n = 0;
    thread(increment());
    thread(increment());
    read ch;
    read ch;
    print("We're done incrementing: if there weren't any race conditions we should print 20 but we'll probably get something else");
    print(n);
    print("");
    i = i + 1;
}
print("We're done! You'll probably see that we didn't print the same number each time because of race conditions");