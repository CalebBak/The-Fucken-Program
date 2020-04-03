#ifndef WORDS_HPP_
#define WORDS_HPP_

#include <array>
#include <string>

/*
 * An alphabetically sorted list of every determiner in the English language
 */
const std::array<std::string, 23> DETERMINERS = {
	"a", "an", "another", "any", "few", "her", "his", "its",
	"many", "much", "my", "of", "our", "several", "some",
	"the", "their", "these", "this", "those", "very", "whose", "your"
};

const std::array<std::string, 5> BASIC_EXPLICATIVES = {
		"damn", "goddamn", "fucking", "fuckin\'", "bitch-ass"
};

const std::array<std::string, 4> LEVELS = { // Combined with ENDINGS in the form: LEVEL ENDING, e.g. literally garbage
		"absolutely", "literally", "really", "incredibly"
};

const std::array<std::string, 6> ENDINGS = {
		"garbage", "bad", "terrible", "ungood", "jank", "the worst"
};

const std::array<std::string, 10> MODIFIED = { // These will have "-ass" or " as fuck" appened to them, e.g. "long-ass", "old as fuck"
		"jank", "tall", "short", "long", "old", "strong", "poor", "huge", "rare", "pure"
};

const std::array<std::string, 2> AFTERS = { // Adjectives that combine with determiners
		 "big", "little"
};

/*
 * Add expletives into the string after determiners. Modifies the given string.
 *
 * Returns true if the string was modified
 */
bool expletizeString(std::string &string);

#endif /* WORDS_HPP_ */
