#pragma once

#include <coroutine>

class OddAwaiter
{
private:
    int value;

public:
    explicit OddAwaiter(int value) : value(value) {}

    bool await_ready() const noexcept { return value % 2 == 0; }
    void await_suspend(std::coroutine_handle<>) const noexcept {}
    void await_resume() const noexcept {}
};
