#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;

    // Input source string
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    // Copy characters from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string

    printf("Source string: %s", source);
    printf("Copied (destination) string: %s", destination);

    return 0;
}
