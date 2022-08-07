#include <iostream>
#include <gtest/gtest.h>

class MyClass
{
private:
    int baseValue;
public:
    MyClass(int _bv) : baseValue(_bv){}

    void Increment(int byValue) {
        baseValue += byValue;
    }
    int getValue() {return baseValue;}
};

struct MyClassTest : public testing::Test {
    MyClass *mc;
    void SetUp() { std::cout << "Alive" << std::endl; mc = new MyClass(100); }
    void TearDown() { std::cout << "Dead" << std::endl; delete mc; }
};

TEST_F(MyClassTest, Increment_by_5) {
    // // Arrange
    // MyClass mc(100);
    // Act
    mc->Increment(5);
    // Assert
    ASSERT_EQ(mc->getValue(), 105);
}

TEST_F(MyClassTest, Increment_by_10) {
    // Arrange
    // MyClass mc(100);
    // Act
    mc->Increment(10);

    // Assert
    ASSERT_EQ(mc->getValue(), 110);
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}