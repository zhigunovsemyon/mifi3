#include "hypertext_string.h"
#include <cassert>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <string>
#include <string_view>

static std::string _to_hypertext(std::string_view src)
{
	std::string newstr{src};

	return newstr;
}

/*Функция возвращает номер символа*/
static char _newchar(std::string_view code)
{
	size_t pos;
	if (code.length() < 3)
		throw std::invalid_argument{
			"ASCII код должен иметь вид %XX"};

	return static_cast<char>(std::stoi(code.data() + 1, &pos, 16));
};

static std::string _from_hypertext(std::string_view src)
{
	std::string newstr{src};
	size_t ind;
	char buf[2]{0, 0};
	while (newstr.npos != (ind = newstr.rfind('%'))) {
		*buf = _newchar(newstr.substr(ind, 3));
		newstr.replace(ind, 3, buf);
	}

	return newstr;
}

std::string to_hypertext(std::string const & src)
{
	return _to_hypertext(src);
}

std::string to_hypertext(char const * src)
{
	return _to_hypertext(src);
}

std::string to_hypertext(char const * src, size_t length)
{
	return _to_hypertext({src, length});
}

std::string from_hypertext(std::string const & src)
{
	return _from_hypertext(src);
}

std::string from_hypertext(char const * src)
{
	return _from_hypertext(src);
}

std::string from_hypertext(char const * src, size_t length)
{
	return _from_hypertext({src, length});
}
