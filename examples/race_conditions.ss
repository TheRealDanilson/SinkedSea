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
while (i < 5) {
    n = 0;
    thread(increment());
    thread(increment());
    read ch;
    read ch;
    print(n);
    i = i + 1;
}