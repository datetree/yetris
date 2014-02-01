#ifndef GAMEMODE_H_DEFINED
#define GAMEMODE_H_DEFINED

#include <Interface/LayoutGame.hpp>

/// An abstract interface to any possible game mode.
class GameMode
{
public:

	GameMode(LayoutGame* layout);
	virtual ~GameMode();

	/// Starts (and restarts) the game.
	///
	/// @note Should be safe to be called several times.
	virtual void start() = 0;

	/// Uses #c to control the game.
	virtual void handleInput(int c) = 0;

	/// Updates internal game state.
	virtual void update() = 0;

	/// Shows everything on the screen, printing on the
	/// available Windows on #layout.
	virtual void draw() = 0;

	/// Tells if the game ended.
	virtual bool isOver() = 0;

	/// Tells that we need to quit right now.
	virtual bool willQuit() = 0;

protected:
	LayoutGame* layout;
};

#endif //GAMEMODE_H_DEFINED
