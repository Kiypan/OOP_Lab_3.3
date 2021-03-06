#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/CObject.h"
#include "../Program/CObject.cpp"
#include "../Program/CBitString.h"
#include "../Program/CBitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(Xorr)
        {
            BitString a, b;
            a.SetFirst(4);
            a.SetSecond(4);

            b.SetFirst(8);
            b.SetSecond(8);

            BitString c = (a ^ b);
            Assert::AreEqual(c.GetFirst(), 12l);
            Assert::AreEqual(c.GetSecond(), 12l);
        }
    };
}
