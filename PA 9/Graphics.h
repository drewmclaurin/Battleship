#include <stdio.h>

class Graphics {
private:

	Board player;
	Board Tracking;

public:
	void DisplayBoardHidden();
	void DisplayBoardTrue();
	void DisplayShip();
	void DisplayBackground();
	void playerUI();
};