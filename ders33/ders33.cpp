#include <iostream>
#include "ders33.h"


const char *RecommendMeAFood(char firstLetter) {  // definition of a function
	if (firstLetter == 'a' || firstLetter == 'A')
		return "apple";
	else if (firstLetter == 'b' || firstLetter == 'B')
		return "banana";
	else if (firstLetter == 'c' || firstLetter == 'C')
		return "chocolate";
	else return "pizza";
}




