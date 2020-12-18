// Simple implementation of a lock using channels
global mutexCh = new chan;
lock() {
    read mutexCh; // "Grab" the lock
    return 0;
}

unlock() {
    1 -> mutexCh; // "Return" the lock
    return 0;
}

// Our channel "mutex" initially starts off locked
unlock();

global n = 0;
global doneCh = new chan;
// Increment global variable n ten times
increment() {
    i = 0;
    while (i < 10) {
        lock();
        n = n + 1;
        unlock();
        i = i + 1;
    }
    1 -> doneCh; // Notify our main thread that we're done
    return 0;
}

i = 0;
// Test our increment function with multiple threads and verify that n has the correct value each time
print("Let's increment a variable using multiple threads and see if we get consistent results");
while (i < 5) {
    print("Reset our variable to 0 and begin incrementing");
    n = 0;
    thread(increment());
    thread(increment());
    read doneCh;
    read doneCh;
    print("We're done incrementing: we should print 20 right after this");
    print(n); // Should print 20
    print("");
    n = 0;
    i = i + 1;
}
print("We're done! You should see that we printed the number 20 five times.");