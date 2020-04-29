
#include <iostream>
#include <algorithm>
#include <string.h>


using namespace std;


int main() {
// string c;
// string cs;
// string d;
// string ds;
// string e;
// string f;
// string fs;
// string g;
// string gs;
// string a;
// string as;
// string b; 

    //first note
   cout << "Enter Root note (use 's' for #): ";
    float note1;
    note1 = 98;
    string note1input;
    cin >> note1input;

    //cin based assignment 

if (note1input == "c" ){
	 note1 = 0;}
else if (note1input == "cs"){
	 note1 = 1;}
else if (note1input == "d"){
	 note1 = 2;}
else if (note1input == "ds"){
	 note1 = 3;}
else if (note1input == "e"){
	 note1 = 4;}
else if (note1input == "f"){
	 note1 = 5;}
else if (note1input == "fs"){
	 note1 = 6;}
else if (note1input == "g"){
	 note1 = 7;}
else if (note1input == "gs"){
	 note1 = 8;}
else if (note1input == "a"){
	 note1 = 9;}
else if (note1input == "as"){
	 note1 = 10;}
else if (note1input == "b"){
	 note1 = 11;}
else {
   // cout << note1input << note1;
    cout << "Enter A Musical Note\n"; }

   // cout << note1input << note1;
    //second note
    cout << note1 << "\n" << "\n" "Enter 3rd of the chord (use 's' for #): ";
        int note2;
        note2 = 99;
        string note2input;
        cin >> note2input;

if (note2input == "c" )
	 note2 = 0;
else if (note2input == "cs")
	 note2= 1;
else if (note2input == "d")
	 note2= 2;
else if (note2input == "ds")
	 note2= 3;
else if (note2input == "e")
	 note2= 4;
else if (note2input == "f")
	 note2= 5;
else if (note2input == "fs")
	 note2= 6;
else if (note2input == "g")
	 note2= 7;
else if (note2input == "gs")
	 note2= 8;
else if (note2input == "a")
	 note2= 9;
else if (note2input == "as")
	 note2= 10;
else if (note2input == "b")
	 note2 = 11;
else
{
    cout << "Enter a Musical Note Value\n";
}

cout << note1 << "\n" << note2 << "\n" << "\n" "Enter 5th of the chord (use 's' for #): ";
    int note3;
    note3 = 100;
    string note3input;
    cin >> note3input;

if (note3input == "c")
	 note3 = 0;
else if (note3input == "cs")
	 note3= 1;
else if (note3input == "d")
	 note3= 2;
else if (note3input == "ds")
	 note3= 3;
else if (note3input == "e")
	 note3= 4;
else if (note3input == "f")
	 note3= 5;
else if (note3input == "fs")
	 note3= 6;
else if (note3input == "g")
	 note3= 7;
else if (note3input == "gs")
	 note3= 8;
else if (note3input == "a")
	 note3= 9;
else if (note3input == "as")
	 note3= 10;
else if (note3input == "b")
	 note3 = 11;
else
{
    cout << "Enter a Musical Note Value\n";
}

cout << note1 << "\n" << note2 << "\n" << note3 << "\n" << "\n" "Enter 7th of the chord (use 's' for #) [enter 'na' if there's no seventh]: ";
    int note4;
    note4 = 100;
    string note4input;
    cin >> note4input;

if (note4input == "c")
	 note4 = 0;
else if (note4input == "cs")
	 note4= 1;
else if (note4input == "d")
	 note4= 2;
else if (note4input == "ds")
	 note4= 3;
else if (note4input == "e")
	 note4= 4;
else if (note4input == "f")
	 note4= 5;
else if (note4input == "fs")
	 note4= 6;
else if (note4input == "g")
	 note4= 7;
else if (note4input == "gs")
	 note4= 8;
else if (note4input == "a")
	 note4= 9;
else if (note4input == "as")
	 note4= 10;
else if (note4input == "b")
	 note4 = 11;
else if (note4input == "na")
    note4 = 100;
else
{
    cout << "Enter a Musical Note Value\n";
}
//cout << note1 << "\n" << note2 << "\n" << note3 << "\n";
// adding octave equivelance

if (note1 > note2){
	note2 = note2 + 12;}

if (note1 > note3){
    note3 = note3 + 12;}

if (note1 > note4){
    note4 = note4 + 12;
    
}



cout << note1input << " ";

//triad assignment
if (note2-note1==4 && note3-note1==7 && note4 == 100)
    cout << "Major Triad\n";
if (note2-note1==3 && note3-note1==7 && note4 == 100)
    cout << "Minor Triad\n";
if (note2-note1==3 && note3-note1==6 && note4 == 100)
    cout << "Diminished Triad\n";
if (note2-note1==4 && note3-note1==8 && note4 == 100)
    cout << "Augmented Triad\n";
if (note2-note1==2 && note3-note1==7 && note4 == 100)
    cout << "Sus 2\n";
if (note2-note1==5 && note3-note1==7 && note4 == 100)
    cout << "Sus 4\n";
if (note2-note1==4 && note3-note1==6 && note4 == 100)
    cout << "b5 Triad\n";

//7th chord assignments
if (note2-note1==4 && note3-note1==7 && note4-note1==10)
    cout << "7\n";
if (note2-note1==3 && note3-note1==7 && note4-note1==10)
    cout << "Minor\n";
if (note2-note1==4 && note3-note1==7 && note4-note1==11)
    cout << "Maj7\n";
if (note2-note1==3 && note3-note1==6 && note4-note1==10)
    cout << "Half Dim 7\n";
if (note2-note1==4 && note3-note1==8 && note4-note1==10)
    cout << "Augmented 7th\n";
if (note2-note1==3 && note3-note1==6 && note4-note1==9)
    cout << "Full dim\n";
if (note2-note1==4 && note3-note1==6 && note4-note1==10)
    cout << "7b5\n";




    return 0;
}


