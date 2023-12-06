#include "isPowerOfFour.h"
#include <math.h>
#include <string.h>
#include <stdbool.h>

enum {
MAX_CHAR = 36U,
MAX_BUFF = 300U,
MAX_MORSE_CHAR = 5U
};
static const char *morse[MAX_CHAR] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};
static const char character[MAX_CHAR] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};



static uint32_t isMorseString(const char *str)
{
    uint32_t res = 0U;
 
    if (str == NULL) /* Validating parameter input */
    {
        res = 0U; 
    }
    else
    {
        for(uint32_t i =0U; i <=MAX_MORSE_CHAR; i++)
        {
            if(str[i] == (const char)'\0')
            {
                res = 1U;
                break;
            }
        }
    }
    return res;
}

static char morseCodeToChar(const char *codeMorse)
{
    bool isMatched = false;
    uint32_t countChar = 0U;
    char res = (char)0U;
    if (isMorseString(codeMorse) == 1U)
    {
        while ((isMatched == false) && (countChar < (MAX_CHAR - 1)))
        {
            if (isMorseString(morse[countChar]) == 1U)
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
    char tempChar[MAX_MORSE_CHAR] = {(char)0U};
    uint32_t tempCharIndex = 0U;
    bool spaceFlag = false;
    static char mess[MAX_BUFF] = {(char)0U};
    uint32_t mesIndex = 0U;

    if ((s != NULL) && (numbOfString >= 2U))
    {
        for (uint32_t i = 0U; i <= (numbOfString - 1U); i++)
        {

            if ((tempCharIndex <= 4U) && (mesIndex <= (MAX_BUFF -1U)))
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