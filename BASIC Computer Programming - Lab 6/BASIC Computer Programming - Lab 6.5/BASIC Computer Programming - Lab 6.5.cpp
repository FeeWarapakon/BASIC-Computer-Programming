#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main() {

    char sentence[MAX_SIZE];
    int vowel_count = 0;
    printf("Enter a sentence: ");
    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }
    sentence[strcspn(sentence, "\n")] = '\0';
    char *char_ptr = sentence;
    while (*char_ptr != '\0') {
        char current = *char_ptr;

        if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u' ||
            current == 'A' || current == 'E' || current == 'I' || current == 'O' || current == 'U') {
            vowel_count++;
        }
        
        char_ptr++;
    }
    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);
    
    return 0;
}//end function