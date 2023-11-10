#include <iostream>
#include <string>
using namespace std;

bool KTnguyenam(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    string name;
    int demnguyenam = 0, demphuam = 0;

    cout << "Nhap vao ten cua ban: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); ++i) 
	{
		//KT xem k� t? t?i v? tr� 'i' c?a chu?i 'name' c� ph?i l� 1 ch? c�i hay kh�ng?
        if (isalpha(name[i])) // h�m 'isalpha' ki?m tra xem 1 k� t? c� ph?i l� ch? c�i hay kh�ng?
		{
            if (KTnguyenam(name[i]))
			{
                ++demnguyenam;
            } else {
                ++demphuam;
            }
        }
    }

    cout << "So ky tu nguyen am trong ten ban la: " <<demnguyenam<< endl;
    cout << "So ky tu phu am trong ten ban la: " <<demphuam;

    return 0;
}
