#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test54
{
	TEST_CLASS(test54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t0;
			t0 = func0(5, 15);
			Assert::AreEqual(t0, 1.029, 0.00001);
		}
	};
}
