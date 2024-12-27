#include <iostream>

void DrawBoard(char Board[3][3]){
  	std::cout << "-------------\n";
	for (int i = 0; i < 3; i++){
		std::cout << "| ";
		for (int j = 0; j < 3; j++){
			std::cout << Board[i][j] << " | ";
		}
	
	std::cout << "\n-------------\n";
	
	}
}

bool checkWin(char board[3][3], char player){
	for (int i = 0; i < 3; i++){
		if (board [i][0] == player && board[i][1] == player && board[i][2] == player)
			return true;
		if (board [0][i] == player && board[1][i] == player && board[2][i] == player)
			return true;
	}
	if (board[0][0] == player && board[1][1] == player && board [2][2] == player)
		return true;
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
		return true;
	
	return false;
}

int main(){
	char Board[3][3]{
		' ', ' ', ' ',
		' ', ' ', ' ',
		' ', ' ', ' '
	};
	char player = 'X';
	int i, j;
	int turn;

	std::cout << "Bem-vindo ao jogo da velha!\n";

	for (turn = 0; turn <9; turn++){
		DrawBoard(Board);
		while(true){
			std::cout << "Escolha a posiçao para entrar " << player;
			std::cin >> i  >> j;
			--i;
			--j;
			break;
		}
		
		Board[i][j] = player;
		if (checkWin(Board, player)){
			DrawBoard(Board);
			std::cout << "O jogador " << player << "venceu!\n";
			break;
		}
		player = (player == 'X') ? 'O' : 'X';
	}
	DrawBoard(Board);
	if (turn == 9 && !checkWin(Board, 'X') && !checkWin(Board, 'O')){
		std::cout << "Empate!\n";
	}
	return 0;
}
