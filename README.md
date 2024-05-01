# SpinLock

## Description

一个自旋锁，支持自旋等待锁释放。锁的实现基于std::atomic_flag，使用了C++11的特性。

## Usage

```cpp
#include "SpinLock.h"

int main() {
    ccutil::SpinLock lock;
    lock.lock();
    lock.unlock();
    return 0;
}
```