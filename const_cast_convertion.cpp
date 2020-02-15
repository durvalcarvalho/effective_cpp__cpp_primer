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
	// mutable type specifier means that this attribute can be modified on const methods

public:
	size_t length() const;

	TextBlock(char* t) : pText(t) {}

	const char& operator[](size_t position) const {
		return text[position];
	}
	
	// this method is converting the this object to const to use this version of the const method
	// this approach is useful for not repeating the code.
	char& operator[](size_t position) {
		return const_cast<char&>(static_cast<const TextBlock&>(*this)[position]);
		//							^ converting this to const this
		//                 ^ converting const char& to char&
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