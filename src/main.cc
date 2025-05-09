#include "hypertext_string.h"
#include <cassert>
#include <print>

using namespace std::literals::string_literals;
using namespace std::literals::string_view_literals;

void test()
{
	auto ch0{"abc%20ABC%26123"s};
	auto ch1{"abc ABC&123"s};

	assert(ch0 == to_hypertext(ch1));
	assert(ch1 == from_hypertext(ch0));

	assert(ch1.substr(6,3) == from_hypertext(ch0.data() + 8, 5));
}

int main()
try {
	test();
	std::println("{}", to_hypertext("\n!@#$%^&*()-_+=?"));
	return EXIT_SUCCESS;
} catch (std::exception const & e) {
	std::println(stderr, "Ошибка: {}", e.what());
	return EXIT_FAILURE;
}
