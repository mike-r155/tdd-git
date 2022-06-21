d s#include "gtest/gtest.h"
extern "C" {
	#include "sample.h"
}

extern int sample_init;

namespace {
class CountHistoryTest : public ::testing::Test {
 protected:
 
virtual void SetUp()
{
	init();
}
};

TEST_F(CountHistoryTest, times3)
{
	ASSERT_EQ(sample_init, 1);
	update();
	ASSERT_EQ(sample_init, 2);
	update();
	ASSERT_EQ(sample_init, 3);
	update();
	ASSERT_EQ(sample_init, 4);
}
}