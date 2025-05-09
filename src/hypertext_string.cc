#include "hypertext_string.h"
#include <string>
#include <string_view>

static std::string _to_hypertext(std::string_view src)
{
	return std::string{src};
}

static std::string _from_hypertext(std::string_view src)
{
	return std::string{src};
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
	return _to_hypertext({src,length});
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
	return _from_hypertext({src,length});
}
