#include <stdio.h>

int triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    int area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    return area != 0;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (triangle(x1, y1, x2, y2, x3, y3)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
