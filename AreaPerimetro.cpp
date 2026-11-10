    #include <iostream>
using namespace std;

int main()
{
// dichiarazione variabili
int base, altezza;
int perimetro, area;
// inizializzazioni
cout<<"quale e' la base del rettangolo?" <<endl;
cin>> base;
cout<< "quale e' l'altezza del rettangolo?"<<endl;
cin>> altezza;
// elaborazione 
perimetro = (base + altezza) * 2;
area= base * altezza;
//output
cout<<"il perimetro del rettangolo e'"<<perimetro<<endl;
cout<<"l'area del rettangolo e'"<<area<<endl;
}
