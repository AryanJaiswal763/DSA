#include <iostream>
#include <unordered_map>

using namespace std;

struct Player {
    int runs;
    int wickets;
};

int main() {
    // Define a map to store player names and their scores
    unordered_map<int, int> playerScores;

    // Define an array of players
    Player players[22];

    // Input player data
    for (int i = 0; i < 22; ++i) {
        cout << "Enter runs scored by Player " << i+1 << ": ";
        cin >> players[i].runs;
        cout << "Enter wickets taken by Player " << i+1 << ": ";
        cin >> players[i].wickets;

        // Calculate score for each player
        int score = players[i].runs + (players[i].wickets * 20);

        // Store the score in the map
        playerScores[i] = score;
    }

    // Find the player index with maximum score
    int maxPlayerIndex = 0;
    int maxScore = 0;

    for (auto& pair : playerScores) {
        if (pair.second > maxScore) {
            maxScore = pair.second;
            maxPlayerIndex = pair.first;
        }
    }

    // Output the index of the player with maximum score
    cout << "Player with maximum score is Player " << maxPlayerIndex + 1 << " with score: " << maxScore << endl;

    return 0;
}
