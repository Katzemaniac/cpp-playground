#include <iostream>
#include "Log.h"
#include "Common.h"

int main() 
{
	int x = 5;

	for (int i = 0; i < 5; i++) {
		if (i > 2)
			continue; // skip the next iteration of the loop
		
		std::cout << i;
		Log(" Hello, World!");
	}

	std::cin.get();
}