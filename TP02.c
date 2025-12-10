
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *LoadString(int N) {
    char *str = malloc((N + 1) * sizeof(char));
    if (!str) { printf("Memory allocation failed!\n"); exit(1); }
    printf("Enter a string: ");
    fgets(str, N + 1, stdin);
    str[strcspn(str, "\n")] = '\0'; 
}


int StringLength(char *str) {
    int len = 0;
    while (str[len]) len++;
    return len;
}


void LoadArray(char *p, char arr[]) {
    int i = 0;
    while ((arr[i] = p[i]) != '\0') i++;
}


void ReverseArray(char arr[], char rev[], int n) {
    for (int i = 0; i < n; i++)
        rev[i] = arr[n - i - 1];
    rev[n] = '\0';
}


void DisplayArray(char arr[], int n) {
    for (int i = 0; i < n; i++) printf("%c", arr[i]);
    printf("\n");
}


int SumStringASCII(char *p) {
    return (*p) ? *p + SumStringASCII(p + 1) : 0;
}


void ReverseString(char *start, char *end) {
    if (start >= end) return;
    char temp = *start;
    *start = *end;
    *end = temp;
    ReverseString(start + 1, end - 1);
}


int main() {
    int n;
    printf("Enter max size: ");
    scanf("%d", &n);
    getchar();

    char *str = LoadString(n);
    int len = StringLength(str);
    char arr[len + 1], rev[len + 1];

    LoadArray(str, arr);
    printf("\nOriginal array: "); DisplayArray(arr, len);

    ReverseArray(arr, rev, len);
    printf("Reversed array: "); DisplayArray(rev, len);

    printf("Sum of ASCII values: %d\n", SumStringASCII(str));

    ReverseString(str, str + len - 1);
    printf("Reversed recursively: %s\n", str);

    free(str);
    return 0;
