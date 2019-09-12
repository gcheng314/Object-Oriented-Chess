/**************************************************
Object-Oriented Chess
Author: Gong Cheng

To do:
	- define equality operator of pieces
	- make the board
	- implement player turns
	- implemetnt piece movement 
	- implement checkmate

***************************************************/

#include <iostream>
#include <string>

class piece {		// parent class of chess pieces
protected: 
	char colour;	// piece colour
};

class king : public piece {
private:			// private member variables
	square start; // this member variable is used for identifying specific pieces
	square current;
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

class square {
private:
	char letter;
	int number;

};

class move {
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

bool check_legal_move(move m) {
	
}

void capture(piece protagonist, piece antagonist) {

}

class chess_board {
	

};

int main() {
	return 0;
	system("pause");
}