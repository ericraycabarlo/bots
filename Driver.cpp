/*

This program serves to calculate the number of materials needed to craft certain items, as well as
calculate the cost of materials. This program is used for an MMO RPG game, Tera Online.

*/

#include "Driver.h"

//Driver and Main Menu
int main()
{
	int userChoiceA;
	int userChoiceB;
	bool menuA = true;
	
	cout << "\n\nHello Vegeto-SS55!!!";
	
	while (menuA == true) {
		
		cout << "\n\n--------------------MAIN MENU--------------------" << endl;
		cout << "Select a Crafting Art" << endl;
		cout << "\t1. Alchemy" << endl;
		cout << "\t2. Metal Crafting" << endl;
		cout << "\t3. Cooking" << endl;
		cout << "\t4. Nothing" << endl << endl;
		cout << "Choice: ";
		cin >> userChoiceA;
	
		switch(userChoiceA)
		{
			case 1:	gemMenu();
					break;
					
			case 2:	//metalCraftMenu();
					break;
					
			case 3:	//cookingMenu();
					break;
			
			case 4: cout << "\n\n\n\n\nTerminating Program. . . " << endl;
					menuA = false;
					break;
					
			default: cout << "\nEnter a valid choice!!!" << endl;
					
		}
	}
	return 0;
	
}