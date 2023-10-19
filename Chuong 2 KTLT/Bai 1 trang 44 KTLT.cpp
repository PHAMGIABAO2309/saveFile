#include<iostream>
#include<string>
using namespace std;

struct Thisinh
{
	string sobaodanh;
	string hoten;
	int ma_nganh;
	int khu_vuc;
	int doi_tuong;
	float diem_toan, diem_ly, diem_hoa;
	float tong_diem;
	int ket_qua;
};

//a
void Nhap(Thisinh &ts) //ts: tuyen sinh
{
	cout<<"\nNhap SBD: ";
	getline(cin,ts.sobaodanh);
	cout<<"\nNhap Ho Ten: ";
	getline(cin,ts.hoten);
	
	while(true)
	{
	cout<<"\nNhap Ma Nganh: ";
	cin>>ts.ma_nganh;
	if(ts.ma_nganh >= 1 && ts.ma_nganh <= 3)
		{
			break;
		}
		else
		{
			cout<<"Ma nganh khong hop le.Vui long nhap lai";
		}
	}
	
	while(true)
	{
	cout<<"\nNhap Khu Vuc: "; 		
	cin>>ts.khu_vuc;
	if(ts.khu_vuc >=1 && ts.khu_vuc <= 3)
		{
			break;
		}
		else
		{
			cout<<"\nKhu vuc khong hop le.Vui long nhap lai";
		}
	}
	
	while(true)
	{
		cout<<"\n Nhap Doi tuong: ";
		cin>>ts.doi_tuong;
		if(ts.doi_tuong >= 1 && ts.doi_tuong <= 3)
		{
			break;
		}
		else
		{
			cout<<"\nDoi tuong khong hop le.Vui long nhap lai";
		}
	}
	
	while (true) 
	{
        cout << "Nhap diem toan (0-10): ";
        cin >> ts.diem_toan;
        if (ts.diem_toan >= 0 && ts.diem_toan <= 10) 
		{
            break;
        } 
		else
		{
        	cout << "\nDiem toan khong hop le. Vui long nhap lai!";
        }
    }
    
	while (true) 
	{
        cout << "Nhap diem ly (0-10): ";
        cin >> ts.diem_ly;
        if (ts.diem_ly >= 0 && ts.diem_ly <= 10)
		{
            break;
        } else 
		{
            cout << "\nDiem ly khong hop le. Vui long nhap lai!";
        }
    }
    
	while (true)
	{
        cout << "Nhap diem hoa (0-10): ";
        cin >> ts.diem_hoa;
        if (ts.diem_hoa >= 0 && ts.diem_hoa <= 10) 
		{
            break;
        } else 
		{
            cout << "\nDiem hoa khong hop le. Vui long nhap lai!";
        }
    }
    cin.ignore();
}

//b
	
void tinh_tong_diem(Thisinh &ts)
{	
	if( ts.ma_nganh == 1)
	{
		ts.tong_diem = ts.diem_toan * 2 + ts.diem_ly + ts.diem_hoa;
	}
	else if( ts.ma_nganh == 2)
	{
		ts.tong_diem = ts.diem_toan + ts.diem_ly * 2 + ts.diem_hoa;
	}
	else if(ts.ma_nganh == 3)
	{
		ts.tong_diem = ts.diem_toan + ts.diem_ly + ts.diem_hoa * 2;
	}
	cout<<"\nNhap ket qua: "; 
	cin>>ts.ket_qua;
}

void tinh_tong_diem_mang(Thisinh dsThisinh[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        tinh_tong_diem(dsThisinh[i]);
    }
}

int main()
{
	int n;
	do
	{
		cout<<"Nhap so luong thi sinh: "; cin>>n;
	}
	while(n<=0 || n >= 50 );
	
	Thisinh ds[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"\nThi sinh thu"<<i+1;
		Nhap(ds[i]);
		tinh_tong_diem_mang(ds,n);
	}
	
}


