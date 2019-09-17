/**************************************************
Object-Oriented Chess
Author: Gong Cheng

To do:
	- print the board			<======== how to convert class to string
	- implement player turns
	- implemetnt piece movement 
	- implement checkmate

***************************************************/

#include <iostream>
#include <string>
using namespace std;

class player {
private: 
	bool current_turn = false;
	char colour;
};

class square {
private:
	char letter;
	int number;

public:
	square(char letter = 'z', int number = 0) {
		
		this->letter = letter;              // Problematic to represent and print the class as a string
		this->number = number;

	}
	string to_string() {
		string str_letter;
		string str_num;
		str_letter = letter;
		str_num = number;

		return this->str_letter + this->str_num;
	
	}

};

class chessBoard {
public:
	square board[8][8] = { {square('A', 1), square('A', 2), square('A', 3), square('A', 4), square('A', 5), square('A', 6), square('A', 7), square('A', 8)},
						{square('B', 1), square('B', 2), square('B', 3), square('B', 4), square('B', 5), square('B', 6), square('B', 7), square('B', 8)},
						{square('C', 1), square('C', 2), square('C', 3), square('C', 4), square('C', 5), square('C', 6), square('C', 7), square('C', 8)},
						{square('D', 1), square('D', 2), square('D', 3), square('D', 4), square('D', 5), square('D', 6), square('D', 7), square('D', 8)},
						{square('E', 1), square('E', 2), square('E', 3), square('E', 4), square('E', 5), square('E', 6), square('E', 7), square('E', 8)},
						{square('F', 1), square('F', 2), square('F', 3), square('F', 4), square('F', 5), square('F', 6), square('F', 7), square('F', 8)},
						{square('G', 1), square('G', 2), square('G', 3), square('G', 4), square('G', 5), square('G', 6), square('G', 7), square('G', 8)},
						{square('H', 1), square('H', 2), square('H', 3), square('H', 4), square('H', 5), square('H', 6), square('H', 7), square('H', 8)} };
};

class piece {		// parent class of chess pieces
protected: 
	char colour;	// piece colour
};

class king : public piece {
private:			// private member variables
	square start;   // this member variable is used for identifying specific pieces
	square current; // to be updated as the game progresses
	bool is_in_check = false;

public:
	bool can_capture(piece opponent) {
	}
};

class queen : public piece {
private:
	square start;
	square current;
	int value; 
	bool is_captured;

public:

	bool can_capture(piece opponent) {
	}

};

class rook : public piece {
private:
	square start;
	square current;
	int value;
	bool is_captured;

public:
	bool can_capture(piece opponent) {

	}

};

class bishop : public piece {
private:
	square start;
	square current;
	int value;
	bool is_captured;

public:
	bool can_capture(piece opponent) {

	}

};

class knight : public piece {
private:
	square start;
	square current;
	int value;
	bool is_captured;

public:
	bool can_capture(piece opponent) {

	}
};

class pawn : public piece {
private:
	square start;
	square current;
	int value;
	bool is_captured;

public:
	bool can_capture(piece opponent) {

	}

};



class playerMove {
private:
	piece Piece;
	square start;
	square end;

public:
	piece get_piece() {
		return Piece;
	}
	
	square get_start() {
		return start;
	}
	
	square get_end() {
		return end;
	}
};

bool check_legal_move(playerMove m) {
	return 0;
}

void capture(piece protagonist, piece antagonist) {

	
}


int main() {
	return 0;
}
