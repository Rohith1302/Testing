#include <iostream>
#include <string>
using namespace std;
int main()
{
	//cout<<"Hello world";
	string s="a1b2";
	
	for(int i=0;i<s.length();i++)
	{
		if(isalpha(s[i]))
		{
			cout<<s[i];
		}
		else if(isdigit(s[i]))
		{
			int ch=s[i]-'0';
			for(int i=0;i<ch;i++)
			{
				cout<<s[i-1];
			}
		}
	}
}
