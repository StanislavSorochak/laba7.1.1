﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../laba7.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
	TEST_CLASS(UnitTest711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int rowCount = 2, colCount = 3;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			a[0][1] = 1, a[0][2] = 5, a[0][3] = -4, a[1][1] = -9, a[1][3];
			int S = 49;
			c = Sum(a, 2, 3, S);
			Assert::AreEqual(c, 0);
		}
	};
}
