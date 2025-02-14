#pragma once

#include <set>
#include <string>

namespace faker
{
const std::string upperCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const std::string lowerCharacters = "abcdefghijklmnopqrstuvwxyz";
const std::string numericCharactersWithoutZero = "123456789";
const std::string numericCharacters = "0123456789";
const std::string mixedAlphaCharacters = upperCharacters + lowerCharacters;
const std::string lowerAlphanumericCharacters = lowerCharacters + numericCharacters;
const std::string upperAlphanumericCharacters = upperCharacters + numericCharacters;
const std::string mixedAlphanumericCharacters = upperCharacters + lowerCharacters + numericCharacters;
const std::string hexUpperCharacters = "0123456789ABCDEF";
const std::string hexLowerCharacters = "0123456789abcdef";
const std::string symbolCharacters = "~`!@#$%^&*()_-+={[}]|:;\"'<,>.?/";

const std::set<char> hexUpperCharSet{'A', 'B', 'C', 'D', 'E', 'F', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
const std::set<char> hexLowerCharSet{'a', 'b', 'c', 'd', 'e', 'f', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
const std::set<char> digitSet{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
}
