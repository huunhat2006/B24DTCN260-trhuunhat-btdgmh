#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Kieu du lieu nguyen (Integer types):\n");
    printf("char: %d bits, Min: %d, Max: %d\n", CHAR_BIT, CHAR_MIN, CHAR_MAX);
    printf("signed char: %lu bits, Min: %d, Max: %d\n", sizeof(signed char) * 8, SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: %lu bits, Min: 0, Max: %u\n", sizeof(unsigned char) * 8, UCHAR_MAX);
    printf("short: %lu bits, Min: %d, Max: %d\n", sizeof(short) * 8, SHRT_MIN, SHRT_MAX);
    printf("unsigned short: %lu bits, Min: 0, Max: %u\n", sizeof(unsigned short) * 8, USHRT_MAX);
    printf("int: %lu bits, Min: %d, Max: %d\n", sizeof(int) * 8, INT_MIN, INT_MAX);
    printf("unsigned int: %lu bits, Min: 0, Max: %u\n", sizeof(unsigned int) * 8, UINT_MAX);
    printf("long: %lu bits, Min: %ld, Max: %ld\n", sizeof(long) * 8, LONG_MIN, LONG_MAX);
    printf("unsigned long: %lu bits, Min: 0, Max: %lu\n", sizeof(unsigned long) * 8, ULONG_MAX);
    printf("long long: %lu bits, Min: %lld, Max: %lld\n", sizeof(long long) * 8, LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: %lu bits, Min: 0, Max: %llu\n", sizeof(unsigned long long) * 8, ULLONG_MAX);

    printf("\nKieu du lieu thuc (Floating-point types):\n");
    printf("float: %lu bits, Min: %e, Max: %e\n", sizeof(float) * 8, FLT_MIN, FLT_MAX);
    printf("double: %lu bits, Min: %e, Max: %e\n", sizeof(double) * 8, DBL_MIN, DBL_MAX);
    printf("long double: %lu bits, Min: %Le, Max: %Le\n", sizeof(long double) * 8, LDBL_MIN, LDBL_MAX);

    return 0;
}

