#include<iostream>
using namespace std;
#include<cstring>
#include "stack.h"

int main(int argc, char **argv)
{

    for (int i=1; i<argc; i++) 
    {
        Stack s;      
        bool ok = true;

        for (int j = 0; j < strlen(argv[i]); j++) 
        {
            char c = argv[i][j];

            if (c == '[' || c == '{') 
            {
                s.push(c);   
            } 
            else if (c == ']' || c == '}') 
            {

                if (s.pop() == 0) 
                { 
                    ok = false;
                    break;
                }

                char top = s.pop();


                if ((c == ']' && top != '[') ||
                    (c == '}' && top != '{')) 
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok && s.pop() == 0) 
        { 
            cout << argv[i] << " is Balanced :D "<<endl;
        } 
        
        else 
        {
            cout << argv[i] << "  is not Balanced :("<<endl;
        }
    }

    return 0;
}