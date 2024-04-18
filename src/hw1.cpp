#include "hw1.h"
#include <vector>

namespace algebra {

    Matrix zeros(size_t n, size_t m) {
        auto res = Matrix{n, std::vector<double>(m, 0)};
        return res;
    }
} // end algebra
