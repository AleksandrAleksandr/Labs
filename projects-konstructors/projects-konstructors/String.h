#pragma once
class String
{
public:
	String(int a);
	String(const String& str);
	String(String&& str);
	String& operator=(const String& rhs);
	String& operator=(String && rhs);
	~String();
private:
	int field;
};

String createNewClass(int a);