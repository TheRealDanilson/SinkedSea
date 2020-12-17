#include "channel.hpp"

namespace SinkedSea
{
    void Channel::sendVal(std::any v)
    {
        std::unique_lock<std::mutex> lk(*m);
        cv->wait(lk, [this] { return !val.has_value(); });
        val = v;
        cv->notify_all();
    }

    std::any Channel::recVal()
    {
        std::unique_lock<std::mutex> lk(*m);
        cv->wait(lk, [this] { return val.has_value(); });
        std::any v = val;
        val.reset();
        cv->notify_all();

        return v;
    }
} // namespace SinkedSea