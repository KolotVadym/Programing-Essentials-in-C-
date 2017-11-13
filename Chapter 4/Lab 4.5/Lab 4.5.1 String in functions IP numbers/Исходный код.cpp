#include <iostream>
#include <string> 

using namespace std;

bool charInPart(string ip)
{
	int count = 0;
	for (int i = 0; i < ip.length(); i++)
	{
		count++;
		if (ip[i] == '.')
			count = 0;
		if (count > 3)
			return true;
	}		
	return false;
}
int counter(char chr, string ip)
{
	int count = 0;
	for (int i = 0; i < ip.length(); i++)
	{
		if (ip[i] == chr)
			count++;
	}
	return count;
}
bool validate(string ip)
{
	bool flag = false;
	char arr[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '.' };
	for (int i = 0; i < ip.length(); i++)
	{
		for (int j = 0; j < (sizeof(arr)/sizeof(arr[0]));j++)
		{
			if (ip[i] != arr[j])
				flag =flag|| false;
			else
				flag = flag || true;
		}
		if (!flag)
			return false;
	}
	return true;
}
bool valOfPart(string ip)
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < ip.length(); i++)
	{
		if (ip[i] == '.'||(i==ip.length()-1))
		{
			if (std::stoi(ip.substr(count2, count1)) > 255)
				return false;
			count2 = count1 + 1;
			count1 = 0;
		}
		else
		count1++;
	}
	return true;
}
string IsCorrect(string ip)
{
	if (charInPart(ip))
		return "Too many characters in a part";
	if (counter('.', ip) > 3)
		return "Too many parts";
	if (!validate(ip))
		return "Only digits and dots allowed";
	if (!valOfPart(ip))
		return "Too big a value of a part";
	return "Correct IP";
}

int main(void) {
	string ip;
	getline(cin, ip);
	cout<<IsCorrect(ip)<<endl;
	return 0;
}