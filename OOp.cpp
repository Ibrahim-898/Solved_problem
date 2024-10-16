#include<bits/stdc++.h>
using namespace std;
class Hero{
    // properties
    //public:
    char Name[100];
    private:
    int health;
    char level;
    public:
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main()
{
    // Creation of object
    Hero ramesh;
    cout << "Health is :" << ramesh.getHealth() << endl;
   // ramesh.health = 70;
    //ramesh.level = 'A';
    //cout << "Health is :  "  << ramesh.health << endl;

   // cout << "size : " << sizeof(h1);
}