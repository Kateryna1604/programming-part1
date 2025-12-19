#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 20
#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    int age;
    char position[MAX_NAME];
} Player;

typedef struct {
    char name[MAX_NAME];
    int experience; // years of experience
} Coach;

typedef struct {
    char teamName[MAX_NAME];
    Player players[MAX_PLAYERS];
    int playerCount;
    Coach coach;
    int hasCoach;
} Team;

// Adds a player to the team
void addPlayer(Team *team, Player player) {
    if (team->playerCount < MAX_PLAYERS) {
        team->players[team->playerCount++] = player;
    } else {
        printf("The team is full!\n");
    }
}

// Assigns a coach to the team
void assignCoach(Team *team, Coach coach) {
    team->coach = coach;
    team->hasCoach = 1;
}

// Lists all players in the team
void listPlayers(const Team *team) {
    printf("\nTeam: %s\n", team->teamName);

    if (team->hasCoach) {
        printf("Coach: %s (%d years of experience)\n",
               team->coach.name, team->coach.experience);
    } else {
        printf("No coach assigned\n");
    }

    printf("\nPlayers:\n");
    for (int i = 0; i < team->playerCount; i++) {
        printf("%d. %s, %d years old, position: %s\n",
               i + 1,
               team->players[i].name,
               team->players[i].age,
               team->players[i].position);
    }
}

int main() {
    Team team;
    strcpy(team.teamName, "FC Programmers");
    team.playerCount = 0;
    team.hasCoach = 0;

    Coach coach = {"John Smith", 12};
    assignCoach(&team, coach);

    Player p1 = {"Alex Johnson", 22, "Forward"};
    Player p2 = {"Michael Brown", 24, "Defender"};
    Player p3 = {"Andrew Wilson", 21, "Goalkeeper"};

    addPlayer(&team, p1);
    addPlayer(&team, p2);
    addPlayer(&team, p3);

    listPlayers(&team);

    return 0;
}
