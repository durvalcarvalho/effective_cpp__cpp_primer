#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


bool is_vowel(char c) {
	static const string vowels {"aeiou"};
	return vowels.find(c) != string::npos;
}

int main()
{
	string message {"Exemplo de busca sequencial"}, res;

	// copy_if(message.begin(), message.end(), back_inserter(res), is_vowel);
	copy_if(message.begin(), message.end(), back_inserter(res), 
		[](char c) {
			static const string vowels {"aeiou"};
			return vowels.find(c) != string::npos;
		}
	);

	if(res.empty())
		cout << "Nenhuma vogal encontrada\n";
	else
		cout << res.size() << " vogais encontradas: " << res << endl;

	return 0;
}