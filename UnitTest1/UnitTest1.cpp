#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1/Source.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char a[] = { "qwe,q-qwe,q-" };
			int t = Perevirka(a);
			Assert::AreEqual(t, 2);

		}
	};
}
