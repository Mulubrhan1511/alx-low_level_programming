#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#define ABS(x) if (x >= 0) \
			return (x); \
			else \
			return (-1 * x);

#endif
