#include <iostream>
#include <string> 

using namespace std;

int NumOfLetters(int i, string sent, string lett[])
{
	int count=0;
	for (int j = 0; j < sent.length(); j++)
	{	
		if (sent.substr(j, 1) == lett[i])
			count++;
	}
	return count;
}

int main(void) {
	string sentence;
	string letters[] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l",
		"m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	getline(cin, sentence);

	for (int i = 0; i < 26; i++)
	{
		cout << letters[i] << "=" << NumOfLetters(i, sentence, letters) << endl;
	}
	return 0;
}