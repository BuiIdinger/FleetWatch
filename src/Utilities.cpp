#include "Utilities.h"
#include <chrono>

int64_t utilities::time::getCurrent::nanoseconds() {
  const auto epochTime = std::chrono::system_clock::now().time_since_epoch();
  return std::chrono::duration_cast<std::chrono::nanoseconds>(epochTime).count();
}

int64_t utilities::time::getCurrent::milliseconds() {
  const auto epochTime = std::chrono::system_clock::now().time_since_epoch();
  return std::chrono::duration_cast<std::chrono::milliseconds>(epochTime).count();
}

int64_t utilities::time::getCurrent::seconds() {
  const auto epochTime = std::chrono::system_clock::now().time_since_epoch();
  return std::chrono::duration_cast<std::chrono::seconds>(epochTime).count();
}
