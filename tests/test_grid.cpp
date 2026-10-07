#include <gtest/gtest.h>

#include "grid.hpp"

using ci_demo::Neighbors;

TEST(NeighborsTest, InteriorCellHasFour) {
  EXPECT_EQ(Neighbors(3, 3, 1, 1).size(), 4u);
}

TEST(NeighborsTest, CornerCellHasTwo) {
  EXPECT_EQ(Neighbors(3, 3, 0, 0).size(), 2u);
}

TEST(NeighborsTest, BottomEdgeStaysInBounds) {
  const auto n = Neighbors(3, 3, 2, 1);
  EXPECT_EQ(n.size(), 3u);
  for (const auto& [r, c] : n) {
    EXPECT_GE(r, 0);
    EXPECT_LT(r, 3);
    EXPECT_GE(c, 0);
    EXPECT_LT(c, 3);
  }
}
