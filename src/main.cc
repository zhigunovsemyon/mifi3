#include <cstdlib>
#include <print>
#include "hypertext_string.h"

int main()
{
	std::println("{}!", to_hypertext("Hello World!",6));
	return EXIT_SUCCESS;
}
