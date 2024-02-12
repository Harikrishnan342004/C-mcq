#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r, int *count) {
    int i;
    if (l == r) {
        (*count)++;
    } else {
        for (i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r, count);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

int main() {
    char str[100];
    int count = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int n = strlen(str);
    
    permute(str, 0, n - 1, &count);
    
    printf("Output: %d\n", count);
    
    return 0;
}