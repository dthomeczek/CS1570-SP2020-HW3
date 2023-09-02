// Programmer: Devin Thomeczek
// MST Username: djtpfr
// Section: 101
// Date: 2/14/2020
// File: hw3.cpp
// Purpose: To determine what work someone will do based on their motivation

#include <iostream>
using namespace std;

int main()
{
  const int NO_NEG = 0; // Used to test for negative values
  const int MAX_RAIN = 50; // High end cap for rain amount
  const int LOW_MID_GAS = 5; // Lower middle cap for gas amount
  const int HIGH_MID_GAS = 10; // Higher middle cap for gas amount
  const int MAX_GAS = 500; // High end cap for gas amount
  const float LEAN = 1.5; // Value for whether to lean on a rake or a broom
  const float GRASS_RAIN = 0.5; // Rain allowed for mowing

  
  string name; // Takes the user's name
  char motivation; // Takes the user's motivation (a-e)
  char chal_pres; // Used to determine if Chalmers is present (y/n)
  int children; // Takes the number of children
  int adults; // Takes the number of adults
  float gals_gas; // Takes in the gallons of gas
  float rain_amount; // Takes in the inches of rain

  // Brief welcome and promt for user's name
  cout << "Welcome to how you should determine how to avoid work!" << endl <<
  endl << endl;
  cout << "First, what is your name?" << endl;
  cin >> name;
  
  // Promt (name) for their motivation (a-e)
  cout << "Welcome " << name << "!" << endl;
  cout << "What is your motivation today " << name << "? (a-e)" << endl;
  cout << "a - an excellent worker" << endl <<
  "b - basically a good worker" << endl <<
  "c - can't get good help no more!" << endl <<
  "d - don't plan on work from me" << endl <<
  "e - elevated slothfulness" << endl;
  cin >> motivation;

  // While loop to test for valid inputs
  while (motivation != 'a' && motivation != 'b' && motivation != 'c' &&
  motivation != 'd' && motivation != 'e' && motivation != 'A' &&
  motivation != 'B' && motivation != 'C' && motivation != 'D' &&
  motivation != 'E')
  {
    cout << "Invalid input! Please enter a valid input! (a-e)" << endl;
    cout << "a - an excellent worker" << endl <<
    "b - basically a good worker" << endl <<
    "c - can't get good help no more!" << endl <<
    "d - don't plan on work from me" << endl <<
    "e - elevated slothfulness" << endl;
    cin >> motivation; 
  }
  
  // Repeat input to user
  cout << "Ah, so you picked " << motivation << ", " << name
  << "!" << endl;

  // Check for motivation inputs and output accordingly
  if (motivation == 'e' || motivation == 'E')
  {
    cout << name << ", you should stay in bed and skip work!" << endl;
  }
  else if (motivation == 'd' || motivation == 'D')
  {
    // Prompt for a valid rain amount (0in-50in)
    cout << name << ", how much did it rain last night? (0in-50in)" << endl;
    cin >> rain_amount;

    // Check if the rain amount is valid 
    while (rain_amount < NO_NEG || rain_amount > MAX_RAIN)
    {
      cout << "Invalid amount! Enter a valid amount! (0in-50in)" << endl;
      cin >> rain_amount;
    }
      
      // Determine what to do based on the rain amount
      if (rain_amount > NO_NEG)
      {
        cout << name << ", you should hide in the tool shed!" << endl;
      }
      else
      {
        cout << name << ", you should hide in the hedge!" << endl;
      }
  }
  else if (motivation == 'c' || motivation == 'C')
  {
    // Prompt for a valid rain amount (0in-50in)
    cout << name << ", how much did it rain last night? (0in-50in)" << endl;
    cin >> rain_amount;

    // Check if the rain amount is valid
    while (rain_amount < NO_NEG || rain_amount > MAX_RAIN)
    {
      cout << "Invalid amount! Enter a valid amount! (0in-50in)" << endl;
      cin >> rain_amount;
    }

    // Determine what to do based on the rain amount
    if (rain_amount <= LEAN)
    {
      cout << name << ", you should lean on a rake!" << endl;
    }
    else
    {
      cout << name << ", you should lean on a broom!" << endl;
    }
  }
  else if (motivation == 'b' || motivation == 'B')
  {
    // Promt user for whether Chalmers is present or not (y/n)
    cout << name << ", is Superintendent Chalmers present? (y/n)" << endl;
    cin >> chal_pres;

    // Checks whether Chalmers is present
    while (chal_pres != 'y' && chal_pres != 'Y' && chal_pres != 'n' &&
    chal_pres != 'N')
    {
      cout << "Invalid input! Please enter a valid input! (y/n)" << endl;
      cin >> chal_pres;
    } 
    
    // Determine what to do based on whether Chalmers is present
    // or whether there are more adults than children present
    if (chal_pres == 'y' || chal_pres == 'Y')
    {
      cout << name << ", you should get on your hands and knees and scrub" <<
      " the floor!" << endl;
    }
    else 
    {
      // Prompt user for number of children and number of adults
      cout << name << ", how many children are present?" << endl;
      cin >> children;

      // Check if children is greater than or equal 0
      while (children < 0)
      {
        cout << "Invalid input! Please enter a valid input!" << endl;
        cin >> children;
      }
      
      cout << name << ", how many adults are present?" << endl;
      cin >> adults;
      
      // Check if adults is greater than or equal to 0
      while (adults < 0)
      {
        cout << "Invalid input! Please enter a valid input!" << endl;
        cin >> adults;
      }

      // Checks if children is less than adults 
      if (children < adults)
      {
        cout << name << ", you should get on your hands and knees and scrub" <<
        " the floor!" << endl;
      }
      else
      {
        cout << name << ", you should mop the floor!" << endl;
      }
    }
  }
  else if (motivation == 'a' || motivation == 'A')
  {
    // Prompt for a valid rain amount (0in-50in)
    cout << name << ", how much did it rain last night? (0in-50in)" << endl;
    cin >> rain_amount;

    // Check if the rain amount is valid
    while (rain_amount < NO_NEG || rain_amount > MAX_RAIN)
    {
      cout << "Invalid amount! Enter a valid amount! (0in-50in)" << endl;
      cin >> rain_amount;
    }
    if (rain_amount < GRASS_RAIN)
    {
      // Prompt for a valid gas amount (0gal-500gal)
      cout << name << ", how much gas do you have? (0gal-500gal)" << endl;
      cin >> gals_gas;

      // Check if the gas amount is valid
      while (gals_gas < NO_NEG || gals_gas > MAX_GAS)
      {
        cout << "Invalid amount! Enter a valid amount! (0gal-500gal)" << endl;
        cin >> gals_gas;
      }

      // Determine what to do based on the rain and amount of gas
      if (LOW_MID_GAS <= gals_gas && HIGH_MID_GAS >= gals_gas)
      {
        cout << name << ", you should mow the grass!" << endl;
      }
      else if (gals_gas > HIGH_MID_GAS)
      {
        cout << name << ", you should get on the tractor and do laps" <<
        " around the school!" << endl;
      }
      else if (gals_gas < LOW_MID_GAS)
      {
        cout << name << ", you should go get more gas!" << endl;
      }
    }
    else if (rain_amount > GRASS_RAIN)
    {
      // Prompt for a valid gas amount (0gal-500gal)
      cout << name << ", how much gas do you have? (0gal-500gal)" << endl;
      cin >> gals_gas;

      // Check if the gas amount is valid
      while (gals_gas < NO_NEG || gals_gas > MAX_GAS)
      {
        cout << "Invalid amount! Enter a valid amount! (0gal-500gal)" << endl;
        cin >> gals_gas;
      }
      if (gals_gas < LOW_MID_GAS)
      {
        cout << name << ", you should burn the old text books from the "
        << "1940's!" << endl;
      }
      else
      {
        cout << name << ", you should use that gas to clean the bathrooms!" <<
        endl;
      }
    }
    else
    {
      cout << name << ", you should write C++ programs!" << endl;
    }
  }

  // Brief ending message
  cout << "Thank you and have a great day " << name << "!" << endl;

  return 0;
}