#include "message.ih"

Message m_message;

char m_version[SIZEOF_VERSION];

char *m_severity[] =
    {
        "NONE",             /* these two must be here.                  */
        "ALL",              /* see `message_setverbosity'               */

        "DEBUG",            /* ordering must follow MESSAGE_SEVERITY    */
        "INFO",             /* from here                                */
        "NOTICE",
        "WARNING",
        "ERROR",
        "CRITICAL",
        "ALERT",
        "EMERGENCY",
    };
