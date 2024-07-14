#include <iostream>
using namespace std;
int main ()
{
	string a, drinks, term, senior, date, dine, another, type, selection;
	
	int count, dam = 0;
	float total, discount, payment, change, sub;
	float quantity;
	float amount = 00.00;
	
	float drk1, drk2, drk3, drk4, drk5, drk6, drk7, drk8, drk9, drk10 = 0;
	string order1, order2, order3, order4, order5, order6, order7, order8, order9, order10;
	float quantity1, quantity2, quantity3, quantity4, quantity5, quantity6, quantity7, quantity8, quantity9, quantity10;
	float amount2, amount1, amount3, amount4, amount5, amount6, amount7, amount8, amount9, amount10;

do{
	// Menu Show
	count = 0;
	
	cout<<""<<endl;
	cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                       ChickenJoy                        |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   C1 1-pc Chickenjoy                             76.00  |"<<endl;
	cout<<"\t \t \t \t |   C2 1-pc Chickenjoy Meal                        95.00  |"<<endl;
	cout<<"\t \t \t \t |   C3 1-pc Chickenjoy Jolly Spaghetti             99.00  |"<<endl;
	cout<<"\t \t \t \t |   C4 1-pc Chickenjoy w/ Jolly Spaghetti Meal    125.00  |"<<endl;
	cout<<"\t \t \t \t |   C5 1-pc Chickenjoy w/ Double Rice Meal         99.00  |"<<endl;
	cout<<"\t \t \t \t |   C6 1-pc Chickenjoy w/ Palabok                 160.00  |"<<endl;
	cout<<"\t \t \t \t |   C7 1-pc Chickenjoy w/ Palabok Meal            175.00  |"<<endl;
	cout<<"\t \t \t \t |   C8 1-pc Chickenjoy w/ Burger Steak            125.00  |"<<endl;
	cout<<"\t \t \t \t |   C9 1-pc Chickenjoy w/ Fries Meal              152.00  |"<<endl;
	cout<<"\t \t \t \t |   C10 1-pc Chickenjoy w/ Side Dish              105.00  |"<<endl;
	cout<<"\t \t \t \t |   C11 2-pc Chickenjoy                           125.00  |"<<endl;
	cout<<"\t \t \t \t |   C12 Chickenjoy Bucket 6-pc                    399.00  |"<<endl;
	cout<<"\t \t \t \t |   C13 Chickenjoy Bucket 8-pc                    499.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                    Jolly Spaghetti                      |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   S1 Jolly Spaghetti                             50.00  |"<<endl;
	cout<<"\t \t \t \t |   S2 Jolly Spaghetti Meal                        65.00  |"<<endl;
	cout<<"\t \t \t \t |   S3 Jolly Spaghetti w/ Regular Fries Meal       95.00  |"<<endl;
	cout<<"\t \t \t \t |   S4 Jolly Spaghetti w/ Yum Burger Meal          95.00  |"<<endl;
	cout<<"\t \t \t \t |   S5 Jolly Spaghetti w/ Cheesy Yum Burger Meal  110.00  |"<<endl;
	cout<<"\t \t \t \t |   S6 Jolly Spaghetti w/ Burger Steak Meal       160.00  |"<<endl;
	cout<<"\t \t \t \t |   S7 Jolly Spaghetti Family Pan                 200.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                       Yum Burger                        |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   Y1 Yum Burger                                  35.00  |"<<endl;
	cout<<"\t \t \t \t |   Y2 Chessy Yum Burger                           49.00  |"<<endl;
	cout<<"\t \t \t \t |   Y3 Bacon Chessy Yum Burger                     65.00  |"<<endl;
	cout<<"\t \t \t \t |   Y4 Double Bacon Chessy Yum Burger             170.00  |"<<endl;
	cout<<"\t \t \t \t |   Y5 Cheesy Deluxe Yum Burger                    75.00  |"<<endl;
	cout<<"\t \t \t \t |   Y6 Bacon Cheesy Deluxe Yum Burger              90.00  |"<<endl;
	cout<<"\t \t \t \t |   Y7 Amazing Aloha Yum Burger                   135.00  |"<<endl;
	cout<<"\t \t \t \t |   Y8 Double Amazing Aloha Yum Burger            165.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                      Burger Steak                       |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   B1 1-Pc Burger Steak                           50.00  |"<<endl;
	cout<<"\t \t \t \t |   B2 2-Pc Burger Steak                           87.00  |"<<endl;
	cout<<"\t \t \t \t |   B3 1-pc Burger Steak w/ Jolly  Spaghetti       95.00  |"<<endl;
	cout<<"\t \t \t \t |   B4 1-pc Burger Steak w/ 3pcs Shanghai         109.00  |"<<endl;
	cout<<"\t \t \t \t |   B5 1-pc Burger Steak w/ Regular Fries          79.00  |"<<endl;
	cout<<"\t \t \t \t |   B6 Burger Steak Family Pan                    255.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                      Jolly Hotdog                       |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   J1 Regular Jolly Hotdog                        47.00  |"<<endl;
	cout<<"\t \t \t \t |   J2 Cheesy Classic Jolly Hotdog                 50.00  |"<<endl;
	cout<<"\t \t \t \t |   J3 Cheesy Classic w/ Fries                    120.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                      Jolly Deserts                      |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   D1 Cone Twirl                                  15.00  |"<<endl;
	cout<<"\t \t \t \t |   D2 Sundae Twirl                                30.00  |"<<endl;
	cout<<"\t \t \t \t |   D3 Mini Sundae Twirl                           26.00  |"<<endl;
	cout<<"\t \t \t \t |   D4 Jolly Crispy Fries                                 |"<<endl;
	cout<<"\t \t \t \t |     ~ Regular Fries                              42.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Medium Fries                               55.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Large Fries                                80.00  |"<<endl;
	cout<<"\t \t \t \t |   D5 Sundae Choco Crumble (Christmas Special)    55.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                      Jollibee Pies                      |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   P1 Peach Mango Pie                                    |"<<endl;
	cout<<"\t \t \t \t |     ~ Regular Peach Mango Pie                    30.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Large Peach Mango Pie                      44.00  |"<<endl;
	cout<<"\t \t \t \t |   P2 Buko Pie                                           |"<<endl;
	cout<<"\t \t \t \t |     ~ Regular Buko Mango Pie                     30.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Large Buko Mango Pie                       44.00  |"<<endl;
	cout<<"\t \t \t \t |   P3 Tuna Pie/ Spicy Tuna Pie                           |"<<endl;
	cout<<"\t \t \t \t |     ~ Regular Buko Mango Pie                     45.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Large Buko Mango Pie                       59.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |                        Beverages                        |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t |   G1 Brown Sugar Milk Tea                        50.00  |"<<endl;
	cout<<"\t \t \t \t |   G2 Brown Sugar Milk Tea w/ Pearls              75.00  |"<<endl;
	cout<<"\t \t \t \t |   G3 Iced Coffee                                 39.00  |"<<endl;
	cout<<"\t \t \t \t |   G4 Iced Coffee w/ Coffee Jelly                 59.00  |"<<endl;
	cout<<"\t \t \t \t |   G5 Softdrinks                                         |"<<endl;
	cout<<"\t \t \t \t |     ~ Regular Softdrinks                         45.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Large Softdrinks                           60.00  |"<<endl;
	cout<<"\t \t \t \t |   G6 Iced Tea                                           |"<<endl;
	cout<<"\t \t \t \t |     ~ Regular Iced Tea                           55.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Large Iced Tea                             70.00  |"<<endl;
	cout<<"\t \t \t \t |   G7 Pineapple Juice                                    |"<<endl;
	cout<<"\t \t \t \t |     ~ Regular Pineapple Juice                    55.00  |"<<endl;
	cout<<"\t \t \t \t |     ~ Large Pineapple Juice                      70.00  |"<<endl;
	cout<<"\t \t \t \t |   G8 Brewed Coffee                               30.00  |"<<endl;
	cout<<"\t \t \t \t |   G9 Hot Chocolate                               36.00  |"<<endl;
	cout<<"\t \t \t \t |   G10 Bottled Water                              23.00  |"<<endl;
	cout<<"\t \t \t \t |                                                         |"<<endl;
	cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Welcome to Jolibee we are Happy to Serve You"<<endl;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Enter Date (MM/DD/YY): "; cin>>date;
	cout<<""<<endl;
	cout<<"\t \t \t \t \t Senior Discount (Yes/No): "; cin>>senior;
	cout<<""<<endl;
	if(senior == "Yes")
	{
	senior = "Yes";
	}
	else
	{
	senior = "No";
	}
	cout<<"\t \t \t \t \t Dine In or Take Out? (Dine/Take): "; cin>>dine;
	cout<<""<<endl;
	if(dine == "Dine")
	{
	dine = "Dine In";
	}
	else
	{
	dine = "Take Out";
	}
	cout<<"\t \t \t \t \t Your order starts here"<<endl;
	cout<<""<<endl;

	
do{

	// Transaction

	cout<<"\t \t \t \t \t Enter Food Code: "; cin>>a; 
	
	// 1 - PC Chicken 
	if(a == "C1") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1-pc Chicken";
		amount1 = 76.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1-pc Chicken";
		amount2 = 76.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1-pc Chicken";
		amount3 = 76.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1-pc Chicken";
		amount4 = 76.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1-pc Chicken";
		amount5 = 76.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1-pc Chicken";
		amount6 = 76.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1-pc Chicken";
		amount7 = 76.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1-pc Chicken";
		amount8 = 76.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1-pc Chicken";
		amount9 = 76.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1-pc Chicken";
		amount10 = 76.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1 - PC Chicken Meal
	else if(a == "C2") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "1-pc Chck Meal";
		amount1 = 95.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "1-pc Chck Meal";
		amount2 = 95.00 * quantity2;
		drk2 = quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "1-pc Chck Meal";
		amount3 = 95.00 * quantity3;
		drk3 = quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "1-pc Chck Meal";
		amount4 = 95.00 * quantity4;
		drk4 = quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;	
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "1-pc Chck Meal";
		amount5 = 95.00 * quantity5;
		drk5 = quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "1-pc Chck Meal";
		amount6 = 95.00 * quantity6;
		drk6 = quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "1-pc Chck Meal";
		amount7 = 95.00 * quantity7;
		drk7 = quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "1-pc Chck Meal";
		amount8 = 95.00 * quantity8;
		drk8 = quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "1-pc Chck Meal";
		amount9 = 95.00 * quantity9;
		drk9 = quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "1-pc Chck Meal";
		amount10 = 95.00 * quantity10;
		drk10 = quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1 - PC Chicken Jolly Sphagetti
	else if(a == "C3")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1-pc Chck Sphag";
		amount1 = 99.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1-pc Chck Sphag";
		amount2 = 99.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1-pc Chck Sphag";
		amount3 = 99.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1-pc Chck Sphag";
		amount4 = 99.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1-pc Chck Sphag";
		amount5 = 99.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1-pc Chck Sphag";
		amount6 = 99.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1-pc Chck Sphag";
		amount7 = 99.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1-pc Chck Sphag";
		amount8 = 99.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1-pc Chck Sphag";
		amount9 = 99.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1-pc Chck Sphag";
		amount10 = 99.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Chicken w/ Jolly Sphagetti Meal
	else if(a == "C4")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "1-pc Chk Spg Ml";
		amount1 = 125.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "1-pc Chk Spg Ml";
		amount2 = 125.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "1-pc Chk Spg Ml";
		amount3 = 125.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "1-pc Chk Spg Ml";
		amount4 = 125.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "1-pc Chk Spg Ml";
		amount5 = 125.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "1-pc Chk Spg Ml";
		amount6 = 125.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "1-pc Chk Spg Ml";
		amount7 = 125.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "1-pc Chk Spg Ml";
		amount8 = 125.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "1-pc Chk Spg Ml";
		amount9 = 125.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "1-pc Chk Spg Ml";
		amount10 = 125.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Chicken w/ Double Rice Meal
	else if(a == "C5")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "1-pc Chk Dbl Rm";
		amount1 = 99.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "1-pc Chk Dbl Rm";
		amount2 = 99.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "1-pc Chk Dbl Rm";
		amount3 = 99.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "1-pc Chk Dbl Rm";
		amount4 = 99.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "1-pc Chk Dbl Rm";
		amount5 = 99.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "1-pc Chk Dbl Rm";
		amount6 = 99.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "1-pc Chk Dbl Rm";
		amount7 = 99.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "1-pc Chk Dbl Rm";
		amount8 = 99.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "1-pc Chk Dbl Rm";
		amount9 = 99.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "1-pc Chk Dbl Rm";
		amount10 = 99.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Chickenjoy w/ Palabok
	else if(a == "C6")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1-pc Chk Palbk";
		amount1 = 160.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1-pc Chk Palbk";
		amount2 = 160.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1-pc Chk Palbk";
		amount3 = 160.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1-pc Chk Palbk";
		amount4 = 160.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1-pc Chk Palbk";
		amount5 = 160.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1-pc Chk Palbk";
		amount6 = 160.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1-pc Chk Palbk";
		amount7 = 160.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1-pc Chk Palbk";
		amount8 = 160.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1-pc Chk Palbk";
		amount9 = 160.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1-pc Chk Palbk";
		amount10 = 160.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Chickenjoy w/ Palabok Meal
	else if(a == "C7")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "1-pc Chk Plbk Ml";
		amount1 = 175.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "1-pc Chk Plbk Ml";
		amount2 = 175.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "1-pc Chk Plbk Ml";
		amount3 = 175.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "1-pc Chk Plbk Ml";
		amount4 = 175.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "1-pc Chk Plbk Ml";
		amount5 = 175.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "1-pc Chk Plbk Ml";
		amount6 = 175.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "1-pc Chk Plbk Ml";
		amount7 = 175.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "1-pc Chk Plbk Ml";
		amount8 = 175.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "1-pc Chk Plbk Ml";
		amount9 = 175.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "1-pc Chk Plbk Ml";
		amount10 = 175.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Chickenjoy w/ Burger Steak
	else if(a == "C8")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1-pc Chk Bugr Stk";
		amount1 = 125.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1-pc Chk Bugr Stk";
		amount2 = 125.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1-pc Chk Bugr Stk";
		amount3 = 125.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1-pc Chk Bugr Stk";
		amount4 = 125.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1-pc Chk Bugr Stk";
		amount5 = 125.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1-pc Chk Bugr Stk";
		amount6 = 125.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1-pc Chk Bugr Stk";
		amount7 = 125.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1-pc Chk Bugr Stk";
		amount8 = 125.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1-pc Chk Bugr Stk";
		amount9 = 125.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1-pc Chk Bugr Stk";
		amount10 = 125.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Chicken w/ Fries Meal
	else if(a == "C9")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "1-pc Chk Fri Ml";
		amount1 = 152.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "1-pc Chk Fri Ml";
		amount2 = 152.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "1-pc Chk Fri Ml";
		amount3 = 152.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "1-pc Chk Fri Ml";
		amount4 = 152.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "1-pc Chk Fri Ml";
		amount5 = 152.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "1-pc Chk Fri Ml";
		amount6 = 152.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "1-pc Chk Fri Ml";
		amount7 = 152.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "1-pc Chk Fri Ml";
		amount8 = 152.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "1-pc Chk Fri Ml";
		amount9 = 152.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "1-pc Chk Fri Ml";
		amount10 = 152.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Chicken w/ Side Dish
	else if(a == "C10")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "1-pc Chk Sid Dsh";
		amount1 = 105.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "1-pc Chk Sid Dsh";
		amount2 = 105.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "1-pc Chk Sid Dsh";
		amount3 = 105.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "1-pc Chk Sid Dsh";
		amount4 = 105.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "1-pc Chk Sid Dsh";
		amount5 = 105.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "1-pc Chk Sid Dsh";
		amount6 = 105.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "1-pc Chk Sid Dsh";
		amount7 = 105.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "1-pc Chk Sid Dsh";
		amount8 = 105.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "1-pc Chk Sid Dsh";
		amount9 = 105.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "1-pc Chk Sid Dsh";
		amount10 = 105.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 2-Pc Chickenjoy
	else if(a == "C11")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "2-pc Chickenjoy";
		amount1 = 125.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "2-pc Chickenjoy";
		amount2 = 125.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "2-pc Chickenjoy";
		amount3 = 125.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "2-pc Chickenjoy";
		amount4 = 125.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "2-pc Chickenjoy";
		amount5 = 125.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "2-pc Chickenjoy";
		amount6 = 125.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "2-pc Chickenjoy";
		amount7 = 125.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "2-pc Chickenjoy";
		amount8 = 125.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "2-pc Chickenjoy";
		amount9 = 125.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "2-pc Chickenjoy";
		amount10 = 125.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Chickenjoy Bucket 6-Pc
		else if(a == "C12")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "6-pc Chk Bucket";
		amount1 = 399.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "6-pc Chk Bucket";
		amount2 = 399.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "6-pc Chk Bucket";
		amount3 = 399.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "6-pc Chk Bucket";
		amount4 = 399.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "6-pc Chk Bucket";
		amount5 = 399.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "6-pc Chk Bucket";
		amount6 = 399.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "6-pc Chk Bucket";
		amount7 = 399.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "6-pc Chk Bucket";
		amount8 = 399.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "6-pc Chk Bucket";
		amount9 = 399.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "6-pc Chk Bucket";
		amount10 = 399.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
		}
	// Chickenjoy Bucket 8-Pc
	else if (a == "C13")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "8-pc Chk Bucket";
		amount1 = 499.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "8-pc Chk Bucket";
		amount2 = 499.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "8-pc Chk Bucket";
		amount3 = 499.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "8-pc Chk Bucket";
		amount4 = 499.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "8-pc Chk Bucket";
		amount5 = 499.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "8-pc Chk Bucket";
		amount6 = 499.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "8-pc Chk Bucket";
		amount7 = 499.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "8-pc Chk Bucket";
		amount8 = 499.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "8-pc Chk Bucket";
		amount9 = 499.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "8-pc Chk Bucket";
		amount10 = 499.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Jolly Spaghetti
	else if(a == "S1")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Jlly Spaghett";
		amount1 = 50.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Jlly Spaghett";
		amount2 = 50.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Jlly Spaghett";
		amount3 = 50.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Jlly Spaghett";
		amount4 = 50.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Jlly Spaghett";
		amount5 = 50.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Jlly Spaghett";
		amount6 = 50.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Jlly Spaghett";
		amount7 = 50.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Jlly Spaghett";
		amount8 = 50.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Jlly Spaghett";
		amount9 = 50.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Jlly Spaghett";
		amount10 = 50.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Jolly Spaghetti Meal
	else if(a == "S2")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "Jlly Spght Meal";
		amount1 = 65.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "Jlly Spght Meal";
		amount2 = 65.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "Jlly Spght Meal";
		amount3 = 65.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "Jlly Spght Meal";
		amount4 = 65.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "Jlly Spght Meal";
		amount5 = 65.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "Jlly Spght Meal";
		amount6 = 65.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "Jlly Spght Meal";
		amount7 = 65.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "Jlly Spght Meal";
		amount8 = 65.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "Jlly Spght Meal";
		amount9 = 65.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "Jlly Spght Meal";
		amount10 = 65.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Jolly Spaghetti w/ Regular Fries Meal
	else if(a == "S3")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "Jly Spg Fr Ml";
		amount1 = 95.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "Jly Spg Fr Ml";
		amount2 = 95.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "Jly Spg Fr Ml";
		amount3 = 95.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "Jly Spg Fr Ml";
		amount4 = 95.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "Jly Spg Fr Ml";
		amount5 = 95.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "Jly Spg Fr Ml";
		amount6 = 95.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "Jly Spg Fr Ml";
		amount7 = 95.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "Jly Spg Fr Ml";
		amount8 = 95.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "Jly Spg Fr Ml";
		amount9 = 95.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "Jly Spg Fr Ml";
		amount10 = 95.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Jolly Spaghetti w/ Yum Burger Meal
	else if(a == "S4")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "Jly Spg Yb Ml";
		amount1 = 95.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "Jly Spg Yb Ml";
		amount2 = 95.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "Jly Spg Yb Ml";
		amount3 = 95.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "Jly Spg Yb Ml";
		amount4 = 95.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "Jly Spg Yb Ml";
		amount5 = 95.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "Jly Spg Yb Ml";
		amount6 = 95.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "Jly Spg Yb Ml";
		amount7 = 95.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "Jly Spg Yb Ml";
		amount8 = 95.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "Jly Spg Yb Ml";
		amount9 = 95.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "Jly Spg Yb Ml";
		amount10 = 95.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}	
	}
	// Jolly Spaghetti w/ Cheesy Yum Burger Meal
	else if(a == "S5")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "Jly Spg ChB Ml";
		amount1 = 110.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "Jly Spg ChB Ml";
		amount2 = 110.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "Jly Spg ChB Ml";
		amount3 = 110.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "Jly Spg ChB Ml";
		amount4 = 110.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "Jly Spg ChB Ml";
		amount5 = 110.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "Jly Spg ChB Ml";
		amount6 = 110.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "Jly Spg ChB Ml";
		amount7 = 110.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "Jly Spg ChB Ml";
		amount8 = 110.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "Jly Spg ChB Ml";
		amount9 = 110.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "Jly Spg ChB Ml";
		amount10 = 110.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}	
	}
	// Jolly Spaghetti w/ Burger Steak Meal
	else if(a == "S6")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order1 = "Jly Spg Bs Ml";
		amount1 = 160.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order2 = "Jly Spg Bs Ml";
		amount2 = 160.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order3 = "Jly Spg Bs Ml";
		amount3 = 160.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order4 = "Jly Spg Bs Ml";
		amount4 = 160.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order5 = "Jly Spg Bs Ml";
		amount5 = 160.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order6 = "Jly Spg Bs Ml";
		amount6 = 160.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order7 = "Jly Spg Bs Ml";
		amount7 = 160.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order8 = "Jly Spg Bs Ml";
		amount8 = 160.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order9 = "Jly Spg Bs Ml";
		amount9 = 160.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		drk1 = quantity1; drk2 = quantity2; drk3 = quantity3; drk4 = quantity4; drk5 = quantity5; drk6 = quantity6; drk7 = quantity7; drk8 = quantity8; drk9 = quantity9; drk10 = quantity10;
		order10 = "Jly Spg Bs Ml";
		amount10 = 160.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}	
	}
	// Jolly Spaghetti Family Pan
	else if(a == "S7")
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Jly Spght Fm P";
		amount1 = 200.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 1)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Jly Spght Fm P";
		amount2 = 200.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Jly Spght Fm P";
		amount3 = 200.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Jly Spght Fm P";
		amount4 = 200.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Jly Spght Fm P";
		amount5 = 200.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Jly Spght Fm P";
		amount6 = 200.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Jly Spght Fm P";
		amount7 = 200.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Jly Spght Fm P";
		amount8 = 200.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Jly Spght Fm P";
		amount9 = 200.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Jly Spght Fm P";
		amount10 = 200.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Yum Burger
	else if(a == "Y1") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1-Yum Burger";
		amount1 = 35.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1-Yum Burger";
		amount2 = 35.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1-Yum Burger";
		amount3 = 35.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1-Yum Burger";
		amount4 = 35.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1-Yum Burger";
		amount5 = 35.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1-Yum Burger";
		amount6 = 35.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1-Yum Burger";
		amount7 = 35.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1-Yum Burger";
		amount8 = 35.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1-Yum Burger";
		amount9 = 35.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1-Yum Burger";
		amount10 = 35.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Cheesy Yum Burger
	else if(a == "Y2") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Chs Yum Burger";
		amount1 = 49.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Chs Yum Burger";
		amount2 = 49.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Chs Yum Burger";
		amount3 = 49.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Chs Yum Burger";
		amount4 = 49.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Chs Yum Burger";
		amount5 = 49.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Chs Yum Burger";
		amount6 = 49.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Chs Yum Burger";
		amount7 = 49.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Chs Yum Burger";
		amount8 = 49.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Chs Yum Burger";
		amount9 = 49.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Chs Yum Burger";
		amount10 = 49.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Bacon Cheesy Yum Burger
	else if(a == "Y3") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Bc Ch Yum Brg";
		amount1 = 65.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Bc Ch Yum Brg";
		amount2 = 65.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Bc Ch Yum Brg";
		amount3 = 65.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Bc Ch Yum Brg";
		amount4 = 65.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Bc Ch Yum Brg";
		amount5 = 65.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Bc Ch Yum Brg";
		amount6 = 65.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Bc Ch Yum Brg";
		amount7 = 65.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Bc Ch Yum Brg";
		amount8 = 65.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Bc Ch Yum Brg";
		amount9 = 65.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Bc Ch Yum Brg";
		amount10 = 65.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Double Bacon Cheesy Yum Burger
	else if(a == "Y4") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Dbl Bch Yum Brg";
		amount1 = 170.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Dbl Bch Yum Brg";
		amount2 = 170.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Dbl Bch Yum Brg";
		amount3 = 170.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Dbl Bch Yum Brg";
		amount4 = 170.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Dbl Bch Yum Brg";
		amount5 = 170.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Dbl Bch Yum Brg";
		amount6 = 170.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Dbl Bch Yum Brg";
		amount7 = 170.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Dbl Bch Yum Brg";
		amount8 = 170.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Dbl Bch Yum Brg";
		amount9 = 170.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Dbl Bch Yum Brg";
		amount10 = 170.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Cheesy Deluxe Yum Burger
	else if(a == "Y5") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Ch Dlx Yum Brg";
		amount1 = 75.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Ch Dlx Yum Brg";
		amount2 = 75.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Ch Dlx Yum Brg";
		amount3 = 75.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Ch Dlx Yum Brg";
		amount4 = 75.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Ch Dlx Yum Brg";
		amount5 = 75.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Ch Dlx Yum Brg";
		amount6 = 75.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Ch Dlx Yum Brg";
		amount7 = 75.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Ch Dlx Yum Brg";
		amount8 = 75.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Ch Dlx Yum Brg";
		amount9 = 75.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Ch Dlx Yum Brg";
		amount10 = 75.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Bacon Cheesy Deluxe Yum Burger
	else if(a == "Y6") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "BCh Dx Yum Brg";
		amount1 = 90.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "BCh Dx Yum Brg";
		amount2 = 90.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "BCh Dx Yum Brg";
		amount3 = 90.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "BCh Dx Yum Brg";
		amount4 = 90.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "BCh Dx Yum Brg";
		amount5 = 90.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "BCh Dx Yum Brg";
		amount6 = 90.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "BCh Dx Yum Brg";
		amount7 = 90.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "BCh Dx Yum Brg";
		amount8 = 90.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "BCh Dx Yum Brg";
		amount9 = 90.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "BCh Dx Yum Brg";
		amount10 = 90.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Amazing Aloha Yum Burger
	else if(a == "Y7") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Amz Al Yum Brg";
		amount1 = 135.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Amz Al Yum Brg";
		amount2 = 135.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Amz Al Yum Brg";
		amount3 = 135.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Amz Al Yum Brg";
		amount4 = 135.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Amz Al Yum Brg";
		amount5 = 135.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Amz Al Yum Brg";
		amount6 = 135.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Amz Al Yum Brg";
		amount7 = 135.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Amz Al Yum Brg";
		amount8 = 135.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Amz Al Yum Brg";
		amount9 = 135.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Amz Al Yum Brg";
		amount10 = 135.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Double Amazing Aloha Yum Burger
	else if(a == "Y8") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Dbl AmAl Yum Brg";
		amount1 = 165.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Dbl AmAl Yum Brg";
		amount2 = 165.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Dbl AmAl Yum Brg";
		amount3 = 165.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Dbl AmAl Yum Brg";
		amount4 = 165.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Dbl AmAl Yum Brg";
		amount5 = 165.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Dbl AmAl Yum Brg";
		amount6 = 165.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Dbl AmAl Yum Brg";
		amount7 = 165.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Dbl AmAl Yum Brg";
		amount8 = 165.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Dbl AmAl Yum Brg";
		amount9 = 165.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Dbl AmAl Yum Brg";
		amount10 = 165.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-Pc Burger Steak
	else if(a == "B1") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1-Pc Brg Stck";
		amount1 = 50.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1-Pc Brg Stck";
		amount2 = 50.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1-Pc Brg Stck";
		amount3 = 50.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1-Pc Brg Stck";
		amount4 = 50.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1-Pc Brg Stck";
		amount5 = 50.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1-Pc Brg Stck";
		amount6 = 50.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1-Pc Brg Stck";
		amount7 = 50.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1-Pc Brg Stck";
		amount8 = 50.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1-Pc Brg Stck";
		amount9 = 50.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1-Pc Brg Stck";
		amount10 = 50.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 2-Pc Burger Steak
	else if(a == "B2") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "2-Pc Brg Stck";
		amount1 = 87.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "2-Pc Brg Stck";
		amount2 = 87.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "2-Pc Brg Stck";
		amount3 = 87.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "2-Pc Brg Stck";
		amount4 = 87.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "2-Pc Brg Stck";
		amount5 = 87.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "2-Pc Brg Stck";
		amount6 = 87.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "2-Pc Brg Stck";
		amount7 = 87.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "2-Pc Brg Stck";
		amount8 = 87.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "2-Pc Brg Stck";
		amount9 = 87.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "2-Pc Brg Stck";
		amount10 = 87.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-pc Burger Steak w/ Jolly  Spaghetti
	else if(a == "B3") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Brg Stck Jly Spght";
		amount1 = 95.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Brg Stck Jly Spght";
		amount2 = 95.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Brg Stck Jly Spght";
		amount3 = 95.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Brg Stck Jly Spght";
		amount4 = 95.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Brg Stck Jly Spght";
		amount5 = 95.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Brg Stck Jly Spght";
		amount6 = 95.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Brg Stck Jly Spght";
		amount7 = 95.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Brg Stck Jly Spght";
		amount8 = 95.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Brg Stck Jly Spght";
		amount9 = 95.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Brg Stck Jly Spght";
		amount10 = 95.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-pc Burger Steak w/ 3pcs Shanghai
	else if(a == "B4") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Brg Stck Shghai";
		amount1 = 109.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Brg Stck Shghai";
		amount2 = 109.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Brg Stck Shghai";
		amount3 = 109.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Brg Stck Shghai";
		amount4 = 109.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Brg Stck Shghai";
		amount5 = 109.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Brg Stck Shghai";
		amount6 = 109.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Brg Stck Shghai";
		amount7 = 109.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Brg Stck Shghai";
		amount8 = 109.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Brg Stck Shghai";
		amount9 = 109.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Brg Stck Shghai";
		amount10 = 109.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// 1-pc Burger Steak w/ Regular Fries
	else if(a == "B5") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Brg Stck Reg Fri";
		amount1 = 79.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Brg Stck Reg Fri";
		amount2 = 79.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Brg Stck Reg Fri";
		amount3 = 79.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Brg Stck Reg Fri";
		amount4 = 79.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Brg Stck Reg Fri";
		amount5 = 79.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Brg Stck Reg Fri";
		amount6 = 79.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Brg Stck Reg Fri";
		amount7 = 79.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Brg Stck Reg Fri";
		amount8 = 79.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Brg Stck Reg Fri";
		amount9 = 79.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Brg Stck Reg Fri";
		amount10 = 79.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Burger Steak Family Pan
	else if(a == "B6") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Brg Stck Fam Pan";
		amount1 = 255.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Brg Stck Fam Pan";
		amount2 = 255.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Brg Stck Fam Pan";
		amount3 = 255.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Brg Stck Fam Pan";
		amount4 = 255.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Brg Stck Fam Pan";
		amount5 = 255.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Brg Stck Fam Pan";
		amount6 = 255.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Brg Stck Fam Pan";
		amount7 = 255.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Brg Stck Fam Pan";
		amount8 = 255.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Brg Stck Fam Pan";
		amount9 = 255.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Brg Stck Fam Pan";
		amount10 = 255.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Regular Jolly Hotdog
	else if(a == "J1") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Reg Jlly Hot";
		amount1 = 47.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Reg Jlly Hot";
		amount2 = 47.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Reg Jlly Hot";
		amount3 = 47.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Reg Jlly Hot";
		amount4 = 47.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Reg Jlly Hot";
		amount5 = 47.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Reg Jlly Hot";
		amount6 = 47.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Reg Jlly Hot";
		amount7 = 47.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Reg Jlly Hot";
		amount8 = 47.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Reg Jlly Hot";
		amount9 = 47.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Reg Jlly Hot";
		amount10 = 47.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Cheesy Classic Jolly Hotdog
	else if(a == "J2") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Chse Jlly Hot";
		amount1 = 50.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Chse Jlly Hot";
		amount2 = 50.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Chse Jlly Hot";
		amount3 = 50.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Chse Jlly Hot";
		amount4 = 50.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Chse Jlly Hot";
		amount5 = 50.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Chse Jlly Hot";
		amount6 = 50.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Chse Jlly Hot";
		amount7 = 50.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Chse Jlly Hot";
		amount8 = 50.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Chse Jlly Hot";
		amount9 = 50.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Chse Jlly Hot";
		amount10 = 50.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Cheesy Classic w/ Fries 
	else if(a == "J3") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Chs Jly Hot Fri";
		amount1 = 120.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Chs Jly Hot Fri";
		amount2 = 120.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Chs Jly Hot Fri";
		amount3 = 120.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Chs Jly Hot Fri";
		amount4 = 120.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Chs Jly Hot Fri";
		amount5 = 120.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Chs Jly Hot Fri";
		amount6 = 120.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Chs Jly Hot Fri";
		amount7 = 120.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Chs Jly Hot Fri";
		amount8 = 120.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Chs Jly Hot Fri";
		amount9 = 120.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Chs Jly Hot Fri";
		amount10 = 120.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Cone Twirl
	else if(a == "D1") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Des Cone Twir";
		amount1 = 15.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Des Cone Twir";
		amount2 = 15.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Des Cone Twir";
		amount3 = 15.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Des Cone Twir";
		amount4 = 15.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Des Cone Twir";
		amount5 = 15.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Des Cone Twir";
		amount6 = 15.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Des Cone Twir";
		amount7 = 15.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Des Cone Twir";
		amount8 = 15.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Des Cone Twir";
		amount9 = 15.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Des Cone Twir";
		amount10 = 15.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Sundae Twirl
	else if(a == "D2") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Des Sund Twir";
		amount1 = 30.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Des Sund Twir";
		amount2 = 30.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Des Sund Twir";
		amount3 = 30.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Des Sund Twir";
		amount4 = 30.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Des Sund Twir";
		amount5 = 30.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Des Sund Twir";
		amount6 = 30.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Des Sund Twir";
		amount7 = 30.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Des Sund Twir";
		amount8 = 30.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Des Sund Twir";
		amount9 = 30.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Des Sund Twir";
		amount10 = 30.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Mini Sundae Twirl
	else if(a == "D3") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Min Sund Twir";
		amount1 = 26.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Min Sund Twir";
		amount2 = 26.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Min Sund Twir";
		amount3 = 26.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Min Sund Twir";
		amount4 = 26.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Min Sund Twir";
		amount5 = 26.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Min Sund Twir";
		amount6 = 26.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Min Sund Twir";
		amount7 = 26.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Min Sund Twir";
		amount8 = 26.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Min Sund Twir";
		amount9 = 26.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Min Sund Twir";
		amount10 = 26.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Jolly Crispy Fries
	else if(a == "D4") 
	{
		if(count == 0)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Reg Jlly Fri";
					amount1 = 42.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Med Jlly Fri";
					amount1 = 55.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Lar Jlly Fri";
					amount1 = 80.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if (count == 1)
		{	
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Reg Jlly Fri";
					amount2 = 42.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Med Jlly Fri";
					amount2 = 55.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Lar Jlly Fri";
					amount2 = 80.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 2)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Reg Jlly Fri";
					amount3 = 42.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Med Jlly Fri";
					amount3 = 55.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Lar Jlly Fri";
					amount3 = 80.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 3)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Reg Jlly Fri";
					amount4 = 42.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Med Jlly Fri";
					amount4 = 55.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Lar Jlly Fri";
					amount4 = 80.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 4)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Reg Jlly Fri";
					amount5 = 42.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Med Jlly Fri";
					amount5 = 55.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Lar Jlly Fri";
					amount5 = 80.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 5)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Reg Jlly Fri";
					amount6 = 42.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Med Jlly Fri";
					amount6 = 55.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Lar Jlly Fri";
					amount6 = 80.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 6)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Reg Jlly Fri";
					amount7 = 42.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Med Jlly Fri";
					amount7 = 55.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Lar Jlly Fri";
					amount7 = 80.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 7)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Reg Jlly Fri";
					amount8 = 42.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Med Jlly Fri";
					amount8 = 55.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Lar Jlly Fri";
					amount8 = 80.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 8)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Reg Jlly Fri";
					amount9 = 42.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Med Jlly Fri";
					amount9 = 55.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Lar Jlly Fri";
					amount9 = 80.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else if(count == 9)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Med/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Reg Jlly Fri";
					amount10 = 42.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Med")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Med Jlly Fri";
					amount10 = 55.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Lar Jlly Fri";
					amount10 = 80.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N");
		}
		else
		{
		term = "No";
		}
	}
	// Sundae Choco Crumble
	else if(a == "D5") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Sun Choc Crum";
		amount1 = 55.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Sun Choc Crum";
		amount2 = 55.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Sun Choc Crum";
		amount3 = 55.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Sun Choc Crum";
		amount4 = 55.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Sun Choc Crum";
		amount5 = 55.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Sun Choc Crum";
		amount6 = 55.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Sun Choc Crum";
		amount7 = 55.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Sun Choc Crum";
		amount8 = 55.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Sun Choc Crum";
		amount9 = 55.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Sun Choc Crum";
		amount10 = 55.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Peach Mango Pie
	else if(a == "P1") 
	{
		if(count == 0)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Reg Pmag Pie";
					amount1 = 30.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Lar Pmag Pie";
					amount1 = 44.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if (count == 1)
		{	
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Reg Pmag Pie";
					amount2 = 30.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Lar Pmag Pie";
					amount2 = 44.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 2)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Reg Pmag Pie";
					amount3 = 30.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Lar Pmag Pie";
					amount3 = 44.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 3)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Reg Pmag Pie";
					amount4 = 30.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Lar Pmag Pie";
					amount4 = 44.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 4)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Reg Pmag Pie";
					amount5 = 30.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Lar Pmag Pie";
					amount5 = 44.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 5)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Reg Pmag Pie";
					amount6 = 30.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Lar Pmag Pie";
					amount6 = 44.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 6)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Reg Pmag Pie";
					amount7 = 30.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Lar Pmag Pie";
					amount7 = 44.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 7)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Reg Pmag Pie";
					amount8 = 30.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Lar Pmag Pie";
					amount8 = 44.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 8)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Reg Pmag Pie";
					amount9 = 30.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Lar Pmag Pie";
					amount9 = 44.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 9)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Reg Pmag Pie";
					amount10 = 30.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Lar Pmag Pie";
					amount10 = 44.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else
		{
		term = "No";
		}
	}
	// Buko Pie
	else if(a == "P2") 
	{
		if(count == 0)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Reg Buko Pie";
					amount1 = 30.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Lar Buko Pie";
					amount1 = 44.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if (count == 1)
		{	
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Reg Buko Pie";
					amount2 = 30.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Lar Buko Pie";
					amount2 = 44.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 2)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Reg Buko Pie";
					amount3 = 30.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Lar Buko Pie";
					amount3 = 44.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 3)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Reg Buko Pie";
					amount4 = 30.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Lar Buko Pie";
					amount4 = 44.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 4)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Reg Buko Pie";
					amount5 = 30.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Lar Buko Pie";
					amount5 = 44.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 5)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Reg Buko Pie";
					amount6 = 30.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Lar Buko Pie";
					amount6 = 44.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 6)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Reg Buko Pie";
					amount7 = 30.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Lar Buko Pie";
					amount7 = 44.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 7)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Reg Buko Pie";
					amount8 = 30.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Lar Buko Pie";
					amount8 = 44.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 8)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Reg Buko Pie";
					amount9 = 30.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Lar Buko Pie";
					amount9 = 44.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 9)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Reg Buko Pie";
					amount10 = 30.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Lar Buko Pie";
					amount10 = 44.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else
		{
		term = "No";
		}
	}
	// Tuna Pie/ Spicy Tuna Pie
	else if(a == "P3") 
	{
		if(count == 0)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Reg Tuna Pie";
					amount1 = 45.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Lar Tuna Pie";
					amount1 = 59.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if (count == 1)
		{	
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Reg Tuna Pie";
					amount2 = 45.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Lar Tuna Pie";
					amount2 = 59.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 2)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Reg Tuna Pie";
					amount3 = 45.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Lar Tuna Pie";
					amount3 = 59.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 3)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Reg Tuna Pie";
					amount4 = 45.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Lar Tuna Pie";
					amount4 = 59.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 4)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Reg Tuna Pie";
					amount5 = 45.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Lar Tuna Pie";
					amount5 = 59.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 5)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Reg Tuna Pie";
					amount6 = 45.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Lar Tuna Pie";
					amount6 = 59.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 6)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Reg Tuna Pie";
					amount7 = 45.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Lar Tuna Pie";
					amount7 = 59.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 7)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Reg Tuna Pie";
					amount8 = 45.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Lar Tuna Pie";
					amount8 = 59.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 8)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Reg Tuna Pie";
					amount9 = 45.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Lar Tuna Pie";
					amount9 = 59.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 9)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Reg Tuna Pie";
					amount10 = 45.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Lar Tuna Pie";
					amount10 = 59.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else
		{
		term = "No";
		}
	}
	// Brown Sugar Milk Tea
	else if(a == "G1") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Brn Sgr Mlk Tea";
		amount1 = 50.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Brn Sgr Mlk Tea";
		amount2 = 50.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Brn Sgr Mlk Tea";
		amount3 = 50.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Brn Sgr Mlk Tea";
		amount4 = 50.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Brn Sgr Mlk Tea";
		amount5 = 50.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Brn Sgr Mlk Tea";
		amount6 = 50.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Brn Sgr Mlk Tea";
		amount7 = 50.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Brn Sgr Mlk Tea";
		amount8 = 50.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Brn Sgr Mlk Tea";
		amount9 = 50.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Brn Sgr Mlk Tea";
		amount10 = 50.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Brown Sugar Milk Tea w/ Pearls
	else if(a == "G2") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Brn Mlk Tea Prl";
		amount1 = 75.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Brn Mlk Tea Prl";
		amount2 = 75.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Brn Mlk Tea Prl";
		amount3 = 75.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Brn Mlk Tea Prl";
		amount4 = 75.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Brn Mlk Tea Prl";
		amount5 = 75.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Brn Mlk Tea Prl";
		amount6 = 75.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Brn Mlk Tea Prl";
		amount7 = 75.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Brn Mlk Tea Prl";
		amount8 = 75.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Brn Mlk Tea Prl";
		amount9 = 75.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Brn Mlk Tea Prl";
		amount10 = 75.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Iced Coffee
	else if(a == "G3") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1 Iced Coffee";
		amount1 = 39.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1 Iced Coffee";
		amount2 = 39.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1 Iced Coffee";
		amount3 = 39.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1 Iced Coffee";
		amount4 = 39.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1 Iced Coffee";
		amount5 = 39.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1 Iced Coffee";
		amount6 = 39.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1 Iced Coffee";
		amount7 = 39.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1 Iced Coffee";
		amount8 = 39.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1 Iced Coffee";
		amount9 = 39.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1 Iced Coffee";
		amount10 = 39.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Iced Coffee w/ Coffee Jelly
	else if(a == "G4") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "Iced Coffee Jly";
		amount1 = 59.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "Iced Coffee Jly";
		amount2 = 59.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "Iced Coffee Jly";
		amount3 = 59.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "Iced Coffee Jly";
		amount4 = 59.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "Iced Coffee Jly";
		amount5 = 59.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "Iced Coffee Jly";
		amount6 = 59.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "Iced Coffee Jly";
		amount7 = 59.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "Iced Coffee Jly";
		amount8 = 59.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "Iced Coffee Jly";
		amount9 = 59.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "Iced Coffee Jly";
		amount10 = 59.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Softdrinks
	else if(a == "G5") 
	{
		if(count == 0)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Reg Sft Drks";
					amount1 = 45.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Lar Sft Drks";
					amount1 = 60.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if (count == 1)
		{	
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Reg Sft Drks";
					amount2 = 45.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Lar Sft Drks";
					amount2 = 60.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 2)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Reg Sft Drks";
					amount3 = 45.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Lar Sft Drks";
					amount3 = 60.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 3)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Reg Sft Drks";
					amount4 = 45.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Lar Sft Drks";
					amount4 = 60.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 4)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Reg Sft Drks";
					amount5 = 45.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Lar Sft Drks";
					amount5 = 60.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 5)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Reg Sft Drks";
					amount6 = 45.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Lar Sft Drks";
					amount6 = 60.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 6)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Reg Sft Drks";
					amount7 = 45.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Lar Sft Drks";
					amount7 = 60.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 7)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Reg Sft Drks";
					amount8 = 45.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Lar Sft Drks";
					amount8 = 60.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 8)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Reg Sft Drks";
					amount9 = 45.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Lar Sft Drks";
					amount9 = 60.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 9)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Reg Sft Drks";
					amount10 = 45.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Lar Sft Drks";
					amount10 = 60.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else
		{
		term = "No";
		}
	}
	// Iced Tea
	else if(a == "G6") 
	{
		if(count == 0)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Reg Iced Tea";
					amount1 = 55.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Lar Iced Tea";
					amount1 = 70.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if (count == 1)
		{	
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Reg Iced Tea";
					amount2 = 55.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Lar Iced Tea";
					amount2 = 70.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 2)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Reg Iced Tea";
					amount3 = 55.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Lar Iced Tea";
					amount3 = 70.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 3)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Reg Iced Tea";
					amount4 = 55.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Lar Iced Tea";
					amount4 = 70.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 4)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Reg Iced Tea";
					amount5 = 55.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Lar Iced Tea";
					amount5 = 70.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 5)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Reg Iced Tea";
					amount6 = 55.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Lar Iced Tea";
					amount6 = 70.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 6)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Reg Iced Tea";
					amount7 = 55.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Lar Iced Tea";
					amount7 = 70.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Reg Iced Tea";
					amount8 = 55.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Lar Iced Tea";
					amount8 = 70.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 8)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Reg Iced Tea";
					amount9 = 55.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Lar Iced Tea";
					amount9 = 70.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 9)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Reg Iced Tea";
					amount10 = 55.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Lar Iced Tea";
					amount10 = 70.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else
		{
		term = "No";
		}
	}
	// Pineapple Juice
	else if(a == "G7") 
	{
		if(count == 0)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Reg Pine Jui";
					amount1 = 55.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
					order1 = "Lar Pine Jui";
					amount1 = 70.00 * quantity1;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if (count == 1)
		{	
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Reg Pine Jui";
					amount2 = 55.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
					order2 = "Lar Pine Jui";
					amount2 = 70.00 * quantity2;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 2)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Reg Pine Jui";
					amount3 = 55.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
					order3 = "Lar Pine Jui";
					amount3 = 70.00 * quantity3;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 3)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Reg Pine Jui";
					amount4 = 55.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
					order4 = "Lar Pine Jui";
					amount4 = 70.00 * quantity4;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 4)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Reg Pine Jui";
					amount5 = 55.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
					order5 = "Lar Pine Jui";
					amount5 = 70.00 * quantity5;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 5)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Reg Pine Jui";
					amount6 = 55.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
					order6 = "Lar Pine Jui";
					amount6 = 70.00 * quantity6;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 6)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Reg Pine Jui";
					amount7 = 55.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
					order7 = "Lar Pine Jui";
					amount7 = 70.00 * quantity7;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 7)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Reg Pine Jui";
					amount8 = 55.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
					order8 = "Lar Pine Jui";
					amount8 = 70.00 * quantity8;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 8)
		{
		do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Reg Pine Jui";
					amount9 = 55.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
					order9 = "Lar Pine Jui";
					amount9 = 70.00 * quantity9;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else if(count == 9)
		{
			do{
				cout<<"\t \t \t \t \t Selection(Reg/Lar): "; cin>>type;
				if(type == "Reg")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Reg Pine Jui";
					amount10 = 55.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				
				else if (type == "Lar")
				{
					cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
					order10 = "Lar Pine Jui";
					amount10 = 70.00 * quantity10;
					selection = "N";
					cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
					cout<<""<<endl;
					count++;
				}
				else
				{
					cout<<"\t \t \t \t \t That size doesn't exist please retype again"<<endl;
					cout<<""<<endl;
				}
  			}while(selection != "N"); 
		}
		else
		{
		term = "No";
		}
	}
	// Brewed Coffee
	else if(a == "G8") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1 Brwd Coffee";
		amount1 = 30.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1 Brwd Coffee";
		amount2 = 30.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1 Brwd Coffee";
		amount3 = 30.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1 Brwd Coffee";
		amount4 = 30.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1 Brwd Coffee";
		amount5 = 30.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1 Brwd Coffee";
		amount6 = 30.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1 Brwd Coffee";
		amount7 = 30.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1 Brwd Coffee";
		amount8 = 30.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1 Brwd Coffee";
		amount9 = 30.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1 Brwd Coffee";
		amount10 = 30.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Hot Chocolate
	else if(a == "G9") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1 Hot Chocolt";
		amount1 = 36.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1 Hot Chocolt";
		amount2 = 36.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1 Hot Chocolt";
		amount3 = 36.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1 Hot Chocolt";
		amount4 = 36.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1 Hot Chocolt";
		amount5 = 36.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1 Hot Chocolt";
		amount6 = 36.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1 Hot Chocolt";
		amount7 = 36.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1 Hot Chocolt";
		amount8 = 36.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1 Hot Chocolt";
		amount9 = 36.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1 Hot Chocolt";
		amount10 = 36.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
	// Bottled Water
	else if(a == "G10") 
	{
		if(count == 0)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity1;
		order1 = "1 Bttled Water";
		amount1 = 23.00 * quantity1;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if (count == 1)
		{	
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity2;
		order2 = "1 Bttled Water";
		amount2 = 23.00 * quantity2;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 2)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity3;
		order3 = "1 Bttled Water";
		amount3 = 23.00 * quantity3;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 3)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity4;
		order4 = "1 Bttled Water";
		amount4 = 23.00 * quantity4;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 4)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity5;
		order5 = "1 Bttled Water";
		amount5 = 23.00 * quantity5;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 5)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity6;
		order6 = "1 Bttled Water";
		amount6 = 23.00 * quantity6;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 6)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity7;
		order7 = "1 Bttled Water";
		amount7 = 23.00 * quantity7;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 7)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity8;
		order8 = "1 Bttled Water";
		amount8 = 23.00 * quantity8;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 8)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity9;
		order9 = "1 Bttled Water";
		amount9 = 23.00 * quantity9;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else if(count == 9)
		{
		cout<<"\t \t \t \t \t Quantity: "; cin>>quantity10;
		order10 = "1 Bttled Water";
		amount10 = 23.00 * quantity10;
		cout<<"\t \t \t \t \t Another Order?: "; cin>>term;
		cout<<""<<endl;
		count++;
		}
		else
		{
		term = "No";
		}
	}
else
	{
		cout<<"\t \t \t \t \t That is not in the list"<<endl;
	}
	
	total = amount1 + amount2 + amount3 + amount4 + amount5 + amount6 + amount7 + amount8 + amount9 + amount10;
	cout<<"\t \t \t \t \t Sub Total of Current Order: "<<"\t "<<total<<endl;
	cout<<""<<endl;		
}while(term != "No");
	
	// Drinks
	
	dam = drk1 + drk2 + drk3 + drk4 + drk5 + drk6 + drk7 + drk8 + drk9 + drk10;

	if(dam == -2147483648 or dam == 0)
	{
		drinks = "Reg Drks";
		dam = 0;
	}
	else
	{
		cout<<"\t \t \t \t \t Enter Desired Drinks: "; cin>>drinks;
		cout<<""<<endl; 
	}
		
	
	// Discount
	
	if(senior == "Yes")
	{
		total = amount1 + amount2 + amount3 + amount4 + amount5 + amount6 + amount7 + amount8 + amount9 + amount10;
		sub = amount1 + amount2 + amount3 + amount4 + amount5 + amount6 + amount7 + amount8 + amount9 + amount10;
		discount = total * 0.10;
		total = total - discount;
	}
	else
	{
		sub = amount1 + amount2 + amount3 + amount4 + amount5 + amount6 + amount7 + amount8 + amount9 + amount10;
		total = amount1 + amount2 + amount3 + amount4 + amount5 + amount6 + amount7 + amount8 + amount9 + amount10;
		discount = 0;
	}
	
	// Payment
	
	
	cout<<"\t \t \t \t \t Enter Payment Amount: "; cin>>payment;
	change = payment - total;
	
	
	if (count == 1) // There is only one order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 2) // There is two order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 3) // There is three order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 4) // There is four order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 5) // There is five order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<order5<< " x"<<quantity5<<"\t \t \t"<<amount5<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 6) // There is six order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<order5<< " x"<<quantity5<<"\t \t \t"<<amount5<<endl;
		cout<<"\t \t \t \t \t "<<order6<< " x"<<quantity6<<"\t \t \t"<<amount6<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 7) // There is seven order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<order5<< " x"<<quantity5<<"\t \t \t"<<amount5<<endl;
		cout<<"\t \t \t \t \t "<<order6<< " x"<<quantity6<<"\t \t \t"<<amount6<<endl;
		cout<<"\t \t \t \t \t "<<order7<< " x"<<quantity7<<"\t \t \t"<<amount7<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 8) // There is eight order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<order5<< " x"<<quantity5<<"\t \t \t"<<amount5<<endl;
		cout<<"\t \t \t \t \t "<<order6<< " x"<<quantity6<<"\t \t \t"<<amount6<<endl;
		cout<<"\t \t \t \t \t "<<order7<< " x"<<quantity7<<"\t \t \t"<<amount7<<endl;
		cout<<"\t \t \t \t \t "<<order8<< " x"<<quantity8<<"\t \t \t"<<amount8<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 9) // There is nine order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<order5<< " x"<<quantity5<<"\t \t \t"<<amount5<<endl;
		cout<<"\t \t \t \t \t "<<order6<< " x"<<quantity6<<"\t \t \t"<<amount6<<endl;
		cout<<"\t \t \t \t \t "<<order7<< " x"<<quantity7<<"\t \t \t"<<amount7<<endl;
		cout<<"\t \t \t \t \t "<<order8<< " x"<<quantity8<<"\t \t \t"<<amount8<<endl;
		cout<<"\t \t \t \t \t "<<order9<< " x"<<quantity9<<"\t \t \t"<<amount9<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else if (count == 10) // There is ten order
	{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<order5<< " x"<<quantity5<<"\t \t \t"<<amount5<<endl;
		cout<<"\t \t \t \t \t "<<order6<< " x"<<quantity6<<"\t \t \t"<<amount6<<endl;
		cout<<"\t \t \t \t \t "<<order7<< " x"<<quantity7<<"\t \t \t"<<amount7<<endl;
		cout<<"\t \t \t \t \t "<<order8<< " x"<<quantity8<<"\t \t \t"<<amount8<<endl;
		cout<<"\t \t \t \t \t "<<order9<< " x"<<quantity9<<"\t \t \t"<<amount9<<endl;
		cout<<"\t \t \t \t \t "<<order10<< " x"<<quantity10<<"\t \t \t"<<amount10<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
	}
	else // Maximum Order
		{
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t  JOLIBEE"<<endl;
		cout<<"\t \t \t \t \t \t   Second Branch Entrek(S)"<<endl;
		cout<<"\t \t \t \t \t    Jolibee H. Alarcon St. Antipolo City"<<endl;
		cout<<"\t \t \t \t \t          2020-200407 - 2020-200405"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t \t \t "<<dine<<endl;
		cout<<"\t \t \t \t \t \t     Date: 11/13/2022"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t "<<order1<< " x"<<quantity1<<"\t \t \t"<<amount1<<endl;
		cout<<"\t \t \t \t \t "<<order2<< " x"<<quantity2<<"\t \t \t"<<amount2<<endl;
		cout<<"\t \t \t \t \t "<<order3<< " x"<<quantity3<<"\t \t \t"<<amount3<<endl;
		cout<<"\t \t \t \t \t "<<order4<< " x"<<quantity4<<"\t \t \t"<<amount4<<endl;
		cout<<"\t \t \t \t \t "<<order5<< " x"<<quantity5<<"\t \t \t"<<amount5<<endl;
		cout<<"\t \t \t \t \t "<<order6<< " x"<<quantity6<<"\t \t \t"<<amount6<<endl;
		cout<<"\t \t \t \t \t "<<order7<< " x"<<quantity7<<"\t \t \t"<<amount7<<endl;
		cout<<"\t \t \t \t \t "<<order8<< " x"<<quantity8<<"\t \t \t"<<amount8<<endl;
		cout<<"\t \t \t \t \t "<<order9<< " x"<<quantity9<<"\t \t \t"<<amount9<<endl;
		cout<<"\t \t \t \t \t "<<order10<< " x"<<quantity10<<"\t \t \t"<<amount10<<endl;
		cout<<"\t \t \t \t \t "<<drinks<< " x"<<dam<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t \t Item Sold: \t \t \t \t"<<count<<endl;
		cout<<"\t \t \t \t \t Sub Total: \t \t \t \t"<<sub<<endl;
		cout<<"\t \t \t \t \t Discount: \t \t \t \t"<<discount<<endl;
		cout<<"\t \t \t \t \t Total: \t \t \t \t"<<total<<endl;
		cout<<"\t \t \t \t \t Payment: \t \t \t \t"<<payment<<endl;
		cout<<"\t \t \t \t \t Change Due: \t \t \t \t"<<change<<endl;
		cout<<""<<endl;
		cout<<"\t \t \t \t -----------------------------------------------------------"<<endl;
		}
	dam = 0;
	drk1, drk2, drk3, drk4, drk5, drk6, drk7, drk8, drk9, drk10 = 0;
	cout<<""<<endl;
	cout<<"\t \t \t Do you want another transaction? (Yes/No): "; cin>>another;
	cout<<""<<endl;
}while(another != "No");
}
