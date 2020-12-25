#include <iostream>
#include <ctime>
#include <cstdlib>
#include "include/color.hpp"



int main() {
	srand( time(NULL));

	char* Tree;
	const int spacesInit = 20;
	int spaces = spacesInit;
	int branchLength = 1;
	int stumpLength = 3;
	int stumpHeight = 5;
	int addedStars = 0;
		for (int i = 0; i<10; i++) {
		for (int s = 0; s<spaces; s++) {
			std::cout << " ";
		}
		for (int b = 0; b < branchLength; b++) {
			std::cout << dye::green("#");
			if (b == 1+rand() % 10) {
				std::cout << dye::yellow("*");
				branchLength--;
				addedStars ++;
			}
			if (b == 1+rand() % 8) {
				if (branchLength/b == 1) {} else {
					std::cout << dye::red("o");
					branchLength--;
					addedStars ++;
				}
			}
			if (b == 1+rand() % 8) {
				if (branchLength/b == 1) {} else {
					std::cout << dye::red("o");
					branchLength--;
					addedStars ++;
				}
			}
			if (b == 1+rand() % 8) {
				if (branchLength/b == 1) {} else {
					std::cout << dye::aqua("o");
					branchLength--;
					addedStars ++;
				}
			}
			
		}
		std::cout << "" << std::endl;
		spaces = spaces - 1;
		for (int j = 0; j < addedStars; j++) {
			branchLength++;
		}
		addedStars = 0;
		branchLength = branchLength + 2;
		}
		for (int sl = 0; sl < stumpHeight; sl++) {
			for (int s = 0; s < spacesInit - stumpLength/2; s++) {
				std::cout << " ";
			}
			for (int st = 0; st < stumpLength; st++) {
				std::cout << dye::grey("#");
			}
			std::cout << "" << std::endl;
		
		}
	while(true) {
		


	}
	return 0;
}

//private members have a underscore
//variables are camelCase
//classes and file names are capitols 