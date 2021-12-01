#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3-E/Object.h"
#include "../Lab_3.3-E/Object.cpp"
#include "../Lab_3.3-E/Pair.h"
#include "../Lab_3.3-E/Pair.cpp"
#include "../Lab_3.3-E/Money.h"
#include "../Lab_3.3-E/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Money m1(6, 0), m2(2, 0);

			int D = m1.GetFirst() + m2.GetFirst();
			Assert::AreEqual(D, 8);
		}
	};
}
