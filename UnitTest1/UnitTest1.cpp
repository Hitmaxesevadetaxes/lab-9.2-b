#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\Lab 9.2 b\Lab 9.2 b\source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char dataChar[] = { 'a', 'b', 'c', 'd', 'e' };
			int dataCharSize = sizeof(dataChar) / sizeof(dataChar[0]);

			// Test finding a character that exists
			int position = findCharacterByCode(dataChar, dataCharSize, 'c');
			Assert::AreEqual(2, position);
		};
	};
}
