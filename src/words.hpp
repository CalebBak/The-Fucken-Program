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

#define TOTAL_BASIC_EXPLICATIVES 5
const std::string BASIC_EXPLICATIVES[TOTAL_BASIC_EXPLICATIVES] = {
		"damn", "goddamn", "fucking", "fuckin\'", "bitch-ass"
};

#define TOTAL_LEVELS 4
const std::string LEVELS[TOTAL_LEVELS] = {
		"absolutely", "literally", "really", "incredibly"
};

#define TOTAL_ENDINGS 6
const std::string ENDINGS[TOTAL_ENDINGS] = {
		"garbage", "bad", "terrible", "ungood", "jank", "the worst"
};

#define TOTAL_MODIFIED 6
const std::string MODIFIED[TOTAL_MODIFIED] = {
		"jank", "tall", "short", "long", "old", "strong", "poor", "huge", "rare", "pure"
};


/*
 * Add expletives into the string after determiners. Modifies the given string.
 *
 * Returns true if the string was modified
 */
bool expletizeString(std::string &string);

#endif /* WORDS_HPP_ */
