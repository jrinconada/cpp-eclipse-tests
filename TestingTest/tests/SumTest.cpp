#include <Sum.h>
#include "gtest/gtest.h"

class SumTest: public ::testing::Test {
protected:
	Sum sum1;
};

TEST_F(SumTest, addingCorrectly) {
	ASSERT_EQ(sum1.sum(2, 2), 4);
}
