#pragma once

#include <cstdlib>

namespace utilities {
  namespace time {
    namespace getCurrent {
      int64_t seconds();
      int64_t milliseconds();
      int64_t nanoseconds();
    }
  }
}