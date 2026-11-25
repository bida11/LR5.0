#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\sasab\source\repos\LR5.0\LR5.0\Function.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
    TEST_CLASS(UnitTest5)
    {
    public:

        TEST_METHOD(TestCalculate)
        {
            double result = calculate(0, 0);

            Assert::AreEqual(1.0, result, 0.000001);
        }

        TEST_METHOD(TestFunction1)
        {
            double result = kFunction(1, 0);

            Assert::AreEqual(1.0, result, 0.000001);
        }

        TEST_METHOD(TestFunction2)
        {
            double result = kFunction(0, 2);

            Assert::AreEqual(2.0, result, 0.000001);
        }
    };
}