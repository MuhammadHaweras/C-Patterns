#include <iostream>
using namespace std;
int main() {
	// Rectangular Star Pattern


	int rows, cols ,i,j;
	cout << "Enter No. of Rows: \n";
	cin >> rows;
	cout << "Enter No. of Cols:\n";
	cin >> cols;
	for (i = 1; i <= rows; i++) {
		for ( j = 1; j < cols; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


//================================================================================


	//Hollow Rectangular pattern




	int rows, cols, i, j;
	cout << "Enter No. of Rows: \n";
	cin >> rows;
	cout << "Enter No. of Cols:\n";
	cin >> cols;
	for (i = 1; i <= rows; i++) {
		for (int j = 1; j <= cols; j++) {
			if (i == 1 || i == rows || j == 1 || j == cols) {
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//==============================================================================


	//Inverted pyramid pattern



	int rows, i, j;
	cout << "Enter No. of Rows: \n";
	cin >> rows;
	for (i = rows; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}


	//=======================================================================


	//Half Pyramid after 180 deg rotation




	int rows;
	cout << "Enter Number Of Rows: \n";
	cin >> rows;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= rows; j++) {
			if (j <= rows - i) {
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
	}

	//==========================================================================



	//Pyramid Pattern with numbers




	int rows;
	cout << "Enter number of Rows: \n";
	cin >> rows;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}

//================================================================================



//Floud's Triangle with numbers


int rows;
int count = 1;
cout << "Enter number of Rows: \n";
cin >> rows;
for (int i = 1; i <= rows; i++) {
	for (int j = 1; j <= i; j++) {
		cout << count++ << " ";
	}
	cout << endl;
}



//================================================================================




//Butterfly Pattern


int rows, space;
cout << "Enter no of rows:\n";
cin >>rows;
for (int i = 1; i <= rows; i++) {
	for (int j = 1; j <= i; j++) {
		cout << "*";
	}
	space = 2 * rows - 2 * i;
	for (int j = 1; j <= space; j++) {
		cout << " ";
	}
	for (int j = 1; j <= i; j++) {
		cout << "*";
	}
	cout << endl;
}


  for (int i = rows; i >= 1; i--) {
	for (int j = 1; j <= i; j++) {
		cout << "*";
	}
	space = 2 * rows - 2 * i;
	for (int j = 1; j <= space; j++) {
		cout << " ";
	}
	for (int j = 1; j <= i; j++) {
		cout << "*";
	}
	cout << endl;
}



//==================================================================================================



// Inverted Numbers Pattern


int rows;

cout << "Enter Number of Rows:\n";
cin >> rows;
int count = rows;
for (int i = 1; i <= rows; i++) {
	for (int j = 1; j <= rows+1 -i; j++) {
		cout << j << " ";
	}
	cout << endl;
}


//==========================================================================




//inverted 0 and 1 program


int rows; 
cout << "Eneter number of rows:\n";
cin >> rows;
for (int i = 1; i <= rows; i++) {
	for (int j = 1; j <= i; j++) {
		if ((i + j) % 2 == 0) {
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		
	}
	cout << "\n";
}


//=====================================================================================





//Rhombus Pattern


int rows;
cout << "Enter nmbr of rows:\n";
cin >> rows;
for (int i = 1; i <= rows; i++) {
	for (int j = 1; j <= rows - i; j++) {
		cout << " ";
	}
	for (int j = 0; j <= rows; j++) {
		cout << "*";
	}
	cout << endl;
}


//================================================================================



//Number Triangle Pattern

int rows;
cout << "enter nmbr of rows:\n";
cin >> rows;
for (int i = 1; i <= rows; i++) {
	for (int j = 1; j <= rows - i; j++) {
		cout << " ";
	}
	for (int j = 1; j <= i; j++) {
		cout << j << " ";
	}
	cout << endl;
}



//==================================================================================






//Palindrom number triangle pattern


int rows;
cout << "Enter Number of Rows:\n";
cin >> rows;
for (int i = 1; i <= rows; i++) {
	int j;
	for (j = 1; j <= rows - i; j++) {
		cout << " ";
	}
	int k = i;
	for (; j <= rows; j++) {
		cout << k-- ;
	}
	k = 2;
	for (; j <= rows + i - 1; j++) {
		cout << k++ ;
	}
	cout << endl;
}


//=====================================================================================




//Kite Pattern

int rows;
cout << "Enter Number of rows:\n";
cin >> rows;
for (int i = 1; i <= rows; i++) {
	for (int j = 1; j <= rows - i; j++) {
		cout << " ";
	}
	for (int j = 1; j <= 2 * i - 1; j++) {
		cout << "*";
	}
	cout << "\n";
}
for (int i = rows; i >= 1; i--) {
	for (int j = 1; j <= rows - i; j++) {
		cout << " ";
	}
	for (int j = 1; j <= 2 * i - 1; j++) {
		cout << "*";
	}
	cout << "\n";
}


//==========================================================================


//Zig-zag pattern


int rows;
cout << "Enter Number of rows:\n";
cin >> rows;
for (int i = 1; i <= 3; i++) {
	for (int j = 1; j <= rows; j++) {
		if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0)) {
			cout << "* ";
		}
		else
		{
			cout << "  ";
		}
		
	}
	cout << endl;
}

//==============================================================
	system("pause");
}