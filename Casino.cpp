#include "card.h"
#include "person.h"
#include "game.h"

using namespace std;

int main()
{


	cout << "단순 카드 게임을 진행하시려면 1, 블랙잭 게임을 진행하시려면 2를 눌려주세요.";
	int a;
	cin >> a;
	if (a == 1) {
		GameA gamea;
		gamea.play();
	}
	else if (a == 2) {
		GameB gameb;
		gameb.play();
	}
	else
		cout << "1 또는 2만 입력해 주세요";

	return 0;
}