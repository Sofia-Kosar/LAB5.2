#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.2/lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = A(0.5, 1, 12.0);
			Assert::AreEqual(z, 1.0);
		}
	};
}
