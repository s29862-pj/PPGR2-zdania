#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int monthNumber;
	cout << "Wpisz numer reprezętujący miesiąc (1-12):";
	cin >> monthNumber;

	if (monthNumber < 1 || monthNumber > 12) {
		cout << "Zły numer!" << endl;
		return 1;
	}

	string monthName;
	switch (monthNumber) {
		case 1: monthName = "Styczen"; break;
		case 2: monthName = "Luty"; break;
		case 3: monthName = "Marzec"; break;
		case 4: monthName = "Kwiecien"; break;
		case 5: monthName = "Maj"; break;
		case 6: monthName = "Czerwiec"; break;
		case 7: monthName = "Lipiec"; break;
		case 8: monthName = "Sierpien"; break;
		case 9: monthName = "Wrzesien"; break;
		case 10: monthName = "Pazdziernik"; break;
		case 11: monthName = "Listopad"; break;
		case 12: monthName = "Grudzien"; break;
	}

	int daysInMonth;
	switch (monthNumber) {
		case 4: case 6: case 9: case 11:
			daysInMonth = 30;
			break;
		case 2:
			daysInMonth = 28;
			break;
	}

	string weatherStatus = (monthNumber >= 4 && monthNumber <= 9) ? "sunny" : "cloudy";

	cout << "Month: " << monthName << endl;
	cout << "Days in the month (non-leap year): " << daysInMonth << endl;
	cout << "Weather: " << weatherStatus << endl; 

	return 0;
}

