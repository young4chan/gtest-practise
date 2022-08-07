#include <iostream>
#include <gtest/gtest.h>

class MyClass
{
private:
    int baseValue;
public:
    MyClass(int _bv) : baseValue(_bv){}
    ~MyClass();
    void Increment(int byValue) {
        baseValue += byValue;
    }
    int getValue() {return baseValue;}
};




int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}