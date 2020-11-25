#include <iostream>
using namespace std;

int main() {
	string board[4][4] = ["1", "2", "3", "4"]["1", "2", "3", "4"]["1", "2", "3", "4"]["1", "2", "3", "4"];
	bool win = player_win(board);

	if (win = true) {
		cout << "win";
	}
	else {
		cout << "loss";
	}
}

bool player_win(string board[4][4]) {
	bool win = false;
	for (int i = 0; i < 4; i++) {
		if (board[i][0] == board[i][1] == board[i][2]== board[i][3]) {
			win = true;
		}
		if(board[0][i] == board[1][i] == board[2][i] == board[3][i]){
			win = true;
		}
	}
	if (board[0][0] == board[1][1] == board[2][2] == board[3][3]) {
		win = true;
	}
	else if (board[0][3] == board[1][2] == board[2][1] == board[3][0]) {
		win = true;
	}
	return win;
}