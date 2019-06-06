#include <iostream>
#include <string>

using namespace std;
char board[9] = {};            

void clearscreen()               
{
	for (int i = 0; i < 100; i++)  
	{
		cout << endl;
	}
}

void clearboard()           
{
	for (int i = 0; i < 9; i++) 
	{
		board[i] = '-';  
	}

}

bool has_wonQ(char player)                                    
{
	int wins[][3] = { {0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, 
		{2,5,8}, {0,4,8}, {2,4,6}};
	for (int i = 0; i < 8; i++)     
	{
		int count = 0;        
		for (int j = 0; j < 3; j++) {
			if (board[wins[i][j]] == player)
				count++;
		}
		if (count == 3) 	{
			return true;
		}
	}
	return false;   
}


void print_board(string indent) 
{
	cout << "Game board\n";        
	cout << indent << "-" << board[6] << "-|-" << board[7] << "-|-" << board[8] << "- \n";
	cout << indent << "-" << board[3] << "-|-" << board[4] << "-|-" << board[5] << "- \n";
	cout << indent << "-" << board[0] << "-|-" << board[1] << "-|-" << board[2] << "- \n"; 
}


int get_move()
{
	cout << "\nHod: \n";     
	cout << "-7-|-8-|-9-" << endl;
	cout << "-4-|-5-|-6-" << endl;
	cout << "-1-|-2-|-3-" << endl;
	cout << "\n";                     

	print_board("");
	cout << "\nVvod chisla: ";


	int move;
	cin >> move;
	while (move > 9 || move < 1 || board[move - 1] != '-') {
		cout << "Vvedite chislo ot (1 do 9):\n";
		cin >> move;

	}
	return move;
}

char play_and_get_winner() 
{
	int turn = 1;

	while (!has_wonQ('X') && !has_wonQ('0')) 
	{
		clearscreen();
		int move = get_move();

		clearscreen();  
		if (turn % 2 == 1)
		{
			board[move - 1] = 'X';
			if (has_wonQ('X')) 
			{
				cout << "X,Pozdravlyau vi vuigrali!\n";
				return 'X'; 
			}

		}
		else                     
		{
			board[move - 1] = '0';
			if (has_wonQ('0')) 
			{
				cout << "O, Pozdravlyau vi vuigrali!\n";
				return '0';       
			}
		}
		turn++;               
		if (turn == 10)       
		{
			cout << "nechya\n";
			return 'D';            
		}
	}
}
int main()                         
{

	string reply = "y";
	int x_wins = 0, o_wins = 0, ties = 0;

	while (reply == "y") 
	{
		clearboard();
		char winner = play_and_get_winner();
		print_board("\t  ");

		switch (winner)
		{
		case 'X':    
			x_wins++; 
			break;    
		case '0':     
			o_wins++; 
			break;     
		case 'D':     
			ties++;    
			break;     
		}

		cout << "\n\t*Winer statistic*\nPlayer X: " << x_wins
			<< ", Player 0: " << o_wins << " and Ties: " << ties << "\n\n";
		cout << "\n would you like to play again? (y/n): ";
		cin >> reply;
		while (reply != "y" && reply != "n") 
		{
			cout << "please enter a valid reply (y/n):";		cin >> reply;}

	}


	return 0;
}
