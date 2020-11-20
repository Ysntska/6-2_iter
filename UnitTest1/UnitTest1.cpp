#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2_iter/6.2_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 10,56,-15,0,6,-21 };
			t = Min(a, n);
			Assert::AreEqual(t, -21);
		}
	};
}
