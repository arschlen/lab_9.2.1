#include "pch.h"
#include "CppUnitTest.h"#include <cmath> // Для функції pow

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQR(x) ((x) * (x))
#define POW(x, y) (pow(x, y))
#define SQRT(x) (sqrt(x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(ABS(-5), 5);    // Тест на від'ємне значення
			Assert::AreEqual(ABS(5), 5);     // Тест на додатнє значення
			Assert::AreEqual(ABS(0), 0);     // Тест на нуль
		}
	};
}
