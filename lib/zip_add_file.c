#include "zip.h"
#include "zipint.h"



int
zip_add_file(struct zip *zf, char *name, struct zip_meta *meta,
	    FILE *file, int start, int len)
{
    return zip_replace_file(zf, -1, name, meta, file, start, len);
}