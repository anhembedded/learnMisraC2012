//
// Created by PC on 1/12/2024.
//

#include "stringManipulation.hpp"
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>
#include <list>

void reverseString(std::string &strParam) {
    if (strParam.empty() == true) {
        // input validating fail
    } else {
        std::reverse(strParam.begin(), strParam.end());
    }
}

/**
 * @brief Capitalizes the first letter of each word in a string.
 *
 * Modifies the input string by capitalizing the first letter of each word. Words are defined as sequences of characters
 * separated by whitespace. The function does nothing if the string is empty. If the string is a single character, that
 * character is capitalized.
 *
 * @param str A reference to the string to be modified.
 *
 * @note This function adheres to MISRA rule 18.5 by not using any dynamic memory allocation.
 *
 * Example:
 * @code
 * std::string text = "hello world";
 * capFirstLetter(text);
 * // text is now "Hello World"
 * @endcode
 */
void capFirstLetter(std::string &str) {
    if (str.empty() == true) {
        // input validating fail
    } else {
        str.at(0) = static_cast<char>(toupper(str.at(0)));
        for (size_t i = 1; i < str.size(); i++) {
            if (std::isblank(str[i - 1U])) {
                str.at(i) = static_cast<char>(toupper(str.at(i)));
            } else {
                // For misra rule 18.5
            }

        }
    }
}

static std::vector<std::string> splitWord(std::string &str)
{
    std::vector<std::string> res;
    if(str.empty())
    {
        // input validating fail
    }else
    {
        std::stringstream ss_str(str);
        std::string word;
        while (ss_str >> word)
        {
            res.push_back(word);
        }
    }
    return res;
}

std::string lagrestWord(std::string &str)
{
    std::string maxWord;
    std::vector<std::string> vect_words;
    auto maxWordIndex = 0;
    if(str.empty() == true)
    {
        // input validating fail
    }else
    {
        vect_words = splitWord(str);

        for(auto i = 1; i < vect_words.size(); i++)
        {
            if(vect_words.at(i).size() > vect_words.at(maxWordIndex).size())
            {
                maxWordIndex = i;
            }
        }
    }
    return vect_words[maxWordIndex];
}

void sortString(std::string &str)
{
    if(str.empty() == true)
    {
        // input validating fail
    }else
    {
        std::sort(str.begin(), str.end());
    }
}

uint32_t u32_countWords(std::string str)
{
    uint32_t u32_countWord = 0;
    if(str.empty() == true)
    {
        // input validating fail
    }else
    {
        std::string word;
        std::stringstream ss_str(str);
        while(ss_str >> word)
        {
            u32_countWord ++;
        }
    }
    return u32_countWord;
}

std::string highest_repeated_letters(std::string str)
{
    std::string maxWord;
    if(str.empty() == true)
    {
        // input validating fail
    }else
    {
        std::stringstream ss_str(str);
        std::string word;
        std::map<char, int> letterCount;
        int maxCount = 0;

        while(ss_str >> word)
        {
            for(auto c : word)
            {
                letterCount.insert_or_assign(c, letterCount[c]+1);
            }
            uint32_t currentMaxCount = 0;
            std::for_each(letterCount.begin(),letterCount.end(),
                          [&](std::pair<char, int> p)
                          {
                              if(p.second > currentMaxCount)
                              {
                                  currentMaxCount = p.second;
                              }else
                              {
                                  // do nothing, misra C rule 18.5
                              }
                          });
            if(currentMaxCount > maxCount)
            {
                maxWord = word;
            }else
            {
                // do nothing   , misra C rule 18.5
            }
        }
    }
    return maxWord;
}



std::string insert_dash_after_odd(std::string &str) {
    const std::string oddNumStr = "13579";
    std::string strRes;
    if(str.empty() == true)
    {
        // input validating fail
    }else
    {
        std::list<char> charList (str.begin(), str.end());
        for(auto iter = charList.begin(); iter != charList.end(); iter ++)
        {
            if(oddNumStr.find(*iter) != std::string::npos)
            {
                iter = charList.insert(std::next(iter), '-');
            } else
            {
                // do nothing, misra C rule 18.5
            }
        }
        strRes = std::string(charList.begin(), charList.end());
    }
    return strRes;
}

//Write a C++ program to change the case (lower to upper and upper to lower cases) of each character in a given string.
std::string changeCase(std::string str) {
    std::string strRes;
    if(str.empty() == true)
    {
        // input validating fail
    }else
    {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        strRes = str;
    }
    return strRes;
}
int sumAllNumInString(std::string &str)
{
    int sumAll = 0;
    if(str.empty() == true)
    {
        // input validating fail
    }else
    {
        std::stringstream ss_str(str);
        int tempNum = 0;
        while(ss_str >> tempNum)
        {
            sumAll = sumAll + tempNum;
        }
    }
    return sumAll;
}

