#include <iostream>
#include <string.h>

class Mystring {
private:
	char* string_content;
	int string_length;
	int memory_capacity;
public:
	Mystring(char c);

	Mystring(const char* str);

	Mystring(const Mystring& str);

	~Mystring();

	int length() const; 
	int capacity() const;
	char at(int i) const;
	void reseve(int size);

	void print() const;
	void println() const;

	Mystring& assign(const Mystring& str);
	Mystring& assign(const char* str);
	Mystring& insert(int loc, const Mystring& str);
	Mystring& insert(int loc, const char* str);
	Mystring& insert(int loc, char c);
};

Mystring::Mystring(char c)
{
	string_content = new char[1];
	string_content[0] = c;
	memory_capacity = 1;
	string_length = 1;
}

Mystring::Mystring(const char* str)
{
	string_length = strlen(str);
	memory_capacity = string_length;
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++)
	{
		string_content[i] = str[i];
	}
}

Mystring::Mystring(const Mystring& str)
{
	string_length = str.string_length;
	memory_capacity = str.string_length;
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++)
	{
		string_content[i] = str.string_content[i];
	}
}

Mystring::~Mystring()
{
	delete[] string_content;
}

int Mystring::length() const {
	return string_length;
}

void Mystring::print() const {
	for (int i = 0; i != string_length; i++)
	{
		std::cout << string_content[i];
	}
}
void Mystring::println() const{
	for (int i = 0; i != string_length; i++)
	{
		std::cout << string_content[i];
	}
	std::cout << std::endl;
}

Mystring& Mystring::assign(const Mystring& str)
{
	if (str.string_length > memory_capacity)
	{
		delete[] string_content;

		string_content = new char[str.string_length];
		memory_capacity = str.string_length;
	}
	for (int i = 0; i != string_length; i++)
	{
		string_content[i] = str.string_content[i];
	}

	string_length = str.string_length;
	
	return *this;
}

Mystring& Mystring::assign(const char* str)
{
	int str_length = strlen(str);
	if (str_length > memory_capacity)
	{
		delete[] string_content;

		string_content = new char[string_length];
		memory_capacity = string_length;
	}
	for (int i = 0; i != string_length; i++)
	{
		string_content[i] = str[i];
	}
	string_length = str_length;

	return *this;
}

int Mystring::capacity()const
{
	return memory_capacity;
}

void Mystring::reseve(int size)
{
	if (size > memory_capacity)
	{
		char* prev_string_content = string_content;

		string_content = new char[size];
		memory_capacity = size;


		for (int i = 0; i != string_length; i++)
		{
			string_content[i] = prev_string_content[i];
		}
		delete[] prev_string_content;
	}
}

char Mystring::at(int i) const
{
	if (i >= string_length || i < 0)
		return NULL;
	else
		return string_content[i];
}

Mystring& Mystring::insert(int loc, const char* str)
{
	Mystring temp(str);
	return insert(loc, temp);
}

Mystring& Mystring::insert(int loc, char c)
{
	Mystring temp(c);
	return insert(loc, temp);
}

int main()
{
	Mystring str1("very very very long string");
	str1.reseve(30);

	std::cout << "Capacity:" << str1.capacity() << std::endl;
	std::cout << "string length" << str1.length() << std::endl;

	str1.println();
}