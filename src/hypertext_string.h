#pragma once
#include <string>

std::string to_hypertext(std::string const &);

std::string to_hypertext(char const *);

std::string to_hypertext(char const *, size_t length);

std::string from_hypertext(std::string const &);

std::string from_hypertext(char const *);

std::string from_hypertext(char const *, size_t length);
