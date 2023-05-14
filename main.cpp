#include <iostream>
#include <string>
using namespace std;



int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int commands;
        cin >> commands;
        cin.ignore();
        string s;
        char ch[9] = { ' ' , 'o' , ' ' , '/' , '|' , '\\', '/' , ' ' , '\\' };
        for (int i = 0; i < commands; i++)
        {
            getline(cin, s);

            if (s.substr(0, 3) == "say")
            {
                s.erase(0, 4);
                cout << s << endl;
                continue;
            }
            else if (s == "right leg in")
            {
                ch[6] = '<';
            }
            else if (s == "right leg out")
            {
                ch[6] = '/';
            }
            else if (s == "left leg in")
            {
                ch[8] = '>';
            }
            else if (s == "left leg out")
            {
                ch[8] = '\\'; 
            }
            else if (s == "right hand to head")
            {
                ch[0] = '(';
                ch[3] = ' ';
            }
            else if (s == "right hand to hip")
            {
                ch[3] = '<';
                ch[0] = ' ';
            }
            else if (s == "right hand to start")
            {
                ch[3] = '/';
                ch[0] = ' ';

            }
            else if (s == "left hand to head")
            {
                ch[2] = ')';
                ch[5] = ' ';


            }
            else if (s == "left hand to hip")
            {
                ch[5] = '>';
                ch[2] = ' ';

            }
            else if (s == "left hand to start")
            {
                ch[5] = '\\';
                ch[2] = ' ';

            }
            else if (s == "turn")
            {
                if (ch[0] == '(' && ch[2] == ' ' && ch[3] == ' ' && ch[5] == '\\')
                {
                    ch[0] = ' ';
                    ch[2] = ')';
                    ch[3] = '/';
                    ch[5] = ' ';
                }
                else if (ch[0] == ' ' && ch[2] == ')' && ch[3] == '/' && ch[5] == ' ')
                {
                    ch[0] = '(';
                    ch[2] = ' ';
                    ch[3] = ' ';
                    ch[5] = '\\';
                }
                else if (ch[0] == '(' && ch[2] == ' ' && ch[3] == ' ' && ch[5] == '>')
                {
                    ch[0] = ' ';
                    ch[2] = ')';
                    ch[3] = '<';
                    ch[5] = ' ';
                }
                else if (ch[0] == ' ' && ch[2] == ')' && ch[3] == '<' && ch[5] == ' ')
                {
                    ch[0] = '(';
                    ch[2] = ' ';
                    ch[3] = ' ';
                    ch[5] = '>';
                }
                else if (ch[0] == ' ' && ch[2] == ' ' && ch[3] == '/' && ch[5] == '>')
                {
                    ch[0] = ' ';
                    ch[2] = ' ';
                    ch[3] = '<';
                    ch[5] = '\\';
                }
                else if (ch[0] == ' ' && ch[2] == ' ' && ch[3] == '<' && ch[5] == '\\')
                {
                    ch[0] = ' ';
                    ch[2] = ' ';
                    ch[3] = '/';
                    ch[5] = '>';
                }

                if (ch[6] == '/' && ch[8] == '>')
                {
                    ch[6] = '<';
                    ch[8] = '\\';
                }
                else if (ch[6] == '<' && ch[8] == '\\')
                {
                    ch[6] = '/';
                    ch[8] = '>';
                }

                cout << ch[0] << ch[1] << ch[2] << endl << ch[3] << ch[4] << ch[5] << endl << ch[6] << ch[7] << ch[8] << endl;
                continue;


            }

            cout << ch[0] << ch[1] << ch[2] << endl << ch[3] << ch[4] << ch[5] << endl << ch[6] << ch[7] << ch[8] << endl;


        }

    }
}