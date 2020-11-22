#include <iostream>
using namespace std;

void printHourGlassNumericPattern(short const size);
void printCrossUsingNumbers(short size);
void printDiamond(short const size);
void printHollowDiamondInFrame(short const size);
void printHollowDiamond(short const size);
void printRightArrow(short const size);
void printLeftArrow(short const size);
void printTriangle(short const size);
void printInvertedTriangle(short const size);
void printHollowTriangle(short const size);
void printInvertedHollowTriangle(short const size);
void printRightTriangle(short const size);
void printMirroredRightTriangle(short const size);
void printInvertedRightTriangle(short const size);
void printMirroredInvertedRightTriangle(short const size);
void print8StarPattern(short const size);
void printHollowRightTriangle(short const size);
void printInvertedHollowRightTriangle(short const size);
void printMirroredHollowRightTriangle(short size);

int main()
{
	short size = 0;
	cout << "Please enter the size: ";
	cin >> size;
	cout << endl;

	cout << "Hour Glass Using Numbers:" << endl << endl;
	printHourGlassNumericPattern(size);
	cout << endl << endl;

	cout << "Cross Using Numbers:" << endl << endl;
	printCrossUsingNumbers(size);
	cout << endl << endl;

	cout << "Diamond:" << endl << endl;
	printDiamond(size);
	cout << endl << endl;

	cout << "Hollow Diamond in Frame:" << endl << endl;
	printHollowDiamondInFrame(size);
	cout << endl << endl;

	cout << "Hollow Diamond:" << endl << endl;
	printHollowDiamond(size);
	cout << endl << endl;

	cout << "Right Arrow:" << endl << endl;
	printRightArrow(size);
	cout << endl;

	cout << "Left Arrow:" << endl << endl;
	printLeftArrow(size);
	cout << endl << endl;

	cout << "Triangle:" << endl << endl;
	printTriangle(size);
	cout << endl;

	cout << "Inverted Triangle:" << endl << endl;
	printInvertedTriangle(size);
	cout << endl << endl;

	cout << "Hollow Triangle:" << endl << endl;
	printHollowTriangle(size);
	cout << endl << endl;

	cout << "Inverted Hollow Triangle:" << endl << endl;
	printInvertedHollowTriangle(size);
	cout << endl << endl;

	cout << "Right Triangle:" << endl << endl;
	printRightTriangle(size);
	cout << endl << endl;

	cout << "Mirrored Right Triangle:" << endl << endl;
	printMirroredRightTriangle(size);
	cout << endl << endl;

	cout << "Inverted Right Triangle:" << endl << endl;
	printInvertedRightTriangle(size);
	cout << endl << endl;
	
	cout << "Mirrored Inverted Right Triangle:" << endl << endl;
	printMirroredInvertedRightTriangle(size);
	cout << endl << endl;

	cout << "8 Star Pattern:" << endl << endl;
	print8StarPattern(size);
	cout << endl << endl;

	cout << "Hollow Right Triangle" << endl << endl;
	printHollowRightTriangle(size);
	cout << endl << endl;

	cout << "Inverted Hollow Right Triangle" << endl << endl;
	printInvertedHollowRightTriangle(size);
	cout << endl << endl;

	cout << "Mirrored Hollow Right Triangle" << endl << endl;
	printMirroredHollowRightTriangle(size);
	cout << endl << endl;

}

void printMirroredHollowRightTriangle(short const size)
{ 
	for (short i = 0; i < size-1; i++)
	{
		for (short j = 0; j < size-i-1; j++)
			cout << " ";

		for (short k = 0; k <=i; k++)
		{
			if (k == 0 || k==i)
				cout << "*";

			else cout << " ";
		}
		cout << endl;
	}
	//printing the last line
	for (short i = 0; i < size; i++)
		cout << "*";
}

void printInvertedHollowRightTriangle(short const size)
{
	//printing the first line
	for (short i = 0; i < size; i++)
		cout << "*";
	cout << endl;

	for (short i = 0; i <size-1; i++)
	{
		if (i == size-2)
		{
			cout << "*";
			cout << endl;
		}
		else
		{
			cout << "*";
			for (short j = 0; j < size-i-3; j++)
				cout << " ";

			cout << "*";
			cout << endl;

		}
	}
}

void printHollowRightTriangle(short const size)
{
	for (short i = 0; i < size-1; i++)
	{
		if (i == 0)
		{
			cout << "*";
			cout << endl;
		}
		else
		{
			cout << "*";
			for (short j = 0; j < i-1; j++)
				cout << " ";

			cout << "*";
			cout << endl;

		}
	}

	//printing the last line
	for (short i = 0; i < size; i++)
		cout << "*";

	cout << endl;
}

void print8StarPattern(short const size)
{
	//printing the first line
	cout << " ";
	for (short i = 0; i < size - 2; i++)
	{
		cout << "*";
	}
	cout << endl;

	//printing the lines between the first line and the middle line
	for (short i = 0; i < size - 2; i++)
	{
		for (short j = 0; j < size - 1; j++)
		{
			if (j == 0 || j == size - 2)
				cout << "*";

			cout << " ";
		}
		cout << endl;
	}

	//printing the middle line
	cout << " ";
	for (short i = 0; i < size - 2; i++)
	{
		cout << "*";
	}
	cout << endl;

	//printing the lines between the middle line and the last line
	for (short i = 0; i < size - 2; i++)
	{
		for (short j = 0; j < size - 1; j++)
		{
			if (j == 0 || j == size - 2)
				cout << "*";

			cout << " ";
		}
		cout << endl;
	}

	//printing the last line
	cout << " ";
	for (short i = 0; i < size - 2; i++)
	{
		cout << "*";
	}
	cout << endl;

}

void printInvertedRightTriangle(short const size)
{
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size-i; j++)
			cout << "*";

		cout << endl;
	}
}

void printMirroredInvertedRightTriangle(short const size)
{
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < i; j++)
			cout << " ";

		for (short k = 0; k < size - i; k++)
			cout << "*";

		cout << endl;
	}
}

void printRightTriangle(short const size)
{
	
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j <= i; j++)
			cout << "*";

		cout << endl;
	}
}

void printMirroredRightTriangle(short const size)
{
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size - i-1; j++)
			cout << " ";

		for (short k = 0; k <= i; k++)
			cout << "*";

		cout << endl;
	}
}

void printHollowTriangle(short const size)
{
	for (short i = 0; i < size-1; i++)
	{
		for (short j = 0; j < size - i-1; j++)
			cout << " ";
		
		cout << "*";
		for (short k = 0; k < i*2-1; k++)
			cout << " ";

		if (i > 0)
			cout << "*";
		cout << endl;
	}

	//printing the last line
	for (short i = 0; i < (size * 2)-1; i++)
		cout << "*";

	cout << endl;
}

void printInvertedHollowTriangle(short const size)
{
	//printing the first line
	for (short i = 0; i < (size * 2) - 1; i++)
		cout << "*";
	cout << endl;
	for (short i = 0; i < size-1; i++)
	{
		for (short j = 0; j <=i ; j++)
			cout << " ";

		cout << "*";
		for (short k = 0; k < (size-i-2)*2-1; k++)
			cout << " ";

		if (i <size-1-1)
			cout << "*";
		cout << endl;
	}


}

void printTriangle(short const size)
{
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size - i-1; j++)
			cout << " ";
	

		for (short k = 0; k < i * 2 + 1; k++)
			cout << "*";

		cout << endl;
	}
}

void printInvertedTriangle(short const size)
{
	for (short i = size-1; i >=0; i--)
	{
		for (short j = 0; j < size - i - 1; j++)
			cout << " ";

		for (short k = 0; k < i * 2 + 1; k++)
			cout << "*";

		cout << endl;
	}
}

void printHourGlassNumericPattern(short const size)
{
	short numSpacesInTheBeginning = 0;

	//printing upper half
	for (short i = 1; i <= size; i++)
	{
		for (short j = 0; j < numSpacesInTheBeginning; j++)
			cout << " ";

		for (short j = i; j <= size; j++)
			cout << j << " ";

		cout << endl;
		numSpacesInTheBeginning++;
	}

	numSpacesInTheBeginning--;
	//printing lower half
	numSpacesInTheBeginning--;
	for (short i = 1; i < size; i++)
	{
		for (short j = 0; j < numSpacesInTheBeginning; j++)
			cout << " ";

		for (short j = size - i; j <= size; j++)
			cout << j << " ";
		
		cout << endl;
		numSpacesInTheBeginning--;
	}
}

void printCrossUsingNumbers(short size)
{
	//printing upper half.
	for (short i = 1; i <= size; i++)
	{
		for (short j = 1; j < i; j++)
			cout << " ";
		
		cout << i;
		for (short k = 1; k < (size - i) * 2; k++)
			cout << " ";

		if (i < size)
			cout << i;

		cout << endl;
	}

	//printing lower half
	for (short i = size -1; i>=1 ; i--)
	{
		for (short j = i-1; j>=1; j--)
			cout << " ";
		
		cout << i;
		for (short k = 1; k <(size -i)*2; k++)
			cout << " ";
		
		cout << i;
		cout << endl;
	}
}

void printDiamond(short const size)
{
	//printing upper half
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size - i-1; j++)
			cout << " ";
		
		for (short k = 0; k < 2*i+1; k++)
			cout << "*";
		
		cout << endl;
	}

	//printing lower half
	for (short i = size -2; i >=0; i--)
	{
		for (short j = 0; j < size - i-1; j++)
			cout << " ";

		for (short k = 0; k < 2 * i + 1; k++)
			cout << "*";
		
		cout << endl;
	}
}

void printHollowDiamondInFrame(short const size)
{
	//printing upper half
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size - i; j++)
			cout << "*";
	
		for (short k = 0; k < i*2; k++)
			cout << " ";

		for (short l = 0; l < size - i; l++)
			cout << "*";
		
		cout << endl;
	}

	//printing lower half
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j <= i; j++)
			cout << "*";
		
		for (short k = 0; k < (size - i-1)*2; k++)
			cout << " ";

		for (short l = 0; l <= i; l++)
			cout << "*";
		
		cout << endl;
	}
}

void printHollowDiamond(short const size)
{
	//upper half
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size - i-1; j++)
			cout << " ";
		
		cout << "*";
		for (short k = 0; k < (i*2)-1; k++)
			cout << " ";
		
		if (i>0)
		cout << "*";

		cout << endl;
	}

	//lower half
	for (short i = size - 2; i >= 0; i--)
	{
		for (short j = 0; j < size - i - 1; j++)
			cout << " ";
		
		cout << "*";

		for (short k = i*2; k>1; k--)
			cout << " ";
	
		if (i>0)
		cout << "*";

		cout << endl;
	}
}

void printRightArrow(short const size)
{
	short lowerHalfStartingSpaceSize = 0;
	//printing upper half
	for (short i = 0, j=0; i < size; i++,j+=1)
	{
		for (short k = 0; k < i+j; k++)
		{
			cout << " ";

			if (i==size-1 && k==i+j-1)
			lowerHalfStartingSpaceSize = k; //this value will be used while printing
										    //spaces in the lower half.
		}

		for (short l = 0; l < size - i; l++)
			cout << "*";

		cout << endl;
    }
	
	//printing lower half
	for (short i = 0, j=size-1; i < size-1; i++, j--)
	{
		for (short k = lowerHalfStartingSpaceSize-2; k >= i*2; k--)
			cout << " ";
		
		for (short l=0; l<=size-j; l++)
			cout << "*";

		cout << endl;
	}
}

void printLeftArrow(short const size)
{
	//printing upper half
	for (short i = 0; i < size; i++)
	{
		for (short j = 0; j < size - i; j++)
			cout << " ";

		for (short k = 0; k < size - i; k++)
			cout << "*";

		cout << endl;
	}

	//printing lower half
	for (short i = size-2; i >= 0; i--)
	{
		for (short j = 0; j < size - i; j++)
			cout << " ";

		for (short k = 0; k < size - i; k++)
			cout << "*";

		cout << endl;
	}
}

