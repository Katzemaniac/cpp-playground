#include <iostream>
#include "Log.h"
#include "Common.h"

int main() 
{
	int x = 5;

	for (int i = 0; i < 5; i++) {
		if ((1 + i) % 2 == 0) 
			return 0;	// jumps to the end of the function
						// cautions: return in a bad position can created a "dead code"
		
		std::cout << i;
		Log(" Hello, World!");
	}
	 
	std::cin.get();
}