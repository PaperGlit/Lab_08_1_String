#include <iostream>
#include <string>

using namespace std;

string Change(string& s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('G', pos + 1)) != -1)
		if ((s[pos - 1] == 'O' && s[pos + 1] == 'O') || (s[pos - 1] == 'A' && s[pos + 1] == 'A'))
		{
			k++;
			s.replace(pos - 1, 3, "**");
		}
	if (k > 0)
		cout << "Yes, Count : " << k << endl;
	else
		cout << "No" << endl;
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