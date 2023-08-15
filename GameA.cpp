#include "game.h"



class GameA {
public:
	GameA() {
		cout << "단순 카드 게임을 시작하겠습니다." << endl;
		cout << "게임 규칙은 딜러와 플레이어가 각각 카드 1장씩 가진 다음, 카드를 열어 높은 숫자가 나온 쪽이 승리하는 규칙입니다." << endl;
		
		Player* player = new Player[3];
	}
	void play() {

		for (int i = 0; i < 3; i++) {
			
		}
	}
private:


};