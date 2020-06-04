#include <iostream>
#include <cmath>
using namespace std;
class Function
{
protected:
	float x;
	float rad = 57.2958;
public:
	void setX(float _x) { x = _x; };
	virtual float calculation() = 0;
};
class Cosinus :public Function {
public:
	float calculation() {
		float ans = x / rad;
		cout<< cos(ans);
		return cos(ans);
	}
};
class Sinus :public Function {
public:
	float calculation() {
		float ans = x / rad;
		cout << sin(ans);
		return sin(ans);
	}
};
class PohidnaSin :public Function {
public:
	float calculation() {
		float ans = x / rad;
		cout << cos(ans);
		return cos(ans);
	}
};
class PohidnaCos :public Function {
public:
	float calculation() {
		float ans = x / rad;
		cout << -sin(ans);
		return -sin(ans);
	}
};
int main()
{
	bool bam = true;
	while (bam) {
		cout << "\ninput which function you want to use:\n1.Cosinus\n2.Sin\n3.Cosine derivative\n4.Sinus derivative\n5.Leave\nInput your choise - ";
		int choise;
		cin >> choise;
		if (choise > 5 || choise < 0) {
			cout << "Not correct data";
			continue;
		}
		else if (choise == 5) {
			bam = false;
			break;
		}
		float deegre;
		cout << "Input degrees - ";
		cin >> deegre;
		if (choise == 1) {
			Cosinus cosin;
			cosin.setX(deegre);
			cosin.calculation();
		}
		else if (choise == 2) {
			Sinus sinus;
			sinus.setX(deegre);
			sinus.calculation();
		}
		else if (choise == 3) {
			PohidnaCos pohidcos;
			pohidcos.setX(deegre);
			pohidcos.calculation();
		}
		else if (choise == 4) {
			PohidnaSin pohidsin;
			pohidsin.setX(deegre);
			pohidsin.calculation();
		}
		

	}
	

    
}

