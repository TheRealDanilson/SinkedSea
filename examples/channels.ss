// Send a modified value to the given channel
sendTest(val, ch) {
    print("Second thread: Sent a new value through the channel!");
    val*2 -> ch;
    return 0;
}

vChannel = new chan;
print("We're going to have a thread send us a value using a channel");
thread(sendTest(80, vChannel)); // Creating a new channel is as easy as giving the thread() function the function call you'd like to run in the new thread
print("Main thread: Waiting on value from second thread");
print(read vChannel); // This should block until the second thread sends a value to vChannel