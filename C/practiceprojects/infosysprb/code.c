#include <stdio.h>

int validate_team(int teamarr[], int p1, int p2, int p3, int p4, int p5) {
    int chelsea = 0, liverpool = 0, united = 0;
    int players[5] = {p1, p2, p3, p4, p5};

    for(int i = 0; i < 5; i++) {
        if (teamarr[players[i]] == 1) chelsea++;
        else if (teamarr[players[i]] == 2) liverpool++;
        else if (teamarr[players[i]] == 3) united++;
    }

    if (chelsea <= 2 && liverpool <= 2 && united <= 1) {
        return 1;
    }
    return 0;
}

int check_all_dream_teams(int teamarr[]) {
    if (!validate_team(teamarr, 3, 9, 7, 1, 12)) return 0;
    if (!validate_team(teamarr, 12, 11, 13, 6, 9)) return 0;
    if (!validate_team(teamarr, 6, 3, 5, 11, 7)) return 0;
    if (!validate_team(teamarr, 2, 10, 7, 6, 1)) return 0;
    if (!validate_team(teamarr, 1, 4, 16, 11, 10)) return 0;
    if (!validate_team(teamarr, 6, 3, 7, 15, 12)) return 0;
    if (!validate_team(teamarr, 2, 9, 12, 14, 15)) return 0;
    if (!validate_team(teamarr, 4, 8, 13, 11, 10)) return 0;
    return 1;
}

void solve(int teamarr[], int player_id) {
    if (player_id > 16) {
        for(int i = 1; i <= 16; i++) {
            printf("Player F%d -> ", i);
            if (teamarr[i] == 1) printf("Chelsea\n");
            else if (teamarr[i] == 2) printf("Liverpool\n");
            else if (teamarr[i] == 3) printf("United\n");
        }
        return;
    }

    if (player_id == 2 || player_id == 7 || player_id == 9) {
        solve(teamarr, player_id + 1);
        return;
    }

    for (int t = 1; t <= 3; t++) {
        if (player_id == 12 && t == 3) continue;

        teamarr[player_id] = t;

        if (check_all_dream_teams(teamarr)) {
            solve(teamarr, player_id + 1);
        }

        teamarr[player_id] = 0;
    }
}

int main(void) {
    int player_teams[17] = {0};

    player_teams[7] = 1;
    player_teams[2] = 2;
    player_teams[9] = 2;

    solve(player_teams, 1);

    return 0;
}
