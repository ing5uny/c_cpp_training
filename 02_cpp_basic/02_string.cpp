#include <iostream>
#include <string>

using namespace std;

int main(){
    string song("Lemon Tree");
    string singer("Fool's Garden");
    string input;

    cout << song << "is the song. And, ";
    cout << singer[0] << " is the first character that the singer who sings this song." << endl;

    getline(cin, input);
    if(singer == input){
        cout << "Correct!";
    }
    else
        cout << "Incorrect! The name is " + singer + "!" << endl;
    
    return 0;
}