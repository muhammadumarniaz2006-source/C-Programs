#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 8

// Structure for storing a move
typedef struct {
    int r1, c1, r2, c2;
    char player;
} Move;

char board[N][N];
FILE *moveFile, *resultFile;

// Initialize board
void init_board() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + j) % 2 == 0) {
                board[i][j] = ' ';
            } else {
                if (i < 3) board[i][j] = 'b';   // Black pieces
                else if (i > 4) board[i][j] = 'r'; // Red pieces
                else board[i][j] = '.';
            }
        }
    }
}

// Print board
void print_board() {
    printf("\n    1 2 3 4 5 6 7 8\n");
    printf("   -----------------\n");
    for (int i = 0; i < N; i++) {
        printf("%d | ", i + 1);
        for (int j = 0; j < N; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Check if coordinates are valid
int in_bounds(int r, int c) {
    return r >= 0 && r < N && c >= 0 && c < N;
}

// Save move to file
void save_move(Move m) {
    fprintf(moveFile, "Player %c: (%d,%d) -> (%d,%d)\n", 
            m.player, m.r1+1, m.c1+1, m.r2+1, m.c2+1);
}

// Save winner to file
void save_result(char winner) {
    fprintf(resultFile, "Winner: Player %c\n", winner);
}

// Count pieces
int count_pieces(char player) {
    int count = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (tolower(board[i][j]) == player) count++;
    return count;
}

// Apply move
void apply_move(int r1, int c1, int r2, int c2) {
    char piece = board[r1][c1];
    board[r2][c2] = piece;
    board[r1][c1] = '.';

    // Promotion to king
    if (piece == 'b' && r2 == N-1) board[r2][c2] = 'B';
    if (piece == 'r' && r2 == 0)   board[r2][c2] = 'R';
}

int main() {
    init_board();

    // Open files
    moveFile = fopen("moves.txt", "w");
    resultFile = fopen("result.txt", "w");
    if (!moveFile || !resultFile) {
        printf("Error opening files!\n");
        return 1;
    }

    char current = 'b'; // black starts
    while (1) {
        print_board();
        if (count_pieces('b') == 0) {
            printf("Red wins!\n");
            save_result('R');
            break;
        }
        if (count_pieces('r') == 0) {
            printf("Black wins!\n");
            save_result('B');
            break;
        }

        int r1,c1,r2,c2;
        printf("Player %c, enter move (r1 c1 r2 c2), or 0 to quit: ", toupper(current));
        if (scanf("%d", &r1) != 1 || r1 == 0) break;
        scanf("%d %d %d", &c1, &r2, &c2);

        r1--; c1--; r2--; c2--;

        if (!in_bounds(r1,c1) || !in_bounds(r2,c2)) {
            printf("Invalid coordinates!\n");
            continue;
        }
        if (board[r1][c1] == '.' || board[r1][c1] == ' ' ||
            tolower(board[r1][c1]) != current) {
            printf("Invalid piece!\n");
            continue;
        }
        if (board[r2][c2] != '.') {
            printf("Destination not empty!\n");
            continue;
        }

        // Apply move
        apply_move(r1,c1,r2,c2);

        // Save move to file
        Move m = {r1,c1,r2,c2,current};
        save_move(m);

        // Switch player
        current = (current=='b') ? 'r' : 'b';
    }

    fclose(moveFile);
    fclose(resultFile);
    return 0;
}
