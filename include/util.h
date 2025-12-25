#ifndef UTIL_H
#define UTIL_H

#if defined(__GNUC__) || defined(__clang__)
#define _mu __attribute__((unused))
#else
#define _mu
#endif

void test_function(void);

#endif //end util.h
