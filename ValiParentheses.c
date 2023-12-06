#include "codeLearnIo.h"

enum {
MAX_SIZE = 100
};

/**
 * @brief A structure to represent a stack
 */
typedef struct
{
    char arr[MAX_SIZE]; /**< Internal array to hold the stack elements */
    int top;            /**< Index of the top element in the stack */
} Stack;

/**
 * @brief Initialize a stack
 * @param s Pointer to the stack
 */
static void init(Stack *s) { s->top = -1; }

/**
 * @brief Check if the stack is empty
 * @param s Pointer to the stack
 * @return true if the stack is empty, false otherwise
 */
static bool isEmpty(Stack *s) { return s->top == -1; }

/**
 * @brief Check if the stack is full
 * @param s Pointer to the stack
 * @return true if the stack is full, false otherwise
 */
static bool isFull(Stack *s) { return s->top == MAX_SIZE - 1; }

/**
 * @brief Push an element onto the stack
 * @param s Pointer to the stack
 * @param element The element to push onto the stack
 */
static void push(Stack *s, char element)
{
    if (!isFull(s))
    {
        s->arr[++s->top] = element;
    }
}

/**
 * @brief Pop an element from the stack
 * @param s Pointer to the stack
 * @return The popped element, or '\0' if the stack is empty
 */
static char pop(Stack *s)
{
    if (!isEmpty(s))
    {
        return s->arr[s->top--];
    }
    return '\0';
}

bool isValidParentheses(const char *chrP_messg, uint32_t u32_messgBound)
{
    bool isValid = true;
    if ((chrP_messg != NULL) && (u32_messgBound <= 100U) &&
        (u32_messgBound > 1U)) /* Input Validation */
    {
        Stack stackMessg;
        uint32_t u32_messIndex = 0U;
        init(&stackMessg);
        while (u32_messIndex < u32_messgBound)
        {
            char chr_temp = chrP_messg[u32_messIndex];
            if (chr_temp == '(')
            {
                push(&stackMessg, '(');
            }
            else if (chr_temp == '{')
            {
                push(&stackMessg, '{');
            }
            else if (chr_temp == '[')
            {
                push(&stackMessg, '[');
            }
            else if (chr_temp == ')' || chr_temp == ']' || chr_temp == '}')
            {
                //! Note: fix that error 
                char stackPop = pop(&stackMessg);
                if (chr_temp != (stackPop - 2U))
                {
                    isValid = false;
                    break;
                }  else
                {
                    /*for Misra rule*/
                }
                
                
               
            }
            else
            {
            }
            u32_messIndex++;
        }
        if (isEmpty(&stackMessg) != true)
        {
            isValid = false;
        }
        else
        {
        }
    }
    else
    {
        isValid = false;
    }
    return isValid;
}
