#include "Gameplay.h"
#include "getAvailableSquares.h"
#include "chessPiece.h"
#include "Board.h"
#include <iostream>
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>>

Gameplay::Gameplay() {

}

bool Gameplay::IsValidPositionChange(pair<ll, ll> startingPosition, pair<ll, ll> targetPosition, Board board1)
{

	getAvailableSquares  getAvailable = getAvailableSquares(board1.board[startingPosition.first][startingPosition.second], board1);

	vector<pair<ll, ll>>  ans = getAvailable.getSquares();

	for (auto elem : ans) {

		if (elem.first == targetPosition.first && elem.second == targetPosition.second) {

			return true;

			
		}

	}


	return false;
}

pair<pair<ll, ll>, pair<ll, ll>> Gameplay::InputStartingPositionAndTargetPosition()
{
	pair<ll, ll> StartingPosition, TargetPosition;
	
	cout << "Please enter the position of the piece you want to move" << endl;

	cin >> StartingPosition.first >> StartingPosition.second ;
	
	cout << "Please enter the position you want the piece to move to" << endl;

	cin >> TargetPosition.first >> TargetPosition.second;

	return {StartingPosition, TargetPosition};
}

void Gameplay::MovePiece(pair<ll, ll> startingPosition, pair<ll, ll> targetPosition, Board board1)
{
	chessPiece currentPiece = board1.board[startingPosition.first][startingPosition.second];
	board1.board[targetPosition.first][targetPosition.second] = currentPiece;

}
