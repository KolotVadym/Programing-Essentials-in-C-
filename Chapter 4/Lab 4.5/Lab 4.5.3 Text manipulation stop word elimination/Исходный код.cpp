#include <string>
#include <iostream>

using namespace std;

int main()
{
	string stop_words;
	getline(cin, stop_words);
	string sentence;
	getline(cin, sentence);

	bool wordNotEnded = true;
	int commaPrev = -1, comma = 0;
	int wordInSentence = 0; 
	string stopSymbols = "";
	string stopWord = "";

	while (wordNotEnded)
	{
		comma = stop_words.find(',', comma + 1);
		if (comma == string::npos) {  
			
			stopSymbols = stop_words.substr(commaPrev + 1, stop_words.length() - commaPrev);
			wordNotEnded = false;
		}
		
		else stopSymbols = stop_words.substr(commaPrev + 1, comma - commaPrev - 1);
		stopWord = stopSymbols + " ";

		wordInSentence = sentence.find(stopWord);
		if (wordInSentence != string::npos)
			sentence.erase(wordInSentence, stopWord.length());
		else {
			stopWord[0] = stopWord[0] - 'a' + 'A';
			wordInSentence = sentence.find(stopWord);
			if (wordInSentence != string::npos)
				sentence.erase(wordInSentence, stopWord.length());
			else {
				stopWord = " " + stopSymbols;
				wordInSentence = sentence.find(stopWord);
				if (wordInSentence != string::npos)
					sentence.erase(wordInSentence, stopWord.length());
				else {
					stopWord[0] = stopWord[0] - 'a' + 'A';
					wordInSentence = sentence.find(stopWord);
					if (wordInSentence != string::npos)
						sentence.erase(wordInSentence, stopWord.length());
				}
			}
		}
		commaPrev = comma;
	}


	cout << sentence << "\n";

	system("pause");
	return 0;
}