#include "grid.hpp"

namespace ci_demo {
namespace {
constexpr int kDirs[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
}  // namespace

std::vector<std::pair<int, int>> Neighbors(int rows, int cols, int r, int c) {
  std::vector<std::pair<int, int>> out;
  for (const auto& d : kDirs) {
    const int nr = r + d[0];
    const int nc = c + d[1];
    if (nr < 0 || nr >= rows || nc < 0 || nc >= cols) continue;
    out.emplace_back(nr, nc);
  }
  return out;
}

}  // namespace ci_demo
