#include "yodlpost.h"

void handle_toc(long offset, HashItem *item)
{
    register unsigned idx;
    register unsigned n;

    file_copy2offset(global.d_out, postqueue_istream(), offset);

    fprintf(global.d_out, "<h1>%s</h1>\n", hashitem_key(item));

    for (idx = 0, n = lines_size(&global.d_toc); idx < n; idx++)
    {
        fputs(lines_at(&global.d_toc, idx), global.d_out);
        fputc('\n', global.d_out);
    }
    fputs("</dl>\n", global.d_out);
}