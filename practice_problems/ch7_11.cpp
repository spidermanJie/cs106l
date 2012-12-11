#include <cstdlib>
#include <cstdio>

//#define NO_CS106L_NOTREACHED

#ifndef NO_CS106L_NOTREACHED // Enabled
#define CS106LNotReached(msg)                               \
do {                                                        \
    fprintf(stderr, "File: " __FILE__ "\n");                \
    fprintf(stderr, "Line: %d\n", __LINE__);                \
    fprintf(stderr, msg "\n");                              \
    abort();                                                \
} while (0)
#else
#define CS106LNotReached(msg) // Do nothing
#endif

int main()
{
    CS106LNotReached("the message");
    return 0;
}
