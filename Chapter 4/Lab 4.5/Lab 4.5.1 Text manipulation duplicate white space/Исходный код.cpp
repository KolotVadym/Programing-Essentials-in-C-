#include<string>
#include<iostream>
int main()
{
	std::string sentence;
	std::getline
		(std::cin, sentence);
	bool isEnd;
	for (int i = 0; i < sentence.length(); i++)
	{
		do
		{
			isEnd = false;
			if (sentence.substr(i, 1) == " " && sentence.substr(i + 1, 1) == " ")
			{
				sentence.erase(i + 1, 1);
				isEnd = true;
			}
		} while (isEnd);
	}
	std::cout << sentence << "\n";
}