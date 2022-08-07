#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class MyClass {
    string id;
public:
    MyClass(string _id) : id(_id) {}
    string GetId() {return id;}
};

TEST(TestName, myclass) {
    // Arrange
    MyClass mc("root");

    // Act
    string value = mc.GetId();

    // Assert
    EXPECT_STREQ(value.c_str(), "root");
}

TEST(TestName, increment_by_10) {
    // Arrange
    int value = 100;
    int increment = 10;

    // Act
    value = value + increment;

    // Assert
    ASSERT_EQ(value, 110);
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}