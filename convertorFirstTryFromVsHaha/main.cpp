#include <iostream>
#include <stdlib.h>

using namespace std;

/*
1. Centimetru
2. Picior(foot)
3. Tol(inch)
4. Kilomentru
5. Mila
6. Mila marina
7. Milimentru
8. Yarda
9. Metru
*/
//int vecUnitati[];
float metruInUnitate(float numar, int numarUnitateIn)
{
    if(numarUnitateIn==1) numar=numar*100;
    else if(numarUnitateIn==2) numar=numar*3.28083;
    else if(numarUnitateIn==3) numar=numar*39.37007;
    else if(numarUnitateIn==4) numar=numar*0.001;
    else if(numarUnitateIn==5) numar=numar*0.000621371192;
    else if(numarUnitateIn==6) numar=numar*0.000539957;
    else if(numarUnitateIn==7) numar=numar*1000;
    else if(numarUnitateIn==8) numar=numar*0.000621371192;
    else if(numarUnitateIn==9) numar=numar;
    else
    {
        cout<<"Numar de ordine invalid. ";
        return 0;
    }
    return numar;
}
float unitateInMetru(float numar, int numarUnitateDin)
{
    if(numarUnitateDin==1) numar=numar/100;
    else if(numarUnitateDin==2) numar=numar/3.28083;
    else if(numarUnitateDin==3) numar=numar/39.37007;
    else if(numarUnitateDin==4) numar=numar/0.001;
    else if(numarUnitateDin==5) numar=numar/0.000621371192;
    else if(numarUnitateDin==6) numar=numar/0.000539957;
    else if(numarUnitateDin==7) numar=numar/1000;
    else if(numarUnitateDin==8) numar=numar/0.000621371192;
    else if(numarUnitateDin==9) numar=numar;
    else
    {
        cout<<"Numar de ordine invalid. ";
        return 0;
    }
    cout<<"\nin metri: "<<numar<<"\n";
    return numar;
}
int main()
{
    cout<<"\t\t MENIU CONVERTOR\n";
    cout<<"\t\t 1.Arie\n";
    cout<<"\t\t 2.Debit\n";
    cout<<"\t\t 3.Densitate\n";
    cout<<"\t\t 4.Energie\n";
    cout<<"\t\t 5.Forta\n";
    cout<<"\t\t 6.Lungime\n";
    cout<<"\t\t 7.Masa\n";
    cout<<"\t\t 8.Presiune\n";
    cout<<"\t\t 9.Putere\n";
    cout<<"\t\t 10.Temperatura\n";
    cout<<"\t\t 11.Viteza\n";
    cout<<"\t\t 12.Viteza unghiulara\n";
    cout<<"\t\t 13.Volum\n";
    cout<<"\t\t 14.Exit\n";

    cout<<"Alegeti unitatea de masura :";
    int nrInstructiune;
    cin>>nrInstructiune;
    //system("cls");
    switch(nrInstructiune)
    {
        case 6:
        {
            system("cls");
            cout<<"\t 1. Centimetru\n";
            cout<<"\t 2. Picior(foot)\n";
            cout<<"\t 3. Tol(inch)\n";
            cout<<"\t 4. Kilomentru\n";
            cout<<"\t 5. Mila\n";
            cout<<"\t 6. Mila marina\n";
            cout<<"\t 7. Milimentru\n";
            cout<<"\t 8. Yarda\n";
            cout<<"\t 9. Metru\n";
            break;
        }
        default:
            cout<<"Numar de ordine invalid. ";
    }
    cout<<"Alegeti unitatea de masura din care se va face transformarea :\n";
    int numarUnitateDin, numarUnitateIn;
    float numarTransformare;
    cin>>numarUnitateDin;
    cout<<"Alegeti unitatea de masura in care se va face transformarea :\n";
    cin>>numarUnitateIn;
    cout<<"Dati valoarea pe care vreti sa o convertiti: \n";
    cin>>numarTransformare;
    cout<<metruInUnitate(unitateInMetru(numarTransformare, numarUnitateDin), numarUnitateIn);

    /*double numar;
    int numarUnitate;
    cout<<"numar=";
    cin>>numar;
    cout<<"numar unitate ";
    cin>>numarUnitate;
    cout<<metruInUnitate(numar);*/
    return 0;
}
