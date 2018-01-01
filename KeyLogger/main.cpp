#include <iostream>
#include <windows.h>
#include <Helper.h>
#include <KeyConstants.h>
#include <Base64.h>
using namespace std;

int main()
{
    ///https://msdn.microsoft.com/es-es/library/windows/desktop/ms644958(v=vs.85).aspx
    MSG Msg;

    while( GetMessage(&Msg,NULL,0,0) ){
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return 0;
}
