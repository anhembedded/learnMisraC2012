#include "isPowerOfFour.h"
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHAR 36U
static const char *morse[MAX_CHAR] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};
static char character[MAX_CHAR] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

/**
 * @brief Compares two strings for equality.
 *
 * This function compares two strings to check if they are the same. 
 * It checks each character of both strings one by one. If all characters are the same and the lengths of both strings are the same, it returns 1, otherwise it returns 0.
 * The function also validates the input strings. If either or both of the input strings are NULL, the function will return 0.
 *
 * @param str1 The first string to be compared. It should be a valid null-terminated string.
 * @param str2 The second string to be compared. It should be a valid null-terminated string.
 * @return Returns 1 if both strings are the same, otherwise returns 0.
 */
static uint32_t isTheSameString(const char *str1, const char *str2)
{
    uint32_t result = 0u; // Initialize result to 0 (strings are not the same)

    // Check if both strings are not NULL
    if (str1 != NULL && str2 != NULL)
    {
        // Compare strings
        for (; *str1 == *str2; ++str1, ++str2)
        {
            // If we reach the end of both strings, they are the same
            if (*str1 == '\0')
            {
                result = 1u; // Strings are the same
                break;
            }
        }
    }

    return result;
}

static uint32_t isString(const char *str)
{
    uint32_t res = 0U;
    uint32_t i = 0U;
    if (str == NULL)
    {
        res = 0U; // Handle NULL pointer
    }
    else
    {
        while (str[i] != '\0')
        {
            i++;
        }

        if (str[i] == '\0')
        {
            res = 1U; // It's a string
        }
        else
        {
            res = 0U;
            ; // Not a string
        }
    }

    return res;
}

static char morseCodeToChar(const char *codeMorse)
{
    bool isMatched = false;
    uint32_t countChar = 0U;
    char res = (char)0U;
    if (isString(codeMorse) == 1U)
    {
        while ((isMatched == false) && (countChar < (MAX_CHAR - 1)))
        {
            if (isString(morse[countChar]) == 1U)
            {
                if (strcmp(codeMorse, morse[countChar]) == (int32_t)0)
                {
                    res = character[countChar];
                    isMatched = true;
                }
                else
                {
                    countChar++;
                }
            }
        }
    }

    return res;
}

char *decodeMorseCode(const char *s, uint32_t numbOfString)
{
    char tempChar[5U] = {(char)0U};
    uint32_t tempCharIndex = 0U;
    bool spaceFlag = false;
    static char mess[300] = {(char)0u};
    uint32_t mesIndex = 0U;

    if ((s != NULL) && (numbOfString >= 2U))
    {
        for (uint32_t i = 0U; i <= (numbOfString - 1U); i++)
        {

            if ((tempCharIndex <= 4U) && (mesIndex <= 299))
            {
                if ((s[i] == '.') || (s[i] == '-'))
                {

                    tempChar[tempCharIndex] = s[i];
                    tempCharIndex++;
                }
                else if ((s[i] == ' ') || (i == (numbOfString - 1U)))
                {
                    if (spaceFlag == false)
                    {
                        tempChar[tempCharIndex] = '\0';
                        mess[mesIndex] = morseCodeToChar(tempChar);
                        mesIndex++;
                        tempCharIndex = 0U;
                    }
                    else
                    {
                        spaceFlag = false;
                    }
                }
                else
                {
                    spaceFlag = true;
                    mess[mesIndex] = ' ';
                    mesIndex++;
                }
            }
        }
    }
    else
    {
        /*for Misra Rule*/
    }

    return mess;
}