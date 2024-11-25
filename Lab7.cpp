#include<iostream>
using namespace std;
int main() {
	int x = 0, N = 0;
	cout << "Enter N: ";
	cin >> N;
	while (x < N)
	{
		x = x + 1;
		cout << x << endl;
}
	//Task-2
	int X = 0;
	cout << "Enter X: ";
	cin >> X;
	while (X >= 0) {
		
		cout << X << endl;
		X = X - 1;
	}
	//Task-3
	int x2 = 0,K=0;
	cout << "Enter nunber: ";
	cin >> K;
	while (x2 < K)
	{

		x2 = x2 + 1;
		cout << "Hello C++ " << endl;
	}
	//Task-4

	int number = 0,Digit=0;
	cout << "Enter the Positive Number: ";
	cin >> number;
	while (number > 0) {
		Digit = number % 10;  
		cout << Digit ;  
		number /= 10;  
		cout << " " << endl;
	}
	//Task-5
	int y = 0,sum=0,N1=0;
	cout << "Enter N: ";
	cin >> N1;
	while (y < N1) {
		y = y + 1;
		sum = sum + y;

	}
	cout << "Sum = " << sum;
	cout << " " << endl;

	//TAsk-6


		int number1 = 4539;  
		int sum1 = 0;        
		int digit1;
		while (number1 > 0) {
			digit1 = number1 % 10;  
			sum1 += digit1;         
			number1 /= 10;         
		}
		cout << "The sum of the digits of the number is: " << sum1 << endl;
		//Task-7
		int n3 = 0, sum4 = 0,x3=0;
		cout << "Enter the numbers = ";
		cin >> n3;
		while (x3 <= n3) {
			
			sum4 += 2 * x3;
			x3=x3+1;
		}
		cout << "The sum of first " << n3 << " Even numbers is = " <<sum4 << endl;

		//Task-8
		int x5 = 2,n5=0;
		cout << "Enter number: ";
		cin >> n5;
	
		while (x5 <= 10) {
			
			cout << x5 << endl;
			x5 += 2;
		}
		//Task-9
		int x6 = 0,n6=0;
		cout << "Enter number: ";
		cin >> n6;
		while (x6 <= 9) {
			x6 += 2;
			cout << x6 << endl;
			
		}
		//Task-10
		int X2 = 0;
		cout << "Enter X: ";
		cin >> X2;
		while (X2 >= 0) {

			cout << X2 << endl;
			X2 = X2 - 1;
		}
		//Task-11
		int x8 = 0, N8 = 0, upto = 0;
		cout << "Enter N: ";
		cin >> N8;
		cout << "Enter number where you want to print the table : ";
		cin >> upto;
		while (x8 <= upto)
		{
			
			cout << N8 << " x " << x8 << " = " << N8 * x8 << endl;
			x8 = x8 + 1;
		}
		//Task-12


			int power = 1,N9=0;
			cout << "Enter the power number = ";
			cin >> N9;
			while (power <= 81) {
				cout << power << " ";
				power *= N9;  
			}

			cout << endl;  
		//TAsk-13

				int y8 = -3;
				
				
				
				while (y8 <= -1) {
					cout << y8 << " ";
					y8++; 
				}

				cout << endl;  

			//TAsk-14


					int number0, sum0 = 0, Digit0;

					
					cout << "Enter a number: ";
					cin >> number0;

					
					cout << "Number is " << number0 << endl;

					
					while (number0 > 0) {
						Digit0 = number0 % 10;  
						cout << "Digit is " << Digit0 << " its square is " << Digit0 * Digit0 << endl; 
						sum0 += Digit0 * Digit0;
						number0 /= 10;         
					}

					
					cout << "Square Digit sum for the number is " << sum0 << endl;

				
			


			
		



		return 0;
}