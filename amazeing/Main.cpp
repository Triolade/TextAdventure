#include <iostream>

using namespace std;

void roomAa(int& x, int& y)
{
    cout << "You're in the room you originally fell into" << endl;
    cout << "There are doors on the south and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "This is a wall" << endl;
        break;
    case 'a':
    case 'A':
        cout << "This is a wall" << endl;
        break;
    case 's':
    case 'S':
        cout << "south" << endl;
        y++;
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}



void roomAb(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the north and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "north" << endl;
        y--;
        break;
    case 'a':
    case 'A':
        cout << "This is a wall" << endl;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomAc(int& x, int& y)
{
    cout << "There is a map scribbled onto the north wall of this room" << endl;
    cout << "There are doors on the south and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "The map reads as follows:" << endl;
        cout << "________________" << endl;
        cout << "| S __   |__   |" << endl;
        cout << "|_____|  |     |" << endl;
        cout << "| X    __|  |  |" << endl;
        cout << "|   __|   __|  |" << endl;
        cout << "|___________|_F|" << endl << endl;
        cout << "S = start, F = finish, X = this map" << endl;
        break;
    case 'a':
    case 'A':
        cout << "This is a wall" << endl;
        break;
    case 's':
    case 'S':
        cout << "south" << endl;
        y++;
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomAd(int& x, int& y, int& z)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the north, south and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "north" << endl;
        y--;
        break;
    case 'a':
    case 'A':
        cout << "This is a wall" << endl;
        break;
    case 's':
    case 'S':
        cout << "south" << endl;
        switch (z)
        {
        case 0:
            cout << "The door is locked" << endl;
            break;
        case 1:
            cout << "The door is locked" << endl;
            cout << "The nerd exclaims how much smarter than you he is and how a smart person would have a key already" << endl;
            break;
        case 2:
            cout << "You use the nerd's key to open the door" << endl;
            y++;
            break;
        }
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomAe(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the north and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "north" << endl;
        y--;
        break;
    case 'a':
    case 'A':
        cout << "This is a wall" << endl;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomBa(int& x, int& y, bool z)
{
    cout << "It is pitch black. ";

    if (z == 1)
    {
        cout << endl << "You turn on your headlamp illuminating the room." << endl;
        cout << "There doesn't seem to be anything of importance in this room" << endl;
        cout << "There are doors on the west and east walls" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "This is a wall" << endl;
            break;
        case 'a':
        case 'A':
            cout << "west" << endl;
            x--;
            break;
        case 's':
        case 'S':
            cout << "This is a wall" << endl;
            break;
        case 'd':
        case 'D':
            cout << "east" << endl;
            x++;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }
    else
    {
        cout << "You are likely to be eaten by a grue." << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "You run into a wall and are eaten by a grue" << endl;
            x = 10;
            y = 10;
            break;
        case 'a':
        case 'A':
            cout << "You run out of the room" << endl;
            x--;
            break;
        case 's':
        case 'S':
            cout << "You run into a wall and are eaten by a grue" << endl;
            x = 10;
            y = 10;
            break;
        case 'd':
        case 'D':
            cout << "You are eaten before you can make it to the other side of the room." << endl;
            x = 10;
            y = 10;
            break;
        default:
            cout << "You tripped in the darkness and are being attacked by a grue." << endl;
            break;
        }
    }
}


void roomBb(int& x, int& y, bool& z)
{
    if (z == 0)
    {
        cout << "There is a headlamp here, you equip it because why wouldn't you?" << endl;
        cout << "The only door is on the west wall" << endl;
        z = 1;
    }
    else
    {
        cout << "There doesn't seem to be anything of importance in this room" << endl;
        cout << "There is a door on the west wall" << endl;
    }

    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "This is a wall" << endl;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        cout << "This is a wall" << endl;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomBc(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "Doors are on the west, south, and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "This is a wall" << endl;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "south" << endl;
        y++;
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomBd(int& x, int& y, int& z)
{
    if (z == 0)
    {
        cout << "You encounter a Magic the Gathering player" << endl;
        cout << "He rants about the meta and you stop paying attention" << endl;
        z = 1;
    }
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "Doors are on the north and west walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "north" << endl;
        y--;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        cout << "This is a wall" << endl;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomBe(int& x, int& y, bool& z)
{
    // maybe fix the indentation on this function, ugh
    switch (z)
       case 0:
    {
        cout << "There is a sphinx in the center of this room" << endl;
        cout << "'I have a riddle. I'm a sphinx, it's what we do" << endl;
        cout << "In a lake, there's a patch of lily pads." << endl;
        cout << "Every day, the patch doubles in size." << endl;
        cout << "If it takes 10 days for the patch to cover the entire lake," << endl;
        cout << "how long would it take for the patch to cover half the lake?'" << endl;
        char solution;
        cin >> solution;
        switch (solution)
        {
        case '9':
            cout << "'You're correct. Continue on.'" << endl;
            z = 1;
            cout << "There are doors on the west and east walls" << endl;
            char direction;
            cin >> direction;
            switch (direction)
            {
            case 'w':
            case 'W':
                cout << "This is a wall" << endl;
                break;
            case 'a':
            case 'A':
                cout << "west" << endl;
                x--;
                break;
            case 's':
            case 'S':
                cout << "This is a wall" << endl;
                break;
            case 'd':
            case 'D':
                cout << "east" << endl;
                x++;
                break;
            default:
                cout << "please enter a valid input, you're wasting time" << endl;
                break;
            }
            break;
        default:
            cout << "You're wrong and shall be sent back" << endl;
            cout << "Please see me again when you're more prepared" << endl;
            x = 3;
            y = 1;
            break;
        }

        break;
       default:
           cout << "There is a sphinx in the center of this room" << endl;
           cout << "'Your intelligence was deemed worthy. Get going'" << endl;
           cout << "There are doors on the west and east walls" << endl;
           char direction;
           cin >> direction;
           switch (direction)
           {
           case 'w':
           case 'W':
               cout << "This is a wall" << endl;
               break;
           case 'a':
           case 'A':
               cout << "west" << endl;
               x--;
               break;
           case 's':
           case 'S':
               cout << "This is a wall" << endl;
               break;
           case 'd':
           case 'D':
               cout << "east" << endl;
               x++;
               break;
           default:
               cout << "please enter a valid input, you're wasting time" << endl;
               break;
           }
    }
}


void roomCa(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the west and south walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "This is a wall" << endl;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "south" << endl;
        y++;
        break;
    case 'd':
    case 'D':
        cout << "This is a wall" << endl;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomCb(int& x, int& y, int& z)
{
    char direction;
    if (z == 1)
    {
        cout << "You successfully led a Magic the Gathering player to their greatest weakness: showers" << endl;
        cout << "Upon merely seeing the soap, he whithers away, leaving behind a key that you pick up" << endl;
        z++;
        cout << "Doors are on the north and south walls" << endl;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "north" << endl;
            y--;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "This is a wall" << endl;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }
    else
    {
        cout << "There seems to be water trickling down from the ceiling and soap here." << endl;
        cout << "Doors are on the north and south walls" << endl;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "north" << endl;
            y--;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "This is a wall" << endl;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }
}


void roomCc(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the north and west walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "north" << endl;
        y--;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        cout << "This is a wall" << endl;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomCd(int& x, int& y, bool& b)
{
    cout << "There is a sphinx in the center of this room" << endl;

    switch (b)
    {
    case 0:
        cout << "'I have a riddle. I'm a sphinx, it's what we do" << endl;
        cout << "What tears down mountains, can be used to build castles," << endl;
        cout << "blinds some, yet helps others to see? Your options are:" << endl;
        cout << "1 Dynamite, 2 Truck, 3 Water, 4 Your face, 5 Ice, or 6 Sand'" << endl;
        char answer;
        cin >> answer;
        switch (answer)
        {
        case '6':
            cout << "'You're correct. Carry on'" << endl;
            cout << "There are doors on the south and east walls" << endl;
            b = 1;
            char direction;
            cin >> direction;
            switch (direction)
            {
            case 'w':
            case 'W':
                cout << "This is a wall" << endl;
                break;
            case 'a':
            case 'A':
                cout << "This is a wall" << endl;
                break;
            case 's':
            case 'S':
                cout << "south" << endl;
                y++;
                break;
            case 'd':
            case 'D':
                cout << "east" << endl;
                x++;
                break;
            default:
                cout << "please enter a valid input, you're wasting time" << endl;
                break;
            }
            break;
        default:
            cout << "You are incorrect. You will now be transported behind the first sphinx" << endl;
            cout << "Please come back more prepared'" << endl;
            x = 1;
            y = 5;
        }
        break;
    default:
        cout << "'Your intelligence was deemed worthy. Get going'" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "This is a wall" << endl;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "east" << endl;
            x++;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }




}


void roomCe(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the west, north and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "north" << endl;
        y--;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomDa(int& x, int& y, int& z)
{
    cout << "You find an bottle labeled 'antidote' lying on the ground in this room." << endl;
    if (z >= 6)
    {
        cout << "You can't pick up the antidote becuase you're unfortunately a woman and therefore don't have pockets" << endl;
        cout << "The only door is on the east wall" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "This is a wall" << endl;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "This is a wall" << endl;
            break;
        case 'd':
        case 'D':
            cout << "east" << endl;
            x++;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }
    else
    {
        cout << "You apparently see nothing wrong with using drugs off the ground in some strange dungeon and take the antidote." << endl;
        cout << "You're cured!!! Dungeon dirt drugs work well I guess" << endl;
        z = 200000;
        cout << "The only door is on the east wall" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "This is a wall" << endl;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "This is a wall" << endl;
            break;
        case 'd':
        case 'D':
            cout << "east" << endl;
            x++;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }
}


void roomDb(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the south and east walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "This is a wall" << endl;
        break;
    case 'a':
    case 'A':
        cout << "This is a wall" << endl;
        break;
    case 's':
    case 'S':
        cout << "south" << endl;
        y++;
        break;
    case 'd':
    case 'D':
        cout << "east" << endl;
        x++;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomDc(int& x, int& y, int& z)
{
    cout << "A thick cloud of purple poisonous gas fills this room, you have no choice but to inhale it." << endl;
    if ((z >= 1000) && (z <=1300))
    {
        cout << "You don't even feel the poison! You breathe it in like air." << endl;
        cout << "There are doors on the north and south walls" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "north" << endl;
            y--;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "This is a wall" << endl;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }
    else
    {
        cout << "You're now poisoned, judging by the density of it you have about 5 turns to live." << endl;
        z = 5;
        cout << "There are doors on the north and south walls" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "north" << endl;
            y--;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "This is a wall" << endl;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }
}


void roomDd(int& x, int& y)
{
    cout << "There doesn't seem to be anything of importance in this room" << endl;
    cout << "There are doors on the west and north walls" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        cout << "north" << endl;
        y--;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        cout << "This is a wall" << endl;
        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}


void roomDe(int& x, int& y, bool& w, bool& m, int& poi)
{
    cout << "The only door is on the west wall." << endl;
    cout << "The east wall has an assortment of fancy tech and a sign that says 'Teleporter?'" << endl;
    char direction;
    cin >> direction;
    switch (direction)
    {
    case 'w':
    case 'W':
        if (m == 0)
        {
            cout << "This is a wall" << endl;
        }
        else
        {
            cout << "The message reads: 'Haha, made you look'" << endl;
        }
        break;
        break;
    case 'a':
    case 'A':
        cout << "west" << endl;
        x--;
        break;
    case 's':
    case 'S':
        cout << "This is a wall" << endl;
        break;
    case 'd':
    case 'D':
        if (w == 0)
        {
            cout << "There's 9 buttons, a pile of ash by button 8, and a note that says:" << endl;
            cout << "'I forgot to label the buttons. Good luck.'" << endl;
            x = 6;
            y = 6;
            poi++;
        }
        else
        {
            cout << "You walk east, making your way past the rubble" << endl;
            x++;
        }

        break;
    default:
        cout << "please enter a valid input, you're wasting time" << endl;
        break;
    }
}

void Machine(int& x, int& y, bool& ach, int& poi, bool& mir, int& nerd, bool& w, bool& mes)
{
        cout << "Press 1-9 for a button or w to leave the room" << endl;
        char button;
        cin >> button;
        switch (button)
        {
        case '1':
            cout << "You feel discombobulated and then find yourself somewhere else" << endl << endl;
            x = 3;
            y = 1;
            break;
        case '2':
            cout << "You've unlocked an achievement!" << endl;
            ach = 1;

            break;
        case '3':
            cout << "A toxic purple cloud comes out of the machine." << endl; // you're poisoned
            if ((poi >= 1000) && (poi <= 1300))
            {
                cout << "You don't even feel the poison! You breathe it in like air." << endl;
            }
            else
            {
                cout << "This is incredibly strong poison, you won't last long" << endl;
                poi = 3;
            }
            break;
        case '4':
            if (mir == 0)
            {
                cout << "A mirror shield teleports in front of you. You equip it." << endl; // you gain a mirror
                mir = 1;
            }
            else
            {
                cout << "A gust of wind seemingly from nowhere brushes against you" << endl;
                cout << "... Nothing else happens" << endl;
            }
            break;
        case '5':
            cout << "The nerd pops back up and takes his key" << endl; // nerd
            nerd = 1;
            break;
        case '6':
            cout << "A message suddenly displays itself etched onto the northern wall" << endl; // haha made you look
            mes = 1;
            break;
        case '7':
            cout << "A cooked chicken dish teleports in front of you" << endl;
            cout << "You feel super healthy for some reason now" << endl; // poison immunity
            poi = 1280;
            break;
        case '8':
            cout << "A laser appears and fires at you. You feel yourself being burnt to a crisp" << endl; // you die or use a mirror to open the door to the finish
            if (mir == 0)
            {
                cout << "You join the ashes that were left there by a previous adventurer" << endl;
                x = 10;
                y = 10;
            }
            else
            {
                cout << "You use the mirror shield to deflect the laser!" << endl;
                cout << "The wall behind the table tumbles down!" << endl;
                w = 1;
            }
            break;
        case '9':
            cout << "You feel discombobulated and then find yourself somewhere else" << endl << endl;
            x = 5;
            y = 1;
            break;
        case 'w':
        case 'W':
            if (mes == 0)
            {
                cout << "This is a wall" << endl;
            }
            else
            {
                cout << "The message reads: 'Haha, made you look'" << endl;
            }
            break;
        case 'a':
        case 'A':
            cout << "west" << endl;
            x = 3;
            y = 5;
            break;
        case 's':
        case 'S':
            cout << "This is a wall" << endl;
            break;
        case 'd':
        case 'D':
            if (w == 0)
            {
                cout << "You're still looking at the table" << endl;
            }
            else
            {
                cout << "You walk east, making your way past the rubble" << endl;
                x = 5;
                y = 5;
            }
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }


    void roomEa(int& x, int& y)
    {
        cout << "There doesn't seem to be anything of importance in this room" << endl;
        cout << "There are doors on the south and west walls" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "This is a wall" << endl;
            break;
        case 'a':
        case 'A':
            cout << "west" << endl;
            x--;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "This is a wall" << endl;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }


    void roomEb(int& x, int& y, bool& z)
    {
        char direction;
        switch (z)
        {

        case 0:
            cout << "Something has reversed your controls in this room (I don't have justification here)" << endl;
            cout << "There are doors on the north, west, and south walls" << endl;

            cin >> direction;
            switch (direction)
            {
            case 's':
            case 'S':
                cout << "north" << endl;
                y--;
                break;
            case 'd':
            case 'D':
                cout << "west" << endl;
                x--;
                break;
            case 'w':
            case 'W':
                cout << "south" << endl;
                y++;
                break;
            case 'a':
            case 'A':
                cout << "This is a wall" << endl;
                break;
            default:
                cout << "please enter a valid input, you're wasting time" << endl;
                break;
            }
            break;
        case 1:
            cout << "There doesn't seem to be anything important in this room." << endl;
            cout << "There are doors on the north, west, and south walls" << endl;
            cin >> direction;
            switch (direction)
            {
            case 'w':
            case 'W':
                cout << "north" << endl;
                y--;
                break;
            case 'a':
            case 'A':
                cout << "west" << endl;
                x--;
                break;
            case 's':
            case 'S':
                cout << "south" << endl;
                y++;
                break;
            case 'd':
            case 'D':
                cout << "This is a wall" << endl;
                break;
            default:
                cout << "please enter a valid input, you're wasting time" << endl;
                break;
            }
        }


    }


    void roomEc(int& x, int& y)
    {
        cout << "There doesn't seem to be anything important in this room." << endl;
        cout << "There are doors on the north and south walls" << endl;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "north" << endl;
            y--;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "This is a wall" << endl;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }


    void roomEd(int& x, int& y, int& z)
    {
        cout << "There's a deep pit on the eastern side of the room" << endl;
        cout << "There are doors on the north and south walls" << endl;
        switch (z)
        {
        case 0:
            cout << "You hear a voice bellowing from a loudspeaker" << endl;
            cout << "'Hey my engineers dug the pit in the wrong spot and I'm sick of this. Could you just jump in?'" << endl;
            break;
        case 1:
            cout << "You hear a voice bellowing from a loudspeaker" << endl;
            cout << "'There's lots of candy there! Chocolate, butterscotch, caramel, all the works'" << endl;
            break;
        case 2:
            cout << "You hear a voice bellowing from a loudspeaker" << endl;
            cout << "'There's a boyband down there. They haven't seen a girl for weeks!'" << endl;
            break;
        case 3:
            cout << "You hear a voice bellowing from a loudspeaker" << endl;
            cout << "'There's a years supply of Klondikes! Show me what you're willing to do for a Klondike! please'" << endl;
            break;
        case 4:
            cout << "You hear a voice bellowing from a loudspeaker" << endl;
            cout << "'Hey it worked in Portal 2. There was a whole achievement for jumping in there!" << endl;
            cout << "What kinda gamer wouldn't try it for an achievement?'" << endl;
            break;
        case 5:
            cout << "You hear a voice bellowing from a loudspeaker" << endl;
            cout << "'There's Epic Fortnite Gamer Loot in there! Just jump on down and get hip with the fellow kids!" << endl;
            break;
        case 6:
            cout << "You hear a voice bellowing from a loudspeaker" << endl;
            cout << "'kk you win, just go onto the next area already and take your victory..." << endl;
            break;
        }
        z++;
        char direction;
        cin >> direction;
        switch (direction)
        {
        case 'w':
        case 'W':
            cout << "north" << endl;
            y--;
            break;
        case 'a':
        case 'A':
            cout << "This is a wall" << endl;
            break;
        case 's':
        case 'S':
            cout << "south" << endl;
            y++;
            break;
        case 'd':
        case 'D':
            cout << "... you jump into the pit I guess?" << endl;
            cout << "You die, because obviously..." << endl;
            x = 10;
            y = 10;
            break;
        default:
            cout << "please enter a valid input, you're wasting time" << endl;
            break;
        }
    }


    void roomEe(int& x, int& y, bool& z)
    {
        cout << "You've found the finish line!!! Congratulations!!!" << endl;
        cout << "Thank you for playing!" << endl;
        z = 1;
    }





    int main()
    {
        cout << "You are a woman who's fallen into a maze. You find a note on the floor that says:" << endl;
        cout << "You are in the most northwestern room of a square maze of 25 rooms." << endl;
        cout << "w, a, s, d are north, west, south, and east respectively." << endl;
        cout << "You only need to use numbers to answer any riddles." << endl;
        cout << "Please hurry" << endl << endl << endl;


        // the items
        int poison = 2000000;
        bool headlamp = 0;
        int dudekey = 0; // 0 means you have nothing, 1 means you have the dude following you, 2 means you have the key
        int voicebox = 0;
        bool mirror = 0;
        bool sphinxa = 0;
        bool sphinxb = 0;
        bool achievement = 0; // teleporter achievement
        bool wall = 0;
        bool message = 0;


        bool success = 0;
        bool failure = 0;
        int location[] = { 1, 1 }; // ensure the default starting point is 1, 1
        while ((success == 0) && (failure == 0))
        {
            if ((location[0] == 1) && (location[1] == 1))
            {
                roomAa(location[0], location[1]);
            }
            else if ((location[0] == 1) && (location[1]) == 2)
            {
                roomAb(location[0], location[1]);
            }
            else if ((location[0] == 1) && (location[1]) == 3)
            {
                roomAc(location[0], location[1]);
            }
            else if ((location[0] == 1) && (location[1]) == 4)
            {
                roomAd(location[0], location[1], dudekey);
            }
            else if ((location[0] == 1) && (location[1]) == 5)
            {
                roomAe(location[0], location[1]);
            }
            else if ((location[0] == 2) && (location[1]) == 1)
            {
                roomBa(location[0], location[1], headlamp);
            }
            else if ((location[0] == 2) && (location[1]) == 2)
            {
                roomBb(location[0], location[1], headlamp);
            }
            else if ((location[0] == 2) && (location[1]) == 3)
            {
                roomBc(location[0], location[1]);
            }
            else if ((location[0] == 2) && (location[1]) == 4)
            {
                roomBd(location[0], location[1], dudekey);
            }
            else if ((location[0] == 2) && (location[1]) == 5)
            {
                roomBe(location[0], location[1], sphinxa);
            }
            else if ((location[0] == 3) && (location[1]) == 1)
            {
                roomCa(location[0], location[1]);
            }
            else if ((location[0] == 3) && (location[1]) == 2)
            {
                roomCb(location[0], location[1], dudekey);
            }
            else if ((location[0] == 3) && (location[1]) == 3)
            {
                roomCc(location[0], location[1]);
            }
            else if ((location[0] == 3) && (location[1]) == 4)
            {
                roomCd(location[0], location[1], sphinxb);
            }
            else if ((location[0] == 3) && (location[1]) == 5)
            {
                roomCe(location[0], location[1]);
            }
            else if ((location[0] == 4) && (location[1]) == 1)
            {
                roomDa(location[0], location[1], poison);
            }
            else if ((location[0] == 4) && (location[1]) == 2)
            {
                roomDb(location[0], location[1]);
            }
            else if ((location[0] == 4) && (location[1]) == 3)
            {
                roomDc(location[0], location[1], poison);
            }
            else if ((location[0] == 4) && (location[1]) == 4)
            {
                roomDd(location[0], location[1]);
            }
            else if ((location[0] == 4) && (location[1]) == 5)
            {
                roomDe(location[0], location[1], wall, message, poison);
            }
            else if ((location[0] == 6) && (location[1]) == 6)
            {
                Machine(location[0], location[1], achievement, poison, mirror, dudekey, wall, message);
            }
            else if ((location[0] == 5) && (location[1]) == 1)
            {
                roomEa(location[0], location[1]);
            }
            else if ((location[0] == 5) && (location[1]) == 2)
            {
                roomEb(location[0], location[1], mirror);
            }
            else if ((location[0] == 5) && (location[1]) == 3)
            {
                roomEc(location[0], location[1]);
            }
            else if ((location[0] == 5) && (location[1]) == 4)
            {
                roomEd(location[0], location[1], voicebox);
            }
            else if ((location[0] == 5) && (location[1] == 5))
            {
                roomEe(location[0], location[1], success);
            }
            else if ((location[0] == 10) && (location[1] == 10))
            {
                cout << "you have failed, game over. Please try again." << endl;
                failure = 1;
            }
            else
            {
                cout << "uuuh you're outside the boundaries, so you're just getting teleported to the first room now" << endl;
                cout << "idk how you managed to glitch out a text game, but I hope you're proud, I guess" << endl;
                location[0] = 1;
                location[1] = 1;
            }


            poison--;
            switch (poison)
            {
            case 0:
                cout << "The poison has kicked in before you could find a cure, you collapse to the ground." << endl;
                location[0] = 10;
                location[1] = 10;
                break;
            case 1:
                cout << "Your body feels heavier, you have only 1 turn left" << endl;
                if (dudekey == 1)
                {
                    cout << "You overhear the nerd:" << endl;
                    cout << "'This poison isn't anything compared to my house' *annoying laugh*" << endl;
                }
                break;
            case 2:
                cout << "The light around you starts to grow dimmer. You have 2 turns left" << endl;
                break;
            case 3:
                cout << "Your head is pounding. You'll last 3 more turns at most" << endl;
                break;
            case 4:
                cout << "Nausea has already set in, you have about 4 turns to find a cure" << endl;
                break;
            }

            if (dudekey == 1)
            {
                cout << "The nerd is following you " << endl;
            }
           // cout << "coordinates: " << location[0] << " east " << location[1] << " south" << endl;  this line is literally just a dev tool. Delete it before final cut

            cout << endl;
        }

        if (voicebox >= 6)
        {
            cout << "ACHIEVEMENT UNLOCKED: EPIC FORTNITE GAMER" << endl;
        }
        if (achievement == 1)
        {
            cout << "ACHIEVEMENT UNLOCKED: GAMBLING ADDICT" << endl;
        }

    }


    // Things possibly changed for dev purposes are starting location and the coordinates set to on