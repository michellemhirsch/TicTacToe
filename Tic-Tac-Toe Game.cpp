//Tic-Tac-Toe
//Michelle Hirsch
//03/26/19


#include <string>
#include <iostream>
using namespace std;

//Player 1's Turn
int p1turn(int player1go, string array_1[3], string array_2[3], string array_3[3]);

//Player 2's Turn
int p2turn(int player2go, string array_1[3], string array_2[3], string array_3[3]);

int main()
{
    
    string array1[3] = {"1 ", "2 ", "3 "};
    string array2[3] = {"4 ", "5 ", "6 "};
    string array3[3] = {"7 ", "8 ", "9 "};

    
    cout << "Welcome to Tic-Tac-Toe!  Player 1 will be O's and Player 2 will be X's." << endl;
    
        
        //Display Tic-Tac-Toe Board
        for (int i = 0; i < 3; i++)
        {
            cout << array1[i];
        }
        
        cout<< " " << endl;
        
                for (int i = 0; i < 3; i++)
        {
            cout << array2[i];
        }
        
        cout<< " " << endl;
        
                for (int i = 0; i < 3; i++)
        {
            cout << array3[i];
        }
        
        cout<< " " << endl;

    //Player 1 Turn - 1
    int p1choice1;
    p1turn(p1choice1, array1, array2, array3);
    
    //Player 2 Turn - 2 
    int p2choice2;
    p2turn(p2choice2, array1, array2, array3);
    
    //Player 1 Turn - 3
    p1turn(p1choice1, array1, array2, array3);
    
    //Player 2 Turn - 4
    p2turn(p2choice2, array1, array2, array3);
    
    //Player 1 Turn - 5
    p1turn(p1choice1, array1, array2, array3);
    
    //Player 2 Turn - 6
    p2turn(p2choice2, array1, array2, array3);
    
    //Player 1 Turn - 7
    p1turn(p1choice1, array1, array2, array3);
    
    //Player 2 Turn - 8
    p2turn(p2choice2, array1, array2, array3);
    
    //Player 1 Turn - 9
    p1turn(p1choice1, array1, array2, array3);
    
    
    return 0;
}

//Player 1 Turn
int p1turn(int player1go, string array_1[3], string array_2[3], string array_3[3])
{
    cout << "Player 1, please choose a number that has not been chosen." << endl;
    int p1choice;
    cin >> p1choice ;
    
    
    if (p1choice < 4)
    {
        for (int i = 0; i < 4; i++) 
        {
            array_1[p1choice-1] = "O ";
            
        }
    }
    
    else if (p1choice < 7)
    {
        for (int i = 0; i < 4 && i < 7; i++) 
        {
            array_2[p1choice-4] = "O ";
            
        }
    }
    
    else if (p1choice < 10)
    {
        for (int i = 0; i < 4; i++) 
        {
            array_3[p1choice-7] = "O ";
            
        }
    }
    
                //Display Tic-Tac-Toe Board
        for (int i = 0; i < 3; i++)
        {
            cout << array_1[i];
        }
        
        cout<< " " << endl;
        
        for (int i = 0; i < 3; i++)
        {
            cout << array_2[i];
        }
        
        cout<< " " << endl;
        
        for (int i = 0; i < 3; i++)
        {
            cout << array_3[i];
        }
        
        cout<< " " << endl;
        
    if(array_1[0] == array_1[1] && array_1[1] == array_1[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    //Check to see if player has won 
    if(array_2[0] == array_2[1] && array_2[1] == array_2[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_3[0] == array_3[1] && array_3[1] == array_3[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[0] == array_2[0] && array_2[0] == array_3[0])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[1] == array_2[1] && array_2[1] == array_3[1])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[2] == array_2[2] && array_2[2] == array_3[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[0] == array_2[1] && array_2[1] == array_3[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[2] == array_2[1] && array_2[1] == array_3[0])
    {
        cout << "You win!" << endl;
        exit(0);
    }
}

//Player 2 Turn
int p2turn(int player2go, string array_1[3], string array_2[3], string array_3[3])
{
    cout << "Player 2, please choose a number that has not been chosen." << endl;
    int p2choice;
    cin >> p2choice ;
    
    
    if (p2choice < 4)
    {
        for (int i = 0; i < 4; i++) 
        {
            array_1[p2choice-1] = "X ";
            
        }
    }
    
    else if (p2choice < 7)
    {
        for (int i = 0; i < 4 && i < 7; i++) 
        {
            array_2[p2choice-4] = "X ";
            
        }
    }
    
    else if (p2choice < 10)
    {
        for (int i = 0; i < 4; i++) 
        {
            array_3[p2choice-7] = "X ";
            
        }
    }
    
                //Display Tic-Tac-Toe Board
        for (int i = 0; i < 3; i++)
        {
            cout << array_1[i];
        }
        
        cout<< " " << endl;
        
        for (int i = 0; i < 3; i++)
        {
            cout << array_2[i];
        }
        
        cout<< " " << endl;
        
        for (int i = 0; i < 3; i++)
        {
            cout << array_3[i];
        }
        
        cout<< " " << endl;
        
    //Check to see if player has won    
        if(array_1[0] == array_1[1] && array_1[1] == array_1[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    //Check to see if player has won 
    if(array_2[0] == array_2[1] && array_2[1] == array_2[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_3[0] == array_3[1] && array_3[1] == array_3[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[0] == array_2[0] && array_2[0] == array_3[0])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[1] == array_2[1] && array_2[1] == array_3[1])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[2] == array_2[2] && array_2[2] == array_3[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[0] == array_2[1] && array_2[1] == array_3[2])
    {
        cout << "You win!" << endl;
        exit(0);
    }
    
    if(array_1[2] == array_2[1] && array_2[1] == array_3[0])
    {
        cout << "You win!" << endl;
        exit(0);
    }
}


