//
// Created by PC on 1/12/2024.
//

#include "capitalizeFirstChar.hpp"
#include <cctype>

/**
 * @brief Capitalizes the first character of each string in the given vector.
 * Iterates through each string in the input vector and capitalizes its first character if it is alphabetic. The function
 * modifies the original vector in-place.
 * @param vectStr A reference to a vector of strings to be modified. Each string's first
 * alphabetic character will be capitalized.
 * @return A reference to the modified vector with capitalized first characters.
 * @note This function will not alter non-alphabetic characters or strings that are empty.
 * Usage:
 * @code
 * std::vector<std::string> words = {"hello", "world"};
 * std::vector<std::string> capitalizedWords = capitalizeFirstChar(words);
 * // Now capitalizedWords contains {"Hello", "World"}
 * @endcode
 */
std::vector<std::string> capitalizeFirstChar(std::vector<std::string> &vectStr) {
    std::vector<std::string> res = vectStr;
    if (vectStr.empty() == true) {

    } else {
        std::for_each(res.begin(), res.end(), [](std::string &str) {
            str[0] = static_cast<char>(toupper(str[0]));
        });
    };
    return  res;
}
/**
 * @brief Capitalizes the first character of each string in the given list.
 * Iterates through each string in the input list and capitalizes its first character if it is an alphabetic character.
 * The function modifies the original list in-place.
 * @param listStr A reference to a list of strings to be modified. Each string's first
 * alphabetic character will be capitalized if it is not already in uppercase.
 * @return A reference to the modified list with capitalized first characters.
 * @note This function will not alter non-alphabetic characters or strings that are empty.
 * Usage example:
 * @code
 * std::list<std::string> words = {"hello", "world"};
 * std::list<std::string> capitalizedWords = capitalizeFirstChar(words);
 * // Now capitalizedWords contains {"Hello", "World"}
 * @endcode
 */
std::list<std::string> capitalizeFirstChar(std::list<std::string> &listStr) {
    std::list<std::string> res = listStr;
    if (listStr.empty() == true) {

    }else
    {
        std::for_each(res.begin(), res.end(), [](std::string &str) {
            str[0] = static_cast<char>(toupper(str[0]));
        });
    }
    return res;
}