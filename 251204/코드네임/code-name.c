#include <stdio.h>

typedef struct {
    char code_name;
    int score;
} User;

User users[5];

int main(){
    int i;
    for(i = 0; i < 5; i++){
        scanf(" %c %d", &users[i].code_name, &users[i].score);
    }
    
    int lowest_score_agent_index = 0;
    for (int i = 1; i < 5; i++) {
        if (users[i].score < users[lowest_score_agent_index].score)
            lowest_score_agent_index = i;
    }

    printf("%c %d", users[lowest_score_agent_index].code_name, users[lowest_score_agent_index].score);
    
    return 0;
}