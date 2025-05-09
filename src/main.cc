#include "hypertext_string.h"
#include <print>

int main()
try {
	std::println("{}", from_hypertext("abc%20ABC%26123"));
	return EXIT_SUCCESS;
} catch (std::exception const & e) {
	std::println(stderr, "Ошибка: {}", e.what());
	return EXIT_FAILURE;
}
