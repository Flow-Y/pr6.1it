#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.1.1/pr6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest61)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int x[10] = { 1, 2, 3, 4, 5 , 6 ,7 ,8 , 9 , 10 };
			int res = Init(x, 10);
			Assert::AreEqual(res, res);
		}
	};
}