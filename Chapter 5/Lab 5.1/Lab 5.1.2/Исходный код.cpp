#include <iostream>
#include <string>
using namespace std;
class Square
{
private:
	double side;
	double area;
public:
	void Set_side(double sd)
	{
		if (sd > 0)
		{
			this->side = sd;
			this->area = sd*sd;
			cout << "Square: side=" << this->side << " area=" << this->area << endl;
		}
	}

	// Your code here
};
int main()
{
	Square se;
	se.Set_side(4);
	se.Set_side(2.0);
	se.Set_side(-33.0);
		return 0;
}