#include "sample_package/sample_lib.hpp"

#include "gtest/gtest.h"

TEST(SampleLibTest, Add)
{
  auto lib = sample_package::SampleLib();
  EXPECT_EQ(lib.add(1, 2), 3);
  EXPECT_EQ(lib.add(-1, -2), -3);
  EXPECT_EQ(lib.add(0, 0), 0);
}

TEST(SampleLibTest, Subtract)
{
  auto lib = sample_package::SampleLib();
  EXPECT_EQ(lib.subtract(2, 1), 1);
  EXPECT_EQ(lib.subtract(-2, -1), -1);
  EXPECT_EQ(lib.subtract(0, 0), 0);
}

TEST(SampleLibTest, Multiply)
{
  auto lib = sample_package::SampleLib();
  EXPECT_EQ(lib.multiply(2, 3), 6);
  EXPECT_EQ(lib.multiply(-2, -3), 6);
  EXPECT_EQ(lib.multiply(0, 5), 0);
}

int main(int argc, char ** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
