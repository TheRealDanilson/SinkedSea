#ifndef CHANNEL_H
#define CHANNEL_H
#include <mutex>
#include <condition_variable>
#include <any>

namespace SinkedSea
{

    /* A quick and simple implementation of an unbuffered channel. Used to safely send and receive values between therads.
        Sending a value through a channel only blocks if a value is already stored by the channel. Receiving blocks if the channel is currently empty.*/
    class Channel
    {
    private:
        std::mutex *m;
        std::condition_variable *cv;
        std::any val;

    public:
        Channel()
        {
            m = new std::mutex;
            cv = new std::condition_variable;
        }

        ~Channel()
        {
            delete m;
            m = NULL;
            delete cv;
            cv = NULL;
        }

        void sendVal(std::any v);
        std::any recVal();
    };
} // namespace SinkedSea

#endif