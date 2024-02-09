#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// Функция для нахождения всех возможных комбинаций карт у игроков и определения вероятности победы
pair<double, double> find_combinations(vector<vector<string>>& player1_cards, vector<vector<string>>& player2_cards) {
    double total_combinations = 0;
    double player1_wins = 0;
    double player2_wins = 0;

    for (auto& hand1 : player1_cards) {
        for (auto& hand2 : player2_cards) {
            total_combinations += 1;
            // Сравниваем значения карт для определения победителя
            if (hand1 > hand2) {  
                player1_wins += 1;
            } else if (hand2 > hand1) {
                player2_wins += 1;
            }
        }
    }

    double player1_probability = (player1_wins / total_combinations) * 100;
    double player2_probability = (player2_wins / total_combinations) * 100;

    return make_pair(player1_probability, player2_probability);
}

int main() {
    vector<vector<string>> player1_cards = {
        {"2", "3"},
        {"Hearts", "Diamonds"}
    };
    vector<vector<string>> player2_cards = {
        {"2", "3"},
        {"Diamonds", "Hearts"}
    };

    pair<double, double> probabilities = find_combinations(player1_cards, player2_cards);

    cout << "Player 1 has a " << fixed << probabilities.first << "% chance of winning." << endl;
    cout << "Player 2 has a " << fixed << probabilities.second << "% chance of winning." << endl;

    return 0;
}