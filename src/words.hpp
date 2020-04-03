#ifndef WORDS_HPP_
#define WORDS_HPP_

#include <string>

/*
 * An alphabetically sorted list of every determiner in the English language
 */
#define TOTAL_DETERMINERS 24
const std::string DETERMINERS[TOTAL_DETERMINERS] = {
		"a", "an", "another", "any", "few", "her", "his", "its",
		"many", "much", "my", "of", "our", "several", "some", "that",
		"the", "their", "these", "this", "those", "very", "whose", "your"
};

/*
 * Add expletives into the string after determiners. Modifies the given string.
 *
 * Returns true if the string was modified
 */
bool expletizeString(std::string &string);

#endif /* WORDS_HPP_ */
