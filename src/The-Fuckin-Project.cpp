#include <iostream>

#include "words.hpp"

int main() {
	bool modified;
	std::string basic1 = "The Dungeons & Dragons Roleplaying game is about storytelling in worlds of swords and sorcery. It's about picturing the towering castle beneath the stormy night sky and imagining how a fastasy adventurer might react to the challenges that scene presents";
	std::string basic2 = "Hi, I'm Michelle Obama and I want to talk to you today about a group of people that inspires me every day. Our troops, veterans, and their families. The men and women who make up our armed forces, the army, navy, marines, airforce, and coast guard. They're some of the most courageous, most highly skilled people in this country. Excuse me, Mrs. Obama, now we're a little tired of the seals getting all the good missions! What about us Penguins? As a matter of fact, I have a top-secret mission that is perfect for the penguins. Top secret? This is an honor! The boys and I will be all over this job. Well good luck, we're counting on you. Thank you, but I have to ask, mind if we shoot a few hoops? Go right ahead. Oops, we'll fix that. Gather round boys it seems like our good work has rewarded us with a bit of tasty intel. Ugh. Kowalski, Private, Now let's get to work! Good news boys! Looks like operation got your six is a go. Skipper, what is got your six? Military slang. Homeboy, I got your 6. 12 being forward, 6 is behind you. Then get your 6 means taking care of each other. Exacta Mundo. Now let's lite a fuse on this mission and rattle a few windows. Oh boy! Its Faction Jackson! and Truthie McRuthie. That's positive I.D. Kowalski, recon. Sir, they represent the truths and facts about our servicemen and women. That's Smythie Mythie. This jelly bean jarhead will show us the wrong ideas some people have about the military. Now, who knows what veterans day is. Ooh Ooh! Anyone? Anyone? Anyone else? Alright, Private. That's the holiday for animal doctors. Private, I said veterans day, not Veterinarians day. But I like animal doctors. That's it I'm busting you down to private second class. Veterans day is a day we celebrate the men and women who have served our country in the military.";
	std::string basic3 = "What the fuck did you just fucking say about me, you little bitch? I'll have you know I graduated top of my class in the Navy Seals, and I've been involved in numerous secret raids on Al-Quaeda, and I have over 300 confirmed kills. I am trained in gorilla warfare and I'm the top sniper in the entire US armed forces. You are nothing to me but just another target. I will wipe you the fuck out with precision the likes of which has never been seen before on this Earth, mark my fucking words. You think you can get away with saying that shit to me over the Internet? Think again, fucker. As we speak I am contacting my secret network of spies across the USA and your IP is being traced right now so you better prepare for the storm, maggot. The storm that wipes out the pathetic little thing you call your life. You're fucking dead, kid. I can be anywhere, anytime, and I can kill you in over seven hundred ways, and that's just with my bare hands. Not only am I extensively trained in unarmed combat, but I have access to the entire arsenal of the United States Marine Corps and I will use it to its full extent to wipe your miserable ass off the face of the continent, you little shit. If only you could have known what unholy retribution your little \"clever\" comment was about to bring down upon you, maybe you would have held your fucking tongue. But you couldn't, you didn't, and now you're paying the price, you goddamn idiot. I will shit fury all over you and you will drown in it. You're fucking dead, kiddo.";
	std::string basic4 = "First second three four";

	std::array<std::string, 4> strings = {basic1, basic2, basic3, basic4};

	for (std::string str : strings) {
		modified = expletizeString(str);

		if (modified) {
			std::cout << str << std::endl;
		} else {
			std::cerr << "Failed to modify test string."<< std::endl;
		}
	}

	return 0;
}
