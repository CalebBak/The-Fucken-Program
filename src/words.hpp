#ifndef WORDS_HPP_
#define WORDS_HPP_

#include <array>
#include <string>

/*
 * An alphabetically sorted list of every determiner in the English language
 */
const std::array<std::string, 83> DETERMINERS = {
		"a", "an", "another", "any", "billion", "billionth", "eight", "eighth", "eightieth", "eighty",
		"eleven", "eleventh", "few", "fifteen", "fifteenth", "fifth", "fiftieth", "fifty", "first",
		"five", "fortieth", "forty", "four", "fourteen", "fourteenth", "fourth", "her", "his", "hundred",
		"hundredth", "its", "many", "million", "millionth", "much", "my", "nine", "ninetieth", "ninety",
		"ninteen", "ninteenth", "ninth", "of", "one", "our", "second", "seven", "seventh", "seventieth",
		"seventy", "several", "six", "sixteen", "sixteenth", "sixth", "sixtieth", "sixty", "some", "ten",
		"tenth", "the", "their", "these", "third", "thirteen", "thirteenth", "thirty", "thirtyth",
		"this", "those", "thousand", "thousandth", "three", "trillion", "trillionth", "twelfth", "twelve",
		"twentieth", "twenty", "two", "very", "whose", "your"
};

const std::array<std::string, 5> BASIC_EXPLICATIVES = {
		"damn", "goddamn", "fucking", "fuckin\'", "bitch-ass"
};

const std::array<std::string, 4> LEVELS = { // Combined with ENDINGS in the form: LEVEL ENDING, e.g. literally garbage
		"absolutely", "literally", "really", "incredibly"
};

const std::array<std::string, 3> ENDINGS = {
		"garbage", "terrible", "the worst"
};

const std::array<std::string, 10> MODIFIED = { // These will have "-ass" or " as fuck" appened to them, e.g. "long-ass", "old as fuck"
		"jank", "tall", "short", "long", "old", "strong", "poor", "huge", "rare", "pure"
};

const std::array<std::string, 4> AFTERS = { // Adjectives that combine with determiners
		 "big", "entire", "full", "little"
};

/*
 * Add expletives into the string after determiners. Modifies the given string.
 *
 * Returns true if the string was modified
 */
bool expletizeString(std::string &string);

#endif /* WORDS_HPP_ */
