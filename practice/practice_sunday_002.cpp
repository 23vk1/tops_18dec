/*
practice
sunday

*/

#include <stdio.h>

int main() {
    int i, j, a = 1, b, c;

    for (i = 1; i <= 10; i++) {
        switch (i) {
            case 2: a += 10; break;
            case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: a += b - c; break;
        }

        for (j = 1; j <= 10; j++) {
            printf("%4d ", a);
            if (i != 1 && j == 10) a -= 2;
            if (i != 1) a += (j == 10) ? (b = 28) : 1;
            if (i >= 2 && j == 10) a -= c;
        }

        printf("\n");
        if (i >= 2) c += (i < 7) ? 8 : -8;
    }

    return 0;
}


