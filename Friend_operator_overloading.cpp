#include <iostream>


using namespace std;

class coin
{
private:
	int coins;
public:
	coin(int coin) { coins = coin; }
	// add coin + coin using a friend function
	friend coin operator+(const coin &c1, const coin &c2);
	int getcoin() const { return coins; }
};
// note: this function is not a member function!
coin operator+(const coin &c1, const coin &c2)
{	// use the coin constructor and operator+(int, int)
	// we can access coins directly because this is a friend function
	return coin(c1.coins + c2.coins);
}

int main()
{
	coin coin1(6);
	coin coin2(8);
	coin coinSum = coin1 + coin2;
	cout << "I have " << coinSum.getcoin() << " coin." << endl;
	return 0;
}
