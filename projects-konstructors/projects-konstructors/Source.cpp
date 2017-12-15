#include "String.h"  
#include <vector>  
#include "iostream"

using namespace std;

int main()
{
	String s1(5);
	String s2(s1);
	s1 = s2;
	s2 = createNewClass(10);
	vector<String> v;
	//v.push_back(String(25));
	//v.push_back(String(75));

	system("pause");
}