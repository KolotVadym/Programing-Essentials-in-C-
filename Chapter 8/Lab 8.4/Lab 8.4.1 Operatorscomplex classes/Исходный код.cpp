#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>


using namespace std;

class node
{
	int val;
	node* right = nullptr;
	node* left = nullptr;
public:
	node(int val = 0);

	node* getchildl();
	node* getchildr();
	int getval();

	void setchildl(node* child);
	void setchildr(node* child);
	void setval(int val);

	string inorder();
	string postorder();
	string preorder();

	friend ostream& operator<<(ostream& os, node* node);
};
node::node(int val)
{
	this->val = val;
}

node* node::getchildl()
{
	return this->left;
}

node* node::getchildr()
{
	return this->right;
}

void node::setchildl(node* child)
{
	this->left = child;
}

void node::setchildr(node* child)
{
	this->right = child;
}

void node::setval(int val)
{
	this->val = val;
}

int node::getval()
{
	return this->val;
}

string node::inorder()
{
	string k = "";
	if (this->getchildl() != nullptr)
	{
		k += this->getchildl()->inorder();
	}
	k += to_string(this->getval()) + " ";
	if (this->getchildr() != nullptr)
	{
		k += this->getchildr()->inorder() + " ";
	}
	return k;
}

string node::postorder()
{
	string k = "";
	if (this->getchildl() != nullptr)
	{
		k += this->getchildl()->postorder() + " ";
	}
	if (this->getchildr() != nullptr)
	{
		k += this->getchildr()->postorder() + " ";
	}
	k += to_string(this->getval());
	return k;
}

string node::preorder()
{
	string k = "";
	k += to_string(this->getval()) + " ";
	if (this->getchildl() != nullptr)
	{
		k += this->getchildl()->preorder();
	}
	if (this->getchildr() != nullptr)
	{
		k += this->getchildr()->preorder();
	}
	return k;
}
ostream& operator<<(ostream& os, node* node)
{
	os << node->getchildl()->getval() << endl << node->getval() << endl << node->getchildr()->getval();
	return os;
}


int main()
{
	node* a = new node;
	node* b = new node;
	node* c = new node;
	node* d = new node;
	int w, x, y, z;
	cin >> w >> x >> y >> z;
	a->setval(w);
	b->setval(x);
	c->setval(y);
	d->setval(z);

	a->setchildl(b);
	a->setchildr(c);
	b->setchildl(d);

	cout << "Inorder: " << a->inorder() << endl;
	cout << "Postorder: " << a->postorder() << endl;
	cout << "Preorder: " << a->preorder() << endl;

}