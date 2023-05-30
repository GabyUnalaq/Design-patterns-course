#include <iostream>
#include "Flower.hpp"

using namespace std;

int main() {
	Rose rose;
	RedFlower red_rose{ rose };
	RedFlower red_red_rose{ red_rose };
	BlueFlower blue_red_rose{ red_rose };

	cout << rose.str() << endl;          // "A rose"
	cout << red_rose.str() << endl;      // "A rose that is red"
	cout << red_red_rose.str() << endl;  // "A rose that is red"
	cout << blue_red_rose.str() << endl; // "A rose that is red and blue"
}