#include <iostream>

using namespace std;

class DrawTree
{
public:
	virtual void Draw()
	{
		cout << " /\\ " << endl;
	}
};

class DrawLine : public DrawTree
{
	void Draw()
	{
		DrawTree::Draw();
		cout << "//\\\\" << endl;
	}
};

class DrawPlus : public DrawTree
{
	void Draw()
	{
		DrawTree::Draw();
		cout << "/++\\" << endl;
	}
};

class DrawStar : public DrawTree
{
	void Draw()
	{
		DrawTree::Draw();
		cout << "/**\\" << endl;
	}
};

int main()
{
	DrawTree** drawers = new DrawTree*[3];

	drawers[0] = new DrawLine();
	drawers[2] = new DrawPlus();
	drawers[1] = new DrawStar();

	for (int i = 0; i < 3; i++)
	{
		cout << "Drawing " << i + 1 << ":" << endl;
		drawers[i]->Draw();
	}

	return 0;
}