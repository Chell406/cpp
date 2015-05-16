#include <iostream>

using namespace std;

class String
{
	char* str;

	int length;

public:

	const void printLength()
	{
		cout << length << endl;
	}

	const void printString()
	{
		cout << str << endl;
	}

	const String& operator+= (const String &s)
	{
		if (this != &s)
		{
			char* _str = new char[length + s.length + 1];

			strcpy(_str, str);
			strcpy(_str + length, s.str);

			delete[] str;

			str = _str;
			length += s.length;
		}
		return *this;
	}

	const String& operator= (const String &s)
	{
		if (this != &s)
		{
			delete[] str;
			length = s.length;
			str = new char[s.length + 1];
			strcpy(str, s.str);
		}
		return *this;
	}

	String(const String &s)
	{
		str = new char[s.length + 1];
		strcpy(str, s.str);
	}

	String(char* s)
	{
		length = strlen(s);
		str = new char[length + 1];
		strcpy(str, s);
	}

	String(int len)
	{
		str = new char[len];
		length = len;
	}

	String()
	{
		str = new char[80];
		length = 80;
	}

	~String()
	{
		delete[] str;
	}

};

int main()
{
	String s("");
	String t("Test");
	s = t;

	s.printString();
	s += "GHSFH";
	s.printString();
	s.printLength();

	return 0;
}