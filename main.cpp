/*
 * To change thinputFile license header, choose License Headers in Project Properties.
 * To change thinputFile template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   wideMain.cpp
 * Author: jc
 *
 * Created on January 9, 2020, 4:32 P

/*
 *
 */

#include <locale>
#include <codecvt>
#include <fstream>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>
#include <string>

using namespace std;

void translator(string inputFile,string outputFile)
{
    const std::locale utf8_locale = std::locale(std::locale(), new std::codecvt_utf8<wchar_t>());
    wifstream in;
    wofstream out;

    wstring buffer;
    streampos end;

    out.open(outputFile);
    out.imbue(utf8_locale);

    in.open(inputFile);
    in.imbue(utf8_locale);
    in>>buffer;

    for(int i=0; i<buffer.length(); i++)
    {
        if(buffer[i]=='a')
        {
            out<<L'а';

        }
        else if(buffer[i]=='A')
        {
            out<<L'А';
        }
        else if(buffer[i]=='b')
        {
            out<<L'б';
        }
        else if(buffer[i]=='B')
        {
            out<<L'Б';
        }
        else if(buffer[i]=='c')
        {
            out<<L'ц';

        }
        else if(buffer[i]=='C')
        {
            out<<L'Ц';
        }
        else if(buffer[i]=='d')
        {
            out<<L'д';
        }
        else if(buffer[i]=='D')
        {
            out<<L'Д';
        }
        else if(buffer[i]=='e')
        {
            out<<L'э';

        }
        else if(buffer[i]=='E')
        {
            out<<L'Э';
        }
        else if(buffer[i]=='f')
        {
            out<<L'Ф';

        }
        else if(buffer[i]=='F')
        {
            out<<L'ф';
        }
        else if(buffer[i]=='g')
        {
            out<<L'г';

        }
        else if(buffer[i]=='G')
        {
            out<<L'Г';
        }
        else if(buffer[i]=='h')
        {
            out<<L'х';

        }
        else if(buffer[i]=='H')
        {
            out<<L'Х';
        }
        else if(buffer[i]=='i')
        {
            out<<L'и';

        }
        else if(buffer[i]=='I')
        {
            out<<L'И';
        }
        else if(buffer[i]=='j')
        {
            out<<L'ж';

        }
        else if(buffer[i]=='J')
        {
            out<<L'Ж';
        }
        else if(buffer[i]=='k')
        {
            out<<L'к';

        }
        else if(buffer[i]=='K')
        {
            out<<L'К';
        }
        else if(buffer[i]=='l')
        {
            out<<L'л';

        }
        else if(buffer[i]=='L')
        {
            out<<L'Л';
        }
        else if(buffer[i]=='m')
        {
            out<<L'м';

        }
        else if(buffer[i]=='M')
        {
            out<<L'М';
        }
        else if(buffer[i]=='n')
        {
            out<<L'н';

        }
        else if(buffer[i]=='N')
        {
            out<<L'Н';
        }
        else if(buffer[i]=='o')
        {
            out<<L'о';

        }
        else if(buffer[i]=='O')
        {
            out<<L'О';
        }
        else if(buffer[i]=='p')
        {
            out<<L'п';

        }
        else if(buffer[i]=='P')
        {
            out<<L'П';
        }
        else if(buffer[i]=='q')
        {
            out<<L'ө';

        }
        else if(buffer[i]=='Q')
        {
            out<<L'Ө';
        }
        else if(buffer[i]=='r')
        {
            out<<L'р';

        }
        else if(buffer[i]=='R')
        {
            out<<L'Р';
        }
        else if(buffer[i]=='s')
        {
            out<<L'с';

        }
        else if(buffer[i]=='S')
        {
            out<<L'С';
        }
        else if(buffer[i]=='t')
        {
            out<<L'т';

        }
        else if(buffer[i]=='T')
        {
            out<<L'Т';
        }
        else if(buffer[i]=='u')
        {
            out<<L'у';

        }
        else if(buffer[i]=='U')
        {
            out<<L'У';
        }
        else if(buffer[i]=='v')
        {
            out<<L'в';

        }
        else if(buffer[i]=='V')
        {
            out<<L'В';
        }
        else if(buffer[i]=='w')
        {
            out<<L'е';

        }
        else if(buffer[i]=='W')
        {
            out<<L'Е';
        }
        else if(buffer[i]=='x')
        {
            out<<L'ч';

        }
        else if(buffer[i]=='X')
        {
            out<<L'Ч';
        }
        else if(buffer[i]=='y')
        {
            out<<L'ю';

        }
        else if(buffer[i]=='Y')
        {
            out<<L'Ю';
        }
        else if(buffer[i]=='z')
        {
            out<<L'з';

        }
        else if(buffer[i]=='Z')
        {
            out<<L'З';
        }
        else if(buffer[i]=='$')
        {
            out<<L'₮';
        }
        //mongolian to english
        else if(buffer[i]==L'а')
        {
            out<<'a';

        }
        else if(buffer[i]==L'А')
        {
            out<<'A';
        }
        else if(buffer[i]==L'б')
        {
            out<<'b';
        }
        else if(buffer[i]==L'Б')
        {
            out<<'B';
        }
        else if(buffer[i]==L'ц')
        {
            out<<'c';
        }
        else if(buffer[i]==L'Ц')
        {
            out<<'C';
        }
        else if(buffer[i]==L'д')
        {
            out<<'d';
        }
        else if(buffer[i]==L'Д')
        {
            out<<'D';
        }
        else if(buffer[i]==L'э')
        {
            out<<'e';
        }
        else if(buffer[i]==L'Э')
        {
            out<<'E';
        }
        else if(buffer[i]==L'Ф')
        {
            out<<'f';
        }
        else if(buffer[i]==L'ф')
        {
            out<<'F';
        }
        else if(buffer[i]==L'г')
        {
            out<<'g';
        }
        else if(buffer[i]==L'Г')
        {
            out<<'G';
        }
        else if(buffer[i]==L'х')
        {
            out<<'h';
        }
        else if(buffer[i]==L'Х')
        {
            out<<'H';
        }
        else if(buffer[i]==L'и')
        {
            out<<'i';
        }
        else if(buffer[i]==L'И')
        {
            out<<'I';
        }
        else if(buffer[i]==L'ж')
        {
            out<<'j';
        }
        else if(buffer[i]==L'Ж')
        {
            out<<'J';
        }
        else if(buffer[i]==L'к')
        {
            out<<'k';
        }
        else if(buffer[i]==L'К')
        {
            out<<'K';
        }
        else if(buffer[i]==L'л')
        {
            out<<'l';
        }
        else if(buffer[i]==L'Л')
        {
            out<<'L';
        }
        else if(buffer[i]==L'м')
        {
            out<<'m';
        }
        else if(buffer[i]==L'М')
        {
            out<<'M';
        }
        else if(buffer[i]==L'н')
        {
            out<<'n';
        }
        else if(buffer[i]==L'Н')
        {
            out<<'N';
        }
        else if(buffer[i]==L'о')
        {
            out<<'o';
        }
        else if(buffer[i]==L'О')
        {
            out<<'O';
        }
        else if(buffer[i]==L'п')
        {
            out<<'p';
        }
        else if(buffer[i]==L'П')
        {
            out<<'P';
        }
        else if(buffer[i]==L'ө')
        {
            out<<'q';
        }
        else if(buffer[i]==L'Ө')
        {
            out<<'Q';
        }
        else if(buffer[i]==L'р')
        {
            out<<'r';
        }
        else if(buffer[i]==L'Р')
        {
            out<<'R';
        }
        else if(buffer[i]==L'с')
        {
            out<<'s';
        }
        else if(buffer[i]==L'С')
        {
            out<<'S';
        }
        else if(buffer[i]==L'т')
        {
            out<<'t';
        }
        else if(buffer[i]==L'Т')
        {
            out<<'T';
        }
        else if(buffer[i]==L'у')
        {
            out<<'u';
        }
        else if(buffer[i]==L'У')
        {
            out<<'U';
        }
        else if(buffer[i]==L'в')
        {
            out<<'v';
        }
        else if(buffer[i]==L'В')
        {
            out<<'V';
        }
        else if(buffer[i]==L'е')
        {
            out<<'w';
        }
        else if(buffer[i]==L'Е')
        {
            out<<'W';
        }
        else if(buffer[i]==L'ч')
        {
            out<<'x';
        }
        else if(buffer[i]==L'Ч')
        {
            out<<'X';
        }
        else if(buffer[i]==L'ю')
        {
            out<<'y';
        }
        else if(buffer[i]==L'Ю')
        {
            out<<'Y';
        }
        else if(buffer[i]==L'з')
        {
            out<<'z';
        }
        else if(buffer[i]==L'З')
        {
            out<<'Z';
        }
        else if(buffer[i]==L'₮')
        {
            out<<'$';
        }

    }

    in.close();
    out.close();
}

void input(string filename,string inputs, wstring inputsU)
{
    const std::locale utf8_locale = std::locale(std::locale(), new std::codecvt_utf8<wchar_t>());
    SetConsoleOutputCP( CP_UTF8 );

    wofstream inputFile;
    inputFile.open(filename);
    inputFile.imbue(utf8_locale);

    ofstream input;
    input.open(filename);
    input.imbue(utf8_locale);

    //unsigned int uniCode = (unsigned int) L'ب';


    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv;
     std::u32string utf32str = conv.from_bytes(inputs);

    for (char32_t u : inputs)
    {
        input <<u<< endl;
        input<<(char)u;
    }

    for(wchar_t a : inputsU)
    {
        inputFile<<(int)a;
        inputFile<<a;
    }

    inputFile.close();

}


int main()
{
    const std::locale utf8_locale = std::locale(std::locale(), new std::codecvt_utf8<wchar_t>());

    /*wifstream text;
    wstring buf;
    text.open("text.txt");
    text>>buf;
    text.close();*/

    string inputs;
    cin>>inputs;

    wstring inputsU;
    wcin>>inputsU;

    input("wideDoc.txt",inputs,inputsU);

    //translator("input.txt","output.txt");
}
