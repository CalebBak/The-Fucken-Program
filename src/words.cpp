#include "words.hpp"

#include <algorithm>
#include <iterator>
#include <sstream>
#include <vector>

bool expletizeString(std::string &string) {

}

/*
 * Splits a string by whitespace.
 * https://stackoverflow.com/a/2275160/8028141
 */
std::vector<std::string> split(std::string const &input) {
    std::istringstream buffer(input);
    std::vector<std::string> ret{std::istream_iterator<std::string>(buffer),
                                 std::istream_iterator<std::string>()};
    return ret;
}

/*
 * Returns true if query exists in array, otherwise false
 */
template <typename T>
bool inArray(const T query, const T array[]) {
	return true;
}

/*
 * Returns the indices of the determiners in the string.
 */
std::vector<std::size_t> findDeterminerIndices(std::string text) {
	std::vector<std::string> words = split(text);
	std::size_t index = text.length();
	std::vector<std::size_t> indices;

	for (auto ptr = words.rbegin(); ptr < words.rend(); ++ptr) {
		std::string word = *ptr;
		index -= word.length();

		// Reduce to only letters
		word = word.erase(remove_if(word.begin(), word.end(), [](char c) { return !isalpha(c); } ), word.end());
		if (inArray(word, DETERMINERS)) {
			indices.push_back(index);
		}
	}
}
