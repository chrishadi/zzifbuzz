#include <stdio.h>

char *sprint_i2w0(int i);

char *w[] = {0x0, "fizz", "buzz", "fizzbuzz"};

int main(int argc, char *argv[]) {
    unsigned i;
    for (i = 1; i < 101; i++) {
        unsigned wi = (i % 3 == 0) | (i % 5 == 0) << 1;
        (wi || sprint_i2w0(i));
        printf("%s ", w[wi]);
    }
    return 0;
}

// convert i to string and assign the pointer to w[0]
char* sprint_i2w0(int i) {
    char d[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    static char s[] = "99";
    s[0] = d[i/10];
    s[1] = d[i%10];
    // skip the leading 0 if i < 10
    w[0] = s + (i < 10);
    return w[0];
}
