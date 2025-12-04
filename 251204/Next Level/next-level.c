#include <stdio.h>
#include <stdlib.h>

struct Warrior
{
    char *id;
    int level;
};
struct Warrior warrior = {"codetree", 10};

int main()
{
    char input_id[101];
    int input_level;

    scanf("%s %d", input_id, &input_level);

    printf("user %s lv %d\n", warrior.id, warrior.level);

    warrior.id = input_id;
    warrior.level = input_level;

    printf("user %s lv %d\n", warrior.id, warrior.level);

    return 0;
}