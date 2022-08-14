#include <bits/stdc++.h>
using namespace std;

/***********************Print sudoku******************************************/
void printSudoku(int arr[100][100], int num)
{
	int row = num;
	int col = num;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
/*********************************Check whether a number is kept or not************************/
bool isRightPlace(int arr[100][100], int num, int value, int curr_row, int curr_col)
{

	// Check for col
	for (int i = 1; i <= num; i++)
	{
		if (arr[i][curr_col] == value)
		{
			return false;
		}
	}
	// Check for row
	for (int j = 1; j <= num; j++)
	{
		if (arr[curr_row][j] == value)
		{
			return false;
		}
	}
	// Check for cell
	int top_left_row = ((ceil(curr_row / floor(sqrt(num))) - 1) * (floor(sqrt(num)))) + 1;
	int top_left_col = ((ceil(curr_col / floor(sqrt(num))) - 1) * (floor(sqrt(num)))) + 1;
	int bottom_right_row = top_left_row + (floor(sqrt(num)) - 1);
	int bottom_right_col = top_left_col + (floor(sqrt(num)) - 1);
	for (int i = top_left_row; i <= bottom_right_row; i++)
	{
		for (int j = top_left_col; j <= bottom_right_col; j++)
		{
			if (arr[i][j] == value)
			{
				return false;
			}
		}
	}

	return true;
}
/******************Function to solve sudoku************************************/
bool sudoku_solve(int arr[100][100], int num, int curr_row, int curr_col)
{
	if (curr_row > num)
	{
		printSudoku(arr, num);
		return true;
	}
	else if (curr_col > num)
	{
		return sudoku_solve(arr, num, curr_row + 1, 1);
	}
	for (int i = 1; i <= (num); i++)
	{
		int value = i;
		if (arr[curr_row][curr_col] == 0)
		{
			if (isRightPlace(arr, num, value, curr_row, curr_col))
			{
				arr[curr_row][curr_col] = value;
				bool res = sudoku_solve(arr, num, curr_row, curr_col+1);
				if (res == true)
				{
					return true;
				}
				else
				{
					arr[curr_row][curr_col] = 0;
					// continue;
				}
			}
		}
		else{
			bool res = sudoku_solve(arr, num, curr_row, curr_col+1);
			if (res == true)
				{
					return true;
				}
				else {
					return false;
				}
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int arr[100][100] = {0};
	int num;
	cin >> num;
	// Take input from user:
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << sudoku_solve(arr, num, 1, 1) << endl;
	// Take input from user:
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
