#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-----------------------" << endl;
	cout << "|" << setw(7) << "x" << "   |"
		 << setw(10) << "y" << "     |" << endl;
	cout << "-----------------------" << endl;
	
	x = xp;
	while (x <= xk)
	{
		if (x < 0)
		
			y = pow(x, 7) - 2 * x;
		
		else if (x >= 0 && x < 3)
		
			A = fabs(4 * x - 1);
			B = atan(exp(x) + 1) / 8;
			
		
		else 
		
			y = pow(x, 4) + exp(pow(x, 2) + 3);
		
		y = A + B;

	   cout << "|" << setw(7) << setprecision(2) << x
		   	<< "    |" << setw(10) << setprecision(3) << y << "    |" << endl;
		x += dx;
	}
	cout << "----------------" << endl;
	return 0;

}       
