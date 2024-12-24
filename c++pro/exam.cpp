#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


class string {
	char* str;
	int len;

public:
	string(char c, int n);  // ���� c �� n �� �ִ� ���ڿ��� ����
	string(const char* s);
	string(const string& s);
	~string();

	void add_string(const string& s);   // str �ڿ� s �� ���δ�.
	void copy_string(const string& s);  // str �� s �� �����Ѵ�.
	int strlen();   // ���ڿ� ���� ����
	void show();
};

string::string(char c, int n)
{
	int i = 0;
	str = new char[sizeof(c) * n + 1];
	while (i<n)
	{
		str[i] = c;
		i++;
	};
	str[n] = '\0';
	len = n;
}
string::string(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
}
string::string(const string& s)
{
	len = std::strlen(s.str);

	str = new char[len + 1];
	std::strcpy(str, s.str);
}
string::~string()
{
	if (str)
		delete[] str;
}

void string::add_string(const string& s)
{
	str = std::strcat(str, s.str);

}

void string::copy_string(const string& s)
{
	str = std::strcpy(str, s.str);
}
void string::show() {
	std::cout << str << std::endl;
}

int main() {
	string s1('a', 3);
	string s2("Hello");
	string s3 = s1;
	string s4 ('b', 4);

	s1.show();
	s2.show();
	s3.show();
	s4.show();

	s1.add_string(s2); //������ ������. s1�� str�� s2�� str�� ���ڸ� ������.
	s1.show();

	s1.copy_string(s4);	//s1�� s4�� str�� ī���Ѵ�.
	s1.show();

}