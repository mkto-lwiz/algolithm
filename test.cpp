#include <bits/stdc++.h>
using namespace std;  
class animal
{
private:
    int weight;
public:
    string name;
    animal(){
        weight = 0;
        name = "none";  
    }
    animal(int initweight, string nama){
        weight = initweight;
        name = nama;
    }
    void display(){
        cout<<weight<<name;
    }

};

int main(){

    animal jing;
    jing.display();
    return 0;
}
