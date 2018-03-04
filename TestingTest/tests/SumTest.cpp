#include <Sum.h>
#include "gtest/gtest.h"

class SumTest: public ::testing::Test {
protected: // Puede ser public o protected, no private
	Sum sum1;
	virtual void SetUp() { // Función opcional para inicializar el test
		sum1 = Sum(1, 8);
	}
	virtual void TearDown() {
		// Función opcional de fin de test
	}
};

// Cada test tiene una instancia distinta de sum1
TEST_F(SumTest, addingCorrectly) {
	ASSERT_EQ(sum1.sum(2, 2), 4);
}

TEST_F(SumTest, inRange) {
	EXPECT_ANY_THROW(sum1.sum(-3, 2));
	EXPECT_ANY_THROW(sum1.sum(1, 12));
	EXPECT_NO_THROW(sum1.sum(1, 8));
}
