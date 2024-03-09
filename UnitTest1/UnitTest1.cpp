#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 2.2/Integer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            Integer x(5);
            Integer a(5);
            Assert::AreEqual(x.getValue(), a.getValue());
        }
    };
}