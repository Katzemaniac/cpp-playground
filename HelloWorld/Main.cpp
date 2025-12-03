#include <iostream>
#include "Log.h"
#include "Common.h"

int main() 
{
	int x = 5;

	for (int i = 0; i < 5; i++) {
		if ((i + 1) % 2 == 0)
			break; // breaks the iteration, exiting to the next line of code
		
		std::cout << i;
		Log(" Hello, World!");
	}
	 
	std::cin.get();
}