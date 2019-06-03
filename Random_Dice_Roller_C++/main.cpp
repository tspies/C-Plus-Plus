#include <iostream>
#include <vector>

using namespace std;

class diceClass
{
	public:
		void setDiceSides(int num)
		{
			dice_sides = num;
		} 
		int getDiceSides(void)
		{
			return dice_sides;
		}
	private:
		int dice_sides;
};

class diceTowerClass
{
	public:
		void setDiceTower(int num)
		{
			die_in_tower = num;
		}
		int	getTowerNumber(void)
		{
			return die_in_tower;
		}
	private:
		int die_in_tower;
};

int main(void)
{	
	int die;

	cout << "\nWelcome to the C++ Random Dice Roller!!!\n\n";
	cout << "This program allows you to throw up to 10 die at a time.\n";
	cout << "Dont worry your die will go through a Die Towerso it will be random ;)\n";
	cout << "You can pick how many sides you want each of your die to have\n";
	cout << "Only die with 4 - 20 sides are allowed in this game -_-\n\n";
	cout << "Ready to begin? Press ENTER to start: \n";
	cin.get();

	cout << "How many die would you like to use?\n";
	cin >> die;
	if (die >= 1 && die <= 10)
	{
		diceTowerClass Tower;
		Tower.setDiceTower(die);
		int res = Tower.getTowerNumber();
		if (res == 1)
		{
			cout << "Great! You have " << res << " dice in your tower.\n";
			cout << "Lets assign how many sides you want the dice to have.\n\n";
		}
		else
		{
			cout << "Great! You have " << res << " die in your tower.\n";
			cout << "Lets assign how many sides you want each die to have, starting from the bottom.\n\n";

		}

		//Creating an array of diceClasses
		vector<diceClass> dice_array(die, diceClass());
		int value;
		
		//Assigning No. sides to each dice object in array 
		for (int i = 0; i < die; i++)
		{
			cout << "How many sides to you want dice number: " << i+1 << " to have?\n";
			cin >> value;
			if (value > 3 && value < 21)
				dice_array[i].setDiceSides(value);
			else
			{
				cout << "OOPS! that amount of sides are not allowed... :(\n";
				cout << "____________________________________________________\n\n";
				i--;
			}
		}
		cout << "Great! You are all set to roll.\n\n";

		//Rolling Functionality
		char play = 'y';
		while (play == 'y')
		{
			cout << "SMASH ENTER TO ROLL!\n";
			cin.get();
			cin.get();
			cout << "|--------------------------------------------------------|\n";
			for (int i = 0; i < die; i++)
			{
				int side = dice_array[i].getDiceSides();
				int roll = rand() % side + 1;
				cout << "  Dice number: " << i+1 << ". with " << side << " sides rolled: " << roll << "\n\n";
			}
			cout << "  Would you like to roll again? type 'y' or 'n' to EXIT.\n";
			cout << "|--------------------------------------------------------|\n";
			cin >> play;
		}
			cout << "Have a nice day =)!\n\n";
	}
	else
	{
		cout << "Invlid die amount!\n";
		cout << "You had one job...\n";
		cout << "Im getting out of here...\n";
	}
	return 0;
}