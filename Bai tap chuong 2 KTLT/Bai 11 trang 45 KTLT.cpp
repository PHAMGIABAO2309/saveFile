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
		//KT xem ký t? t?i v? trí 'i' c?a chu?i 'name' có ph?i là 1 ch? cái hay không?
        if (isalpha(name[i])) // hàm 'isalpha' ki?m tra xem 1 ký t? có ph?i là ch? cái hay không?
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
