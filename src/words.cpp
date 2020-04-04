#include "words.hpp"

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iterator>
#include <sstream>
#include <vector>
#include <iostream>

/*
 * Returns true if query exists in array, otherwise false
 */
bool isDeterminer(const std::string query, bool chained) {
	return (std::binary_search(DETERMINERS.begin(), DETERMINERS.end(), query) || (chained && std::binary_search(AFTERS.begin(), AFTERS.end(), query)));
}

/*
 * Returns the indices of the determiners in the string.
 */
std::vector<std::size_t> findDeterminerIndices(std::string const text) {
	std::vector<std::size_t> indices;
	bool lastWordWasDeterminer = false;

	std::string word = "";
	for (std::size_t i = 0; i < text.length(); i++) {
		char c = text[i];
		if (!isspace(c) || c == '\0') { // Build the word
			word += c;
		} else { // After the word is built, test it

			// Reduce to only letters, excluding contractions
			word.erase(remove_if(word.begin(), word.end(), [](char c) { return !isalpha(c) && c != '\''; } ), word.end());
			std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return std::tolower(c); });

			// DEBUG
//			std::cout << word << ' ' << lastWordWasDeterminer << '\t';
//			std::cout << isDeterminer(word, lastWordWasDeterminer) << ' ';
//			std::cout << std::binary_search(AFTERS.begin(), AFTERS.end(), word) << std::endl;

			if (isDeterminer(word, lastWordWasDeterminer)) {
				if (lastWordWasDeterminer) {
					indices.pop_back(); // Remove the last determiner because it is directly behind this one
				}
				indices.push_back(i);
				lastWordWasDeterminer = true;
			} else {
				lastWordWasDeterminer = false;
			}

			word = "";
		}

	}
	return indices;
}

bool expletizeString(std::string &string) {
	std::vector<std::size_t> determinerIndices = findDeterminerIndices(string);
	std::size_t offset = 0;

	if (determinerIndices.empty()) {
		return false; // No change
	}

	std::srand(std::time(NULL));

	for (std::size_t index : determinerIndices) {
		// Choose one of three possiblities randomly
		std::stringstream ss;
		float r = rand() % 8;
		if (r < 5) {
			// Insert a basic explicative
			ss << " " << BASIC_EXPLICATIVES[rand() % BASIC_EXPLICATIVES.size()];
		} else if (r < 6) {
			// Insert a random combination of a level and an ending
			ss << " " << LEVELS[rand() % LEVELS.size()] << " " << ENDINGS[rand() % ENDINGS.size()];
		} else {
			// Insert a modified explicitive
			if (rand() % 2 == 0) {
				ss << " " << MODIFIED[rand() % MODIFIED.size()] << "-ass";
			} else {
				ss << " " << MODIFIED[rand() % MODIFIED.size()] << " as fuck";
			}
		}
		string = string.insert(index + offset, ss.str());
		offset += ss.str().length();  // Increase the offset by the amount inserted
	}

	return true;
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
