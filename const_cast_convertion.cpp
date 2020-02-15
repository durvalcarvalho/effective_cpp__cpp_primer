#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

class TextBlock {
private:
	
	string text;
	mutable size_t textLength;
	mutable bool lengthIsValid;
public:
	size_t length() const;

	TextBlock(char* t) : pText(t) {}

	const char& operator[](size_t position) const {
		return text[position];
	}
	
	char& operator[](size_t position) {
		return const_cast<char&>(static_cast<const TextBlock&>(*this)[position]);
	}
};

size_t TextBlock::length() const {

	if(!lengthIsValid) {
		textLength = strlen(pText);
		lengthIsValid = true;
	}
	return textLength;
}

int main() {

	return 0;
}