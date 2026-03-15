#include <stdio.h>
#include <string.h>

int calculate_score(char word[]);

int main() {
    char word1[100], word2[100];    
    int score1, score2;

    printf("Player 1: ");
    scanf("%s", word1);
    printf("Player 2: ");
    scanf("%s", word2);

    // Calculate scores for both players
    score1 = calculate_score(word1);
    score2 = calculate_score(word2);

    // Compare and print the result
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    } else if (score2 > score1) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    printf("Player 1 score: %d\n", score1);
    printf("Player 2 score: %d\n", score2);

    return 0;
}

int calculate_score(char word[]) {
    int score = 0;
    
    for (int i = 0; i < strlen(word); i++) {
        char letter = word[i];
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ||
            letter == 'L' || letter == 'N' || letter == 'S' || letter == 'T' || letter == 'R') {
            score += 1;
        } else if (letter == 'D' || letter == 'G') {
            score += 2;
        } else if (letter == 'B' || letter == 'C' || letter == 'M' || letter == 'P') {
            score += 3;
        } else if (letter == 'F' || letter == 'H' || letter == 'V' || letter == 'W' || letter == 'Y') {
            score += 4;
        } else if (letter == 'K') {
            score += 5;
        } else if (letter == 'J' || letter == 'X') {
            score += 8;
        } else if (letter == 'Q' || letter == 'Z') {
            score += 10;
        }
    }

    return score;
}
