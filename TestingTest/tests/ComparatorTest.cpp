#include <Comparator.h>
#include "gtest/gtest.h"

class ComparatorTest: public ::testing::Test {
protected:
	Comparator comparator1;
};

TEST_F(ComparatorTest, equals) {
	ASSERT_TRUE(comparator1.areEqual('a', 'a'));
	ASSERT_FALSE(comparator1.areEqual('a', 'b'));
}

TEST_F(ComparatorTest, different) {
	ASSERT_TRUE(comparator1.areDifferent('r', 'p'));
	ASSERT_FALSE(comparator1.areDifferent('r', 'r'));
}
