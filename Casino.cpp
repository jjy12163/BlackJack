#include "card.h"
#include "person.h"
#include "game.h"

using namespace std;

int main()
{


	cout << "�ܼ� ī�� ������ �����Ͻ÷��� 1, ���� ������ �����Ͻ÷��� 2�� �����ּ���.";
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
		cout << "1 �Ǵ� 2�� �Է��� �ּ���";

	return 0;
}