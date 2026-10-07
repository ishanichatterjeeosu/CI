#pragma once

#include <utility>
#include <vector>

namespace ci_demo {

// 4-connected, in-bounds neighbours of (r, c) on a rows x cols grid.
std::vector<std::pair<int, int>> Neighbors(int rows, int cols, int r, int c);

}  // namespace ci_demo
