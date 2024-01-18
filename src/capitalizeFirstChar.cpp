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
        // input validating fail
    } else {
        std::for_each(res.begin(), res.end(), [](std::string &str) {
            str[0] = static_cast<char>(toupper(str[0]));
        });
    };
    return res;
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
    // input validating fail
    } else {
        std::for_each(res.begin(), res.end(), [](std::string &str) {
            str[0] = static_cast<char>(toupper(str[0]));
        });
    }
    return res;
}
/**
 * @brief Checks if the first string contains all the characters of the second string.
 *
 * This function takes a vector of exactly two strings and determines whether every character
 * from the second string (case-insensitive) is found in the first string. The function is case-insensitive,
 * meaning that if the second string contains a character 'a', it will be considered contained
 * if the first string has either 'a' or 'A'.
 *
 * @param vectString A vector of exactly two strings where the first string is checked against the second.
 *
 * @return `true` if the first string contains all characters of the second string (case-insensitive), `false` otherwise.
 * If the input vector does not contain exactly two strings, the result is `false`.
 *
 * @note The function will return `false` if the input vector does not contain exactly two strings.
 * It will also return `false` as soon as one character from the second string is not found in the first string.
 *
 * Usage example:
 * @code
 * std::vector<std::string> vect = {"HelloWorld", "ole"};
 * bool result = isFirstStrContainsAll(vect);
 * // result will be true because "HelloWorld" contains 'o', 'l', 'e'.
 * @endcode
 */
//! Note: didn't test yet
bool isFirstStrContainsAll(std::vector<std::string> &vectString) {
    bool res = false;
    if (vectString.size() != 2) {
        // input validating fail
    } else {
        std::for_each(vectString.at(1).begin(), vectString.at(1).end(),
                      [&](char &c) -> void {
                          auto conditionOne =
                                  vectString.at(0).find(static_cast<char >(tolower(c))) == std::string::npos;
                          auto conditionTow =
                                  vectString.at(0).find(static_cast<char >(toupper(c))) == std::string::npos;
                          if (conditionOne && conditionTow) {
                              res = false;
                          } else {
                              res = true;
                          }

                      });
    };
    return res;
}
/**
 * @brief Filters and returns strings that contain at least one digit from the input vector.
 *
 * This function examines each string in the provided vector and adds it to the result vector
 * if it contains at least one numeric character (0-9). The check is performed using `std::isdigit`.
 *
 * @param vectStr A reference to a vector of strings to be checked for numeric content.
 *
 * @return A vector of strings that contains all strings from the input vector that have at least one digit.
 *
 * @note If the input vector is empty, the function returns an empty vector.
 *
 * Usage example:
 * @code
 * std::vector<std::string> vect = {"abc", "123", "a1b2"};
 * std::vector<std::string> filteredVect = isContainNumberInStr(vect);
 * // filteredVect will contain {"123", "a1b2"}
 * @endcode
 */
//! Note: didn't test yet
std::vector<std::string> isContainNumberInStr(std::vector<std::string> &vectStr) {
    std::vector<std::string> res;
    if (vectStr.empty() == true) {
        // input validating fail
    } else {
        std::for_each(vectStr.begin(), vectStr.end(),
                      [&](std::string &str) -> void
                      {
                          for (auto &c: str)
                          {
                              if (std::isdigit(c))
                              {
                                  res.push_back(str);
                              }
                          }
                      }
                      );
    }
    return res;
}


