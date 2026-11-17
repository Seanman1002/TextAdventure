#include <iostream>
#include <string>

using namespace std;

int main()
{

    // just some random nonsense i put here to try and remember if/else functions
  /*
  string answer;
  cout << "Want to hear a joke? Type y/yes to hear a joke or n/no if you suck: ";
  cin >> answer;

  if (answer == "y" || answer == "yes"){
    cout << "\nwhy do programmers prefer dark mode? because light mode would attract bugs!\n";

  }
  else if (answer == "n" || answer == "no"){
    cout << "well screw you, it was going to be funny!\n";
  }
  else
    cout << "Invalid response, type either y, yes, n, no.\n";
*/

// a const value for how many points you are allowed to allocate and a integer value for how many points are left when you allocate points

const int STARTING_POINTS=30;
int remainingPoints = STARTING_POINTS;


// the string values for allocating stats and which stat to allocate

string allocate;
string statToAllocate;

// a boolean value to eventually implement in the while loop to continue allocating points without having to do it one at a time for a single stat

bool isDone = false;

// The base stat values so they aren't at 0

int strength=10;
int endurance=10;
int agility=10;
int charisma=10;
int luck=10;

// loop for allocating points into stats

while (remainingPoints > 0 && !isDone){
cout << "Remaining Points: " << remainingPoints << endl;
cout << "Strength: " << strength <<endl;

cout << "Endurance: " << endurance << endl;

cout << "Agility: " << agility << endl;

cout << "Charisma: " << charisma << endl;

cout << "Luck: " << luck << endl;

cout << "Choose which stat to edit. 1 for Strength, 2 for Endurance, 3 for Agility, 4 for  Charisma, or 5 for Luck.\n";

cin >> statToAllocate;

if(statToAllocate == "1"){
    cout << "Strength points to allocate: " << strength << endl;;

    cin >> allocate;

    if (allocate == "a"){
    strength++;
    remainingPoints--;}
    else if(allocate == "s"){
        strength--;
        remainingPoints++;
    }

}
else if(statToAllocate == "2"){
    cout << "Endurance points to allocate: " << endurance << endl;

    cin >> allocate;
    if (allocate == "a"){


    endurance++;
    remainingPoints--;
    }
    else if(allocate == "s"){
        endurance--;
        remainingPoints++;
}
}
else if(statToAllocate == "3"){
    cout << "Agility points to allocate: " << agility << endl;

    cin >> allocate;
    if(allocate == "a"){
    agility++;
    remainingPoints--;
    }
    else if(allocate == "s"){
        agility--;
        remainingPoints++;
    }
}
else if(statToAllocate == "4"){
    cout << "Charisma points to allocate: " << charisma << endl;

    cin >> allocate;
    if (allocate == "a"){
    charisma++;
    remainingPoints--;
    }
    if (allocate == "s"){
        charisma--;
        remainingPoints++;
    }
}
else if(statToAllocate == "5"){
    cout << "Luck points to allocate: " << luck << endl;

    cin >> allocate;
    if (allocate == "a"){
    luck++;
    remainingPoints--;
    }
    else if(allocate == "s"){
        luck--;
        remainingPoints++;
    }
}
else{
    cout << "Invalid Choice!\n";
}

}

cout << "Strength is: " << strength << endl;

cout << "Endurance is: " << endurance << endl;

cout << "Agility is: " << agility << endl;

cout << "Charisma is: " << charisma << endl;

cout << "Luck is: " << luck << endl;


string items;
string itemMaterial = "";
double critDamage = strength * 2 + agility / 2;
double critRate = agility + luck / 2;
//cout << "What items will you take with ye?\n";

int itemWeight = 0;
int materialWeight = 0;

enum Items{Sword=7, Shield=6, Boots=3, Gauntlets=4, Gloves=2, Potion=1, Helmet=3, Cuirass=10, MageBook=2};

enum MaterialWeight{Leather=1, Iron=2, Steel=3, Elven=4, Dwarven=5, Ebony=6};


//cin >> items;

// If Else block for item weight per valid input

if (items == "sword"){
    itemWeight = Sword;
}
else if (items == "shield"){
    itemWeight = Shield;
}
else if (items == "boots"){
    itemWeight = Boots;
}
else if (items == "gauntlets"){
    itemWeight = Gauntlets;
}
else if (items == "gloves"){
    itemWeight = Gloves;
}
else if (items == "potion"){
    itemWeight = Potion;
}
else if (items == "helmet"){
    itemWeight = Helmet;
}
else if (items == "cuirass"){
    itemWeight = Cuirass;
}
else if (items == "magebook"){
    itemWeight = MageBook;
}
else{
    cout << "Invalid option!\n";
}


if (itemMaterial == "leather"){
    materialWeight = Leather;
}
else if (itemMaterial == "iron"){
    materialWeight = Iron;
}
else if (itemMaterial == "steel"){
    materialWeight = Steel;
}
else if (itemMaterial == "elven"){
    materialWeight = Elven;
}
else if (itemMaterial == "dwarven"){
    materialWeight = Dwarven;
}
else if (itemMaterial == "ebony"){
    materialWeight = Ebony;
}
else {
    cout << "Invalid Material Option!\n";
}

int maxWeight = strength * 5;
cout << "Your carry weight limit is: " << maxWeight << endl;

// While loop for choosing multiple items as long as you don't exceed your maximum carry capacity
string chosenInventory = "";
int totalWeight = 0;

string answer = "y";
cout << "Choose which items to take. type 'sword', 'shield', 'gauntlets', 'boots', 'helmet', 'potion', 'magebook', 'gloves', or 'cuirass' for the respective items\n";
while (totalWeight < maxWeight && answer == "y")
{

   int itemWeight = 0;
   int materialWeight = 0;
    int currentWeight = itemWeight + materialWeight;

if (answer == "y"){
    cout << "choose another item to take with you.\n";
    cin >> items;
    //cout << "choose the material of said item.\n";
    //cin >> itemMaterial;
    cout << "Your current weight is: " << currentWeight << endl;
}
else if (answer == "n"){
    cout << "You are bringing with ye: " << items << " Go now and fulfill your destiny!\n";

    }
else {
    cout << "invalid Choice! Type either 'y' to choose another item or 'n' to be done with it.\n";
    cin >> answer;
}
  if (items == "sword"){
    //chosenInventory += items + ", ";
    itemWeight = Sword;
    cout << "The weight of this sword is: " << itemWeight << endl;
    cout << "You chose a sword.\n";
  }
  else if (items == "shield"){
        //chosenInventory += items + ", ";
        cout << "You chose a shield to protect thyself.\n";
        itemWeight = Shield;
        cout << "The weight of this shield is: " << itemWeight << "\n";

  }
  else if(items == "boots"){
    //chosenInventory += items + ", ";
    cout << "You chose to wear some boots.\n";
    itemWeight = Boots;
    cout << "Wearing these boots weighs: " << itemWeight << "\n";
  }
  else if(items == "gauntlets"){
    //chosenInventory += items + ", ";
    cout << "You chose to wear a pair of gauntlets.\n";
    itemWeight = Gauntlets;
    cout << "The pair of gauntlets weighs: " << itemWeight << "\n";
  }
  else if(items == "gloves"){
    //chosenInventory += items + ", ";
    cout << "you chose to wear a pair of gloves.\n";
    itemWeight = Gloves;
    cout << "these gloves weigh: " << itemWeight << "\n";
  }
  else if(items == "helmet"){
    //chosenInventory += items + ", ";
    cout << "You chose to take a helmet to protect your noggin.\n";
    itemWeight = Helmet;
    cout << "This helmet weighs: " << itemWeight << "\n";
  }
  else if(items == "potion"){
    //chosenInventory += items + ", ";
    cout << "You decided to bring some potions. never hurts to be prepared.\n";
    itemWeight = Potion;
    cout << "This set of potions weighs: " << itemWeight << "\n";
  }
  else if(items == "cuirass"){
    //chosenInventory += items + ", ";
    cout << "You decide to wear a cuirass to protect your body.\n";
    itemWeight = Cuirass;
    cout << "This cuirass weighs: " << itemWeight << "\n";
  }
  else if(items == "magebook"){
    //chosenInventory += items + ", ";
    cout << "You bring with you a book of spells fitting for a wise mage.\n";
    itemWeight = MageBook;
    cout << "This tome of spells weighs: " << itemWeight << "\n";
  }
  else{
    cout << "Invalid Option!";
  }
  if (items != "potion" && items != "magebook"){
    cout << "choose the material of your item.\n";
    cin >> itemMaterial;
    cout << "you chose: " << itemMaterial << "\n";
    chosenInventory += itemMaterial;
    if (itemMaterial == "iron"){
        itemMaterial = Iron;
    }
    else if(itemMaterial == "steel"){
        itemMaterial = Steel;
    }
    else if(itemMaterial == "leather"){
        itemMaterial = Leather;

    }
    else if(itemMaterial == "elven"){
        itemMaterial = Elven;
    }
    else if (itemMaterial == "dwarven"){
        itemMaterial = Dwarven;
    }
    else if(itemMaterial == "ebony"){
        itemMaterial = Ebony;
    }

  }

else{
    cout << "not a material!\n";
}
  // cout << "You chose a " << items << "to bring with you.\n";

  cout << "Do you wish to bring another item? type 'y' for yes or 'n' for no\n";
  cin >> answer;
  chosenInventory += itemMaterial + "" + items + "" + ", ";
  currentWeight = itemWeight + materialWeight;
  totalWeight += currentWeight;

  cout << "your inventory so far is: " << chosenInventory << " \n";

  cout << "Your total weight with your chosen items is: " << totalWeight << endl;


}




// Had to move this block of enum and int code bits up a bit more so that it would recognize the variables before the if block for sword
/*
int itemWeight = 0;
int materialWeight = 0;

enum Items{Sword=7, Shield=6, Boots=3, Gauntlets=4, Gloves=2, Potion=1, Helmet=3, Cuirass=10, MageBook=2};

enum ItemMaterial{Leather=1, Iron=2, Steel=3, Elven=4, Dwarven=5, Ebony=6};

  */
    return 0;
}


