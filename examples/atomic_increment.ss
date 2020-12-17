// Simple implementation of a lock using channels
// While using a lock primitive would be more efficient
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
while (i < 5) {
    n = 0;
    thread(increment());
    thread(increment());
    read doneCh;
    read doneCh;
    print(n); // Should print 20
    n = 0;
    i = i + 1;
}