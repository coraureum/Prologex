#include <iostream>

void Desenharquadro(char board[3][3]){
	std::cout << "-------------\n";
	for (int i = 0; i<=2; i++){
		std::cout << "| ";
		for (int j = 0; j<=2; j++){
			std::cout << board[i][j]<< " | ";

		}
		std::cout << "\n-------------\n"; 
	}
	std::cout  << '\n';
}

bool ChecaVitoria(char Board[3][3], char player ){
	for (int i = 0; i<=2; i++){
		if (Board[i][0] == player && Board[i][1] == player && Board[i][2] == player)
			return true;
		
		if (Board [0][i] == player && Board [1][i] == player && Board[2][i] == player)
				return true;
		
	}
		if (Board[0][0] == player && Board [1][1]  == player && Board[2][2] == player)
			return true;
		if (Board[0][2] == player && Board[1][1] == player && Board[2][0] == player)
			return true;
	
	return false;
}
int main (){
	char Board[3][3] = { ' ', ' ', ' ', 
		' ', ' ', ' ',
	' ', ' ', ' '};
	int turn;
	int i, j;
	char Player = 'X';
	for (turn = 0; turn < 9; turn++){
		Desenharquadro(Board);
		while (true){
			std::cout <<"Insira a posiçao para o jogador " << Player;
			std::cin >> i >> j;
			--i;
			--j;
			break;	
		}
		if (Board[i][j] != ' '){
			std::cerr << "Posicao ja ocupada!\n";	
			--turn;
			Player = (Player == 'X') ? 'O' : 'X';	
		}
		else{
			Board[i][j]  = Player;
		}
		if (ChecaVitoria(Board, Player)){
			Desenharquadro(Board);
			std::cout << "O jogador " << Player << " vence!\n";
			break;
		}	
		Player = (Player == 'X') ? 'O' : 'X';
	}
	Desenharquadro(Board);
	
	return 0;
}
