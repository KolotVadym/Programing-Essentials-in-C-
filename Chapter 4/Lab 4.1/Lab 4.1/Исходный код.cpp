#include <iostream>
using namespace std;
int numOfCource()
{
	int num;
	cin >> num;
	return num;
}
int**GetGrades(int num)
{
	int**AllGrades = new int*[num];
	int numOfMarks;
	for (int i = 0; i < num; i++)
	{
		//cout << endl;

		cin >> numOfMarks;
		AllGrades[i] = new int[numOfMarks];
		for (int j = 0; j < numOfMarks; j++)
		{
			//cout << " ";
			cin>>AllGrades[i][j];

		}
	}
	/*int rows = 5, cols = 5;
	int **AllGrades;
	AllGrades = new int *[rows];
	for (int r = 0; r < rows; r++) 
	{
		AllGrades[r] = new int[r + 1];
		for (int c = 0; c <= r; c++)
			AllGrades[r][c] = (r + 1) * 10 + c + 1;
	}*/
		return AllGrades;
}
double arifmean(int* arr)
{
	double sum = 0;
	int i;
	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		sum += arr[i];
	}
	return sum / i;
}
void gradesofcource(int* arr)
{
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		cout<<arr[i]<<" ";
	}
}
void Show(int **grades, int numofcources)
{
	double s=0;
	int i;
	for (i=0; i < numofcources; i++)
	{
		cout << "Course :"<<i+1<<" final " << arifmean(grades[i]) << ", grades :";
		gradesofcource(grades[i]);
		cout << endl;
	}
	for (int j = 0; j < numofcources; j++)
	{
		s+=arifmean(grades[j]);
	}
	cout << "Overall final :" << s/i<<endl;
}
int main() 
{
	int GetCources = numOfCource();
	int ** Grades = GetGrades(GetCources);
	Show(Grades,GetCources);
	return 0;
}