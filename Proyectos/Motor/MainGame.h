#pragma once
#include<SDL\SDL.h>
#include <GL\glew.h>

//State machine to know the state of the game
//Normally a game is in a infinite loop
//But have an ending condition, here is where we use this state machine
enum class GameState {
	PLAY,
	EXIT
};

class MainGame{
private:
	//Width and height for window
	int width;
	int height;
	//Pointing to a window
	SDL_Window*window; 
	void init();
public:
	MainGame();
	GameState gameState;
	~MainGame();

	void run();
	void draw();
	void update();
	void processInput();
	void mousePress(SDL_MouseButtonEvent& button);
};