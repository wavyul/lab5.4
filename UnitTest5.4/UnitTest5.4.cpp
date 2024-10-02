#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.4/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            double c;
            c = P0(7);
            Assert::AreEqual(c, 0.0026, 0.01);
        }

        TEST_METHOD(TestMethod2)
        {
            double q;
            q = P1(7, 7);
            Assert::AreEqual(q, 0.0026, 0.01);
        }

        TEST_METHOD(TestMethod3)
        {
            double w;
            w = P2(7, 16);
            Assert::AreEqual(w, 0.0026, 0.01);
        }

        TEST_METHOD(TestMethod4)
        {
            double e;
            e = P3(7, 7, 7);
            Assert::AreEqual(e, 0.0026, 0.001);
        }

        TEST_METHOD(TestMethod5)
        {
            double r;
            r = P4(7, 16, 7);
            Assert::AreEqual(r, 0.0026, 0.001);
        }
    };
}
