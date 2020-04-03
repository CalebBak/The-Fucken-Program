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
//std::vector<std::string> split(std::string const &input) {
//    std::istringstream buffer(input);
//    std::vector<std::string> ret{std::istream_iterator<std::string>(buffer),
//                                 std::istream_iterator<std::string>()};
//    return ret;
//}

/*
 * Returns true if query exists in array, otherwise false
 */
bool isDeterminer(const std::string query) {
	return std::binary_search(DETERMINERS.begin(), DETERMINERS.end(), query);
}

/*
 * Returns the indices of the determiners in the string.
 */
std::vector<std::size_t> findDeterminerIndices(std::string text) {
	std::vector<std::size_t> indices;

	std::string word = "";
	for (auto i = 0; i < text.length(); i++) {
		char c = text[i];
		if (!isspace(c)) { // Build the word
			word += c;
		} else { // After the word is built, test it
			// Reduce to only letters
			word = word.erase(remove_if(word.begin(), word.end(), [](char c) { return !isalpha(c); } ), word.end());
			if (isDeterminer(word)) {
				indices.push_back(i);
			}
		}

	}
	return indices;
}
