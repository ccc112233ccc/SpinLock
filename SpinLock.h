#include <atomic>
#include <mutex>

namespace ccutil {

class SpinLock {
 public:
  SpinLock() : flag(ATOMIC_FLAG_INIT) {}

  void lock() {
    while (flag.test_and_set(std::memory_order_acquire)) {
    }
  }

  void unlock() { flag.clear(std::memory_order_release); }

 private:
  std::atomic_flag flag;
};

}  // namespace ccutil