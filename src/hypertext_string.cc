#include "hypertext_string.h"
#include <string_view>

std::string to_hypertext(std::string const & src)
{
	return src;
}

std::string to_hypertext(char const * src)
{
	return src;
}

std::string to_hypertext(char const * src, size_t length)
{
	return {src, length};
}

std::string from_hypertext(std::string const & src)
{
	return src;
}

std::string from_hypertext(char const * src)
{
	return src;
}

std::string from_hypertext(char const * src, size_t length)
{
	return {src, length};
}
