#include <stdio.h>
#include "main.h"
/*
 * is_palindrome_helper - helper function
 * @s: string pointer
 * @start: counter int
 * @end: counter int
 * Return: 1 or 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
    {
        return (1);
    }

    else  if (s[start] == s[end])
    {
        return (is_palindrome_helper(s, start+1, end-1));
    }
    else
    {
        return (0);
    }
}
/**
 * is_palindrome - checks if a str is a palindrome
 * @s - string to be checked
 * Return: 1 or 0 (if not a palindrome)
 * */

int is_palindrome(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return (is_palindrome_helper(s, 0, len-1));
}
