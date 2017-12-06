#pragma hdrstop
//---------------------------------------------------------------------------
#include <iostream>
#include <conio.h>
using namespace std;
///////////////////////////////////////////////////////////
enum { Maxn = 3 }; //Максимальное количевство элементов в массиве
enum { Maxm = 3 }; //Максимальное количевство элементов в массиве
int mass[Maxn][Maxm];
class game {
private:
	int x;
	int y;
	bool a;
	int b;
	char znac1, znac2, znac3, znac4, znac5, znac6, znac7, znac8, znac9;
public:
	int init()
	{
		a = true;    //pl X
		for (int i = 0; i <= 3; i++)
		{
			for (int j = 0; j <= 3; j++)
			{
				return mass[i][j] = 46;
			}
		}
	}
	//Вывод таблицы
	void show_table()
	{
		cout << "(00) (01) (02)" << endl;
		cout << endl;
		cout << "(10) (11) (12)" << endl;
		cout << endl;
		cout << "(20) (21) (22)" << endl;
	}
	//Получение координат
	void give_coord()
	{
		if (a == true)
		{
			cout << endl << "Player X";
			b = 88;
			a = false;       //pl 0
		}
		else
		{
			cout << endl << "Player 0";
			b = 48;
			a = true;        //pl X
		}
		cout << endl << "Enter x: ";
		cin >> x;
		cout << endl << "Enter y: ";
		cin >> y;
		if ((mass[x][y] != 88) && (mass[x][y] != 48))
		{
			mass[x][y] = b;
		}
		else
		{
			cout << "error" << endl;
			if (a == true)
			{
				a = false;
			}
			else
			{
				a = true;
			}
		}
	}
	void show_res()
	{
		znac1 = mass[0][0];
		znac2 = mass[0][1];
		znac3 = mass[0][2];
		znac4 = mass[1][0];
		znac5 = mass[1][1];
		znac6 = mass[1][2];
		znac7 = mass[2][0];
		znac8 = mass[2][1];
		znac9 = mass[2][2];
		cout << "(" << znac1 << ") " << "(" << znac2 << ") " << "(" << znac3 << ")" << endl;
		cout << endl;
		cout << "(" << znac4 << ") " << "(" << znac5 << ") " << "(" << znac6 << ")" << endl;
		cout << endl;
		cout << "(" << znac7 << ") " << "(" << znac8 << ") " << "(" << znac9 << ")" << endl;
	}

	void winner()
	{
		if (((mass[0][0] == mass[0][1]) && (mass[0][0] == mass[0][2])) || ((mass[0][0] == mass[1][1]) && (mass[0][0] == mass[2][2])) || ((mass[0][0] == mass[1][0]) && (mass[0][0] == mass[2][0])))
		{
			if (mass[0][0] == 88)
			{
				cout << endl << "Winner is X";
			}
			if (mass[0][0] == 48)
			{
				cout << endl << "Winner is 0";
			}
			return;
		}
		else
		{
			if (((mass[0][1] == mass[1][1]) && (mass[0][1] == mass[2][1])) || ((mass[0][2] == mass[1][1]) && (mass[0][2] == mass[2][0])) || ((mass[1][0] == mass[1][1]) && (mass[1][0] == mass[1][2])))
			{
				if (mass[1][1] == 88)
				{
					cout << endl << "Winner is X";
				}
				if (mass[1][1] == 48)
				{
					cout << endl << "Winner is 0";
				}
				return;
			}
			else
			{
				if (((mass[0][2] == mass[1][2]) && (mass[0][2] == mass[2][2])) || ((mass[2][0] == mass[2][1]) && (mass[2][0] == mass[2][2])))
				{
					if (mass[2][2] == 88)
					{
						cout << endl << "Winner is X";
					}
					if (mass[2][2] == 48)
					{
						cout << endl << "Winner is 0";
					}
					return;
				}
				else
				{
					if ((mass[0][0] != 46) || (mass[0][1] != 46) || (mass[0][2] != 46) || (mass[1][0] != 46) || (mass[1][1] != 46) || (mass[1][2] != 46) || (mass[2][0] != 46) || (mass[2][1] != 46) || (mass[2][2] != 46))
					{
						cout << endl << "no one wins";
					}
				}
			}
		}
	}

};
#pragma argsused
int main(int argc, char* argv[])
{
	game cross_ziro;
	cross_ziro.init();
	cross_ziro.show_table();

	while ((mass[0][0] == 46) || (mass[0][1] == 46) || (mass[0][2] == 46) || (mass[1][0] == 46) || (mass[1][1] == 46) || (mass[1][2] == 46) || (mass[2][0] == 46) || (mass[2][1] == 46) || (mass[2][2] == 46))
	{
		cross_ziro.give_coord();
		cross_ziro.show_res();
		cross_ziro.winner();
	}

	return 0;
}