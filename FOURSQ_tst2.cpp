#include <stdio.h>

int n, i, a, b, c, d;

int main() {
	
    for (scanf("%d", &n)
        ;
        a*a + b*b - n
            ? a | !b
                ? a*a > n | a < b
                    ? (--a, b = 1)
                    : b
                        ? ++b
                        : ++a
                : (a = b = 0, --n, ++i)
            : c*c + d*d - i
                ? c | !d
                    ? c*c > i | c < d
                        ? (--c, d = 1)
                        : d
                            ? ++d
                            : ++c
                    : (a = b = c = d = 0, --n, ++i)
                : 0;
    );
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
