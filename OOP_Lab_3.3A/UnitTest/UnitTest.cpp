#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/CBitStringBase.h"
#include "../Program/CBitStringBase.cpp"
#include "../Program/CBitString_PUBLIC.h"
#include "../Program/CBitString_PUBLIC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString_PUBLIC a, b;
			a.SetFirst(4);
			a.SetSecond(4);

			b.SetFirst(8);
			b.SetSecond(8);

			BitString_PUBLIC c = (a ^ b);
			Assert::AreEqual(c.GetFirst(), 12l);
			Assert::AreEqual(c.GetSecond(), 12l);
		}
	};
}
