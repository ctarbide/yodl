#include "string.ih"

char *string_firstword(char **str)
{
    String ret;

    unsigned begin = strspn(*str, " \t");   /* length of initial blanks     */
    unsigned end =                          /* length of non blanks beyond  */
                 strcspn(*str + begin, " \t");

    if (!end)                               /* no first word                */
        return 0;

    string_construct(&ret, 0);

    *str += begin;                          /* skip blanks                  */
    string_additerators(&ret, *str, *str + end);
    *str += end;                            /* skip beyond first word       */

    return string_release(&ret);
}
