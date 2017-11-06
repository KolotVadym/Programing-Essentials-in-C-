#include <cmath>
#include <iostream>

using namespace std;
int main()
{
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare;
	double a=0;
	// Insert your code here
	for (int i = 0; i < n; i++)
	{
		a += vector[i];
	}
	ArithmeticMean = a / n;
	a = 0;
	for (int i = 0; i < n; i++)
	{
		a += 1 / vector[i];
	}
	HarmonicMean = n / a;
	a = 1;
	for (int i = 0; i < n; i++)
	{
		a *= vector[i];
	}
	GeometricMean = pow(a,1.0/n);
	a = 0;
	for (int i = 0; i < n; i++)
	{
		a += pow(vector[i], 2);
	}
	RootMeanSquare = sqrt(a / n);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean = " << HarmonicMean << endl;
	cout << "Geometric Mean = " << GeometricMean << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;
	cout << endl;
	cin >> n;
	return 0;
}