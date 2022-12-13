#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1_String/Lab_08_1_String.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

string TestChange(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('G', pos)) != -1)
		if ((s[pos - 1] && s[pos + 1] == 'O') || (s[pos - 1] && s[pos + 1] == 'A'))
			s.replace(pos - 1, 3, "**");
	return s;
}

namespace UnitTestLab081String
{
	TEST_CLASS(UnitTestLab081String)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "TESTOGOTESTAGA";
			string teststr = "TESTOGOTESTAGA";
			string dest = Change(str);
			string testdest = TestChange(teststr);
			Assert::AreEqual(dest.compare(testdest), 0);
		}
	};
}
