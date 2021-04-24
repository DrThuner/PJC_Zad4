#include <iostream> //Start
double resulta, resultb, side, sideb, sidec, sided, height, radius; // double - liczba zmiennoprzecinkowa

using namespace std;

int main()
{
    int choice;
    cout << "Wybierz funkcje:\n"
            "1 - Pole i obwod kwadratu\n"
            "2 - Pole i obwod prostokata\n"
            "3 - Pole i obwod trojkata\n"
            "4 - Pole i obwod rownolegloboku\n"
            "5 - Pole i obwod rombu\n"
            "6 - Pole i obwod trapezu\n"
            "7 - Pole i obwod deltoidu\n"
            "8 - Pole i obwod kola\n"                 ;
    cin >> choice;
    switch(choice)                      // wybiera jedno z kilku mozliwosci
    {
        case 1:                         // Liczy pole i obwod kwadratu

            cout << "Podaj podstawe kwadratu:\n";
            cin >> side;
            resulta = side*side;
            resultb = 4 * side;
            cout << "Pole kwadratu wynosi" << endl << resulta << endl << "Obwod kwadratu wynosi" << endl << resultb;
            break;

        case 2:                         // Liczy pole i obwod prostokatu

            cout << "Podaj dluzsza podstawe:\n";
            cin >> side;
            cout << "Podaj krotsza podstawe:\n";
            cin >> sideb;
            resulta = side+sideb;
            resultb = 2*side + 2*sideb;
            cout << "Pole prostokatu wynosi" << endl << resulta << endl << "Obwod prostokatu wynosi" << endl << resultb;
            break;

        case 3:                         // Liczy pole i obwod trojkata

            cout << "Podaj podstawe trojkata:\n ";
            cin >> side;
            cout << "Podaj wysokosc trojkata:\n";
            cin >> height;
            cout << "Podaj drugi bok trojkata:\n ";
            cin >> sideb;
            cout << "Podaj trzeci bok trojkata:\n ";
            cin >> sidec;
            resulta = (side*height) / 2;
            resultb = side + sideb + sidec;
            cout << "Pole trojkata wynosi" << endl << resulta << endl << "Obwod trojkata wynosi" << endl << resultb << endl;
            break;

        case 4:                         // Liczy pole i obwod rownolegloboku ( Dodatkowo :) )

            cout << "Podaj podstawe:\n";
            cin >> side;
            cout << "Podaj wysokosc:\n";
            cin >> height;
            cout << "Podaj bok:\n";
            cin >> sideb;
            resulta = side*height;
            resultb = 2*side + 2*sideb;
            cout << "Pole rownolegloboku wynosi" << endl << resulta << endl << "Obwod rownolegloboku wynosi" << endl << resultb;
            break;

        case 5:                         // Liczy pole i obwod romb ( Dodatkowo :) )

            cout << "Podaj podstawe:\n";
            cin >> side;
            cout << "Podaj wysokosc:\n";
            cin >> height;
            cout << "Podaj bok:\n";
            cin >> sideb;
            resulta = side*height;
            resultb = 4*side;
            cout << "Pole rombu wynosi" << endl << resulta << endl << "Obwod rombu wynosi" << endl << resultb;
            break;

        case 6:                         // Liczy pole i obwod trapezu ( Dodatkowo :) )

            cout << "Podaj podstawe a:\n";
            cin >> side;
            cout << "Podaj podstawe b:\n";
            cin >> sideb;
            cout << "Podaj wysokosc:\n";
            cin >> height;
            cout << "Podaj lewy bok:\n";
            cin >> sidec;
            cout << "Podaj prawy bok:\n";
            cin >> sided;
            resulta = (side*sideb)/2 * height;
            resultb = side + sideb + sidec + sided;
            cout << "Pole trapezu wynosi" << endl << resulta << endl << "Obwod trapezu wynosi" << endl << resultb;
            break;

        case 7:                         // Liczy pole i obwod deltoidu ( Dodatkowo :) )

            cout << "Podaj krotsza przekatna:\n";
            cin >> side;
            cout << "Podaj dluzsza przekatna:\n";
            cin >> sideb;
            cout << "Podaj pierwszy bok:\n";
            cin >> sidec;
            cout << "Podaj drugi bok:\n";
            cin >> sided;
            resulta = (side * sideb) * 0.5;
            resultb = 2*sidec + 2*sided;
            cout << "Pole deltoidu wynosi" << endl << resulta << endl << "Obwod deltoidu wynosi" << endl << resultb;
            break;

        case 8:                         // Liczy pole i obwod kola ( Dodatkowo :) )

            cout << "Podaj promien kola:\n ";
            cin >> radius;
            resulta = radius * radius * 3.14;
            resultb = 2 * 3.14 * radius;
            cout << "Pole kola wynosi" << endl << resulta << endl << "Obwod kola wynosi" << endl << resultb;
            break;
    }


    return 0;
}

// Koniec :)