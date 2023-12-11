#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void Draw(const char* string) {
	cout << string << endl;
}

int main() {
	
	list<const char*> yamanoteLine{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		//"Nishi-Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		//"TakanawaGateway",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho",
	};

	cout << "1970年----------------------------------------------------------------------------" << endl;
	for_each(yamanoteLine.begin(), yamanoteLine.end(), Draw);

	list<const char*>::iterator itr;
	itr = yamanoteLine.begin();
	// 西日暮里を追加
	for (list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	cout << "2019年----------------------------------------------------------------------------" << endl;
	for_each(yamanoteLine.begin(), yamanoteLine.end(), Draw);

	// 高輪ゲートウェイを追加
	for (list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "TakanawaGateway");
			++itr;
		}
	}
	cout << "2022年----------------------------------------------------------------------------" << endl;
	for_each(yamanoteLine.begin(), yamanoteLine.end(), Draw);

	system("pause");

	return 0;
}