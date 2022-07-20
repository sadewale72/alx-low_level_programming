#include "main.h"

/**
 * wildcmp - compare strings
 * @sl: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */
int wildcmp(char *sl, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(sl + 1, s2) || wildcmp(sl, s2 + 1));
}
else if (*sl == *s2)
{
return (wildcmp(sl + 1, s2 + 1));
}
return (0);
}
