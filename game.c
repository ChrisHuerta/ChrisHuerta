#include <stdio.h>
#include <stdlib.h>

int menu_for_game(void);
void evil_game(void);
void clearKeyboardBuffer(void);

int main(int argc, const char* argv[]) {

    if (menu_for_game() == 1) {
        evil_game();
    } 
    else if(menu_for_game() == 2){
        printf("\nI Guess Youre Scared\n");
    }
    printf("Good Bye!");

    return 0;
}

int menu_for_game(void) {

    int play_game = 0;

    printf("\nWelcome To Evil Rock,Paper,Scisors\n");
    printf("\nEnter A number\n1) Yes To Play\n2) No To Cancel\n");
    scanf("%d", &play_game);
    clearKeyboardBuffer();

    while (play_game != 1 && play_game != 2) {
        printf("\nplease enter a valid number response\n");
        printf("\nenter a number\n1) Yes to play game\n2) No to not play\n");
        scanf("%d", &play_game);
        clearKeyboardBuffer();
    }

    return play_game;
}

void evil_game(void) {

    int player1_choice = 0;
    int choice = 0;

    printf("\nPlayer Choose From The Options\n");
    printf("1)Rock\n2)Paper\n3)Scissors\n");
    scanf("%d", &player1_choice);
    clearKeyboardBuffer();
    
    while (player1_choice != 1 && player1_choice != 2 && player1_choice != 3) {
        printf("\nPlease enter a valid number response\n");
        printf("1)Rock\n2)Paper\n3)Scissors\n");
        scanf("%d", &player1_choice);
        clearKeyboardBuffer();
    }
    
    if (player1_choice == 1) {
        printf("\nPlayer 1 Choose Rock The Computer Choose Paper\n");
        printf("\nYou Lose!\n");
    }
    else if (player1_choice == 2) {
        printf("\nPlayer 1 Choose Paper The Computer Choose Scissors\n");
        printf("\nYou Lose!\n");
    }
    else if (player1_choice == 3) {
        printf("\nPlayer 1 Choose Scissors The Computer Choose Rock\n");
        printf("\nYou Lose!\n");
    }
    
    printf("\nWould You Like To Play Again?\n");
    printf("\n1)Yes To Play Again\n2)No To End Session\n");
    scanf("%d", &choice);
    clearKeyboardBuffer();

    while (choice != 1 && choice != 2) {
        printf("\nPlease Enter a Valid Number As A Choice\n");
        printf("\n1)Yes To Play Again\n2)No To End Session\n");
        scanf("%d", &choice);
        clearKeyboardBuffer();
    }

    if (choice == 1) {
        printf("\nYou Choose To Play Again!\n");
        evil_game();

    }
    else {
        printf("\nGuess We're Done\n");
    }

}

void clearKeyboardBuffer(void) {
    char ch;
    int ret;
    ret = scanf("%c", &ch);
    while (ret == 1 && ch != '\n' && ch != '\0') {
        ret = scanf("%c", &ch);
    }
}