#include <gtest/gtest.h>
#include "solution.hpp"
#include <tuple>

class SolutionTest : public ::testing::TestWithParam<std::tuple<int, int, int>> {
protected:
  Solution1 soln;
};

TEST_P(SolutionTest, TestAdd) {
  int expected = std::get<0>(GetParam());
  int input1 = std::get<1>(GetParam());
  int input2 = std::get<2>(GetParam());
  EXPECT_EQ(expected, soln.add(input1, input2));
}

INSTANTIATE_TEST_SUITE_P(SolutionParameterizedTest,
			 SolutionTest,
			 ::testing::Values(
					   std::make_tuple(1, 0, 1),
					   std::make_tuple(2, 1, 1)));

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
