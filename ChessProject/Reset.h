#pragma once
#include "Reset.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Board.h"
#include "chessPiece.h"
#include "getAvailableSquares.h"
#include "Gameplay.h"
class Reset
{
public:
	void restart();
};

