#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3-D/Pair.h"
#include "../Lab_3.3-D/Pair.cpp"
#include "../Lab_3.3-D/Money_PB.h"
#include "../Lab_3.3-D/Money_PB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Money_PB m1(6, 0), m2(2, 0);

			int D = m1.GetFirst() + m2.GetFirst();
			Assert::AreEqual(D, 8);
		}
	};
}
