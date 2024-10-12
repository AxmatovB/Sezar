#include <iostream>
#include <string>
using namespace std;
int main() {
int op, key;
string txt;
start:
cout << "Shifrlash uchun 1, deshifrlash uchun 0: ";
cin >> op;
system("clear"); //system("cls");
cout << "Text: ";
cin>>txt;
system("clear"); //system("cls");
cout << "Key: ";
cin >> key;
system("clear"); //system("cls");
for (char &c : txt) {
if (isalpha(c)) {
char base = isupper(c) ? 'A' : 'a';
c = (c - base + (op ? key : 26 - key)) % 26 + base;}}
cout<< "Natija: "<<txt<< endl;
char a;
cout<<"Qayta boshlash uchun '!' kiriting: ";
cin >>a;
if (a== '!')
system("clear"); //system("cls");
goto start;
}
    