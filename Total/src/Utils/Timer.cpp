#include "Timer.hpp"

#include <thread>

Timer::Timer() {
}

void Timer::add(std::chrono::milliseconds delay, std::function<void()> callback, bool asynchronous) {
    if (asynchronous) {
        std::thread([=]() {
            std::this_thread::sleep_for(std::chrono::milliseconds(delay));
            callback();
            }).detach();
    }
    else {
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        callback();
    }
}