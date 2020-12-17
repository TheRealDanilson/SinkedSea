// Send a modified value to the given channel
sendTest(val, ch) {
    val*2 -> ch;
    return 0;
}

vChannel = new chan;
thread(sendTest(80, vChannel)); // Creating a new channel is as easy as giving the thread() function the function call you'd like to run in the new thread
print(read vChannel); // This should block until the second thread sends a value to vChannel