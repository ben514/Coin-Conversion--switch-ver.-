// Coin Conversion (switch ver.).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"

	int main()
	{
		//Lazy Mode

		double penny;
		double nickel;
		double dime;
		double quarter;
		double dollar;
		double five_dollar;
		double ten_dollar;
		double twenty_dollar;
		double fifty_dollar;
		double hundred_dollar;
		double total_lazy = (penny + nickel + dime + quarter + dollar + five_dollar + ten_dollar + twenty_dollar + fifty_dollar + hundred_dollar);

		//Standard Mode

		double cents;
		double dollars;
		double total_std = (cents + dollars);

		cout << "Hello,\n" << "This program shows your money value in different U.S. currencies.\n" << "\n" << "Would you like to enter Lazy Mode(1) or Standard Mode(2)?\n" << "Lazy Mode: type in number of various bills and coins you have.\n" << "Standard Mode: for coins, type in the value in cents and for bills in dollars.\n";
		
		int mode_select;
		
		cin >> mode_select;
		
		switch (mode_select){
		
		case '1':
			cout << "You have selected Lazy Mode.\n" << "Now, you will type in number of coins and bills you have.\n" << "\nHow many pennies do you have?\n";
			cin >> penny;
			penny = penny / 100;
			cout << "How many nickels do you have? \n";
			cin >> nickel;
			nickel = nickel / 20;
			cout << "How many dimes do you have? \n";
			cin >> dime;
			dime = dime / 10;
			cout << "How many quarters do you have? \n";
			cin >> quarter;
			quarter = quarter / 4;
			cout << "How many dollar bills do you have? \n";
			cin >> dollar;
			dollar = dollar;
			cout << "How many five-dollar bills do you have? \n";
			cin >> five_dollar;
			five_dollar = five_dollar * 5;
			cout << "How many ten-dollar bills do you have? \n";
			cin >> ten_dollar;
			ten_dollar = ten_dollar * 10;
			cout << "How many twenty-dollar bills do you have? \n";
			cin >> twenty_dollar;
			twenty_dollar = twenty_dollar * 20;
			cout << "How many fifty-dollar bills do you have? \n";
			cin >> fifty_dollar;
			fifty_dollar = fifty_dollar * 50;
			cout << "How many hundred-dollar bills do you have? \n";
			cin >> hundred_dollar;
			hundred_dollar = hundred_dollar * 100;
			cout << "Your Money Value Datasheet:\n"
				<< "\n In Pennies: " << total_lazy * 100 << " coins \n"
				<< "In Nickels: " << total_lazy * 20 << " coins \n"
				<< "In Dimes: " << total_lazy * 10 << " coins \n"
				<< "In Quarters: " << total_lazy * 4 << " coins \n"
				<< "In Dollars: " << total_lazy << " dollars \n"
				<< "In five-dollar bills: " << total_lazy / 5 << " bills \n"
				<< "In ten-dollar bills: " << total_lazy / 10 << " bills \n"
				<< "In twenty-dollar bills: " << total_lazy / 20 << " bills \n"
				<< "In fifty-dollar bills: " << total_lazy / 50 << " bills \n"
				<< "In hundred-dollar bills: " << total_lazy / 100 << "bills \n";
			break;

		case '2':
			cout << "Your have selected Standard Mode.\n" << "Now, you will type in values in cents for coins and dollars in bills. \n" << "Input cents: \n";
			cin >> cents;
			cents = cents / 100;
			cout << "Input dollars: \n";
			cin >> dollars;
			cout << "Your Money Value Datasheet:\n"
				<< "\n In Pennies: " << total_std * 100 << " coins \n"
				<< "In Nickels: " << total_std * 20 << " coins \n"
				<< "In Dimes: " << total_std * 10 << " coins \n"
				<< "In Quarters: " << total_std * 4 << " coins \n"
				<< "In Dollars: " << total_std << " dollars \n"
				<< "In five-dollar bills: " << total_std / 5 << " bills \n"
				<< "In ten-dollar bills: " << total_std / 10 << " bills \n"
				<< "In twenty-dollar bills: " << total_std / 20 << " bills \n"
				<< "In fifty-dollar bills: " << total_std / 50 << " bills \n"
				<< "In hundred-dollar bills: " << total_std / 100 << "bills \n";
			break;
		}
	}

