#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    char com[100];
    char chess[9][9]{{'8','r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                     {'7','p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                     {'6',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'5',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'4',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'3',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'2','P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		     {'1','R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		     {' ','a','b','c','d','e','f','g','h'}};
    /*FILE* ch;
    ch = fopen("chess.txt", "r");
    while (fgets(com, 100, ch) != 0) {
        puts(com);
        cout << endl;
        if ((com[0] != chess[56 - com[2]][com[1] - 97]
             || com[7] != chess[56 - com[9]][com[8] - 97])
            && ((com[3] == 'x') && (chess[56 - com[5]][com[4] - 97] == ' ')
                || (com[10] == 'x')
                        && (chess[56 - com[12]][com[11] - 97] == ' ')))
            cout << "Wrong turn" << endl;
        else {
            chess[56 - com[5]][com[4] - 97] = chess[56 - com[2]][com[1] - 97];
            chess[56 - com[2]][com[1] - 97] = ' ';
            chess[56 - com[12]][com[11] - 97] = chess[56 - com[9]][com[8] - 97];
            chess[56 - com[9]][com[8] - 97] = ' ';
	    }*/
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << chess[i][j];
            }
            cout << endl;
        }
        cout << endl;
    return 0;
}
