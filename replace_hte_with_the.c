#include <stdio.h>
#include <string.h>

void replaceWords() {
    char word[100];

    while (scanf("%s", word) != EOF) {  
        if (strcmp(word, "hte") == 0) {
            printf("the ");
        } else if (strcmp(word, "recieve") == 0) {
            printf("receive ");
        } else {
            printf("%s ", word);  // Print the word as is
        }
    }
}

int main() {
    printf("Enter a sentence:\n");
    replaceWords(); 
    return 0;
}
