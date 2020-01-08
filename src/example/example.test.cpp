#include <gtest/gtest.h>
#include "example.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

using namespace example;

TEST(Example, saysHello) {
    EXPECT_EQ("hello world", hello("world"));
    EXPECT_EQ("hello stephen", hello("stephen"));
}