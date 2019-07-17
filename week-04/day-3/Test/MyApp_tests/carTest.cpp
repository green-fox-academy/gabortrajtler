#include <Car.h>
#include <gtest/gtest.h>

class CarTest : public ::testing::Test {
protected:
    //executed before every test
    void SetUp() override {
        _car.refill();
    }
    void TearDown() override {}

    Car _car;
};

TEST_F(CarTest, DriveOnce) {
_car.drive();
EXPECT_EQ(_car.getGas(), 95);
}

TEST_F(CarTest, DriveThreeTimes) {
_car.drive();
_car.drive();
_car.drive();
EXPECT_EQ(_car.getGas(), 85);
}