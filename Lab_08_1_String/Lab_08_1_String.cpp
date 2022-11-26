#include <iostream>
#include <string>

using namespace std;

string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('G', pos)) != -1)
		if ((s[pos - 1] && s[pos + 1] == 'O') || (s[pos - 1] && s[pos + 1] == 'A'))
			s.replace(pos - 1, 3, "**");
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}