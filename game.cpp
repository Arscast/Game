#include <iostream>
#include <stdlib.h>  //library for random
#include <string>
#include <ctime>

using namespace std;


int main(int argc, char *argv[])
{
    int max_shot = 5;
    char letter;
    string word;
    
    string words[] =
    
    {
        
        "russia",
        
        "algeria",
        
        "brazil",
        
        "kanada",
        
        "australia",
        
        "pekin",
        
        "istanbul",
        
        "brasilia",
        
        "mexico",
        
        "kinshasa"
        
    };
    cout << "       Welcome to Question - answer Game!" << endl;
    srand(time(NULL));
    
    int n=rand()% 9;
    word=words[n];
    
    if (n == 0)
        cout << "The largest country on the territory of the world ?\n";
    else if(n == 1)
        cout << "The largest country in Africa ?\n";
    else if(n == 2)
        cout << "The largest country of South America ?\n ";
    else if(n == 3)
        cout << "The largest country in North America ?\n";
    else if (n == 4)
        cout << "The largest country in Oceania ?\n";
    else if (n == 5)
        cout << "The largest city square in the world ? \n ";
    else if (n == 6)
        cout << "The biggest city in Europe ?\n";
    else if(n ==7)
        cout << "The largest town square in South America ?\n";
    else if (n == 8)
        cout << "The largest city in North America ?\n";
    else if (n == 9)
        cout << "The largest city in Africa ?\n";
    
    
    
    
}