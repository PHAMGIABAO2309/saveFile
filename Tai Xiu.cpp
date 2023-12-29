
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#define max 99

int ketqua()
{
 srand((unsigned int)time(NULL));
 int kqua=rand()%max+1;
        return kqua;
}

void luachon2(int &m)
{
 	do
	{
 		cout<<"\n Ban chon: "; cin>>&m;
 		if (m<3 || m>4)
		{
			cout<<" Hay nhap lai ! Chon 3(tai) hoac 4(xiu)\n");
 		}
 	} while (m<3|| m>4);
 	switch(m)
 	{
 		case 3:
		 	cout<<"(tai)\n";
			 break; 
 		case 4:
		 	cout<<"(xiu)\n";
			 break;
 	}
}

void luachon(int &n)
{
 	do
	{
		cout<<"\nBan chon: "; cin>>&n;
 		if (n<1 || n>2)
   		{
 			cout<<"Hay nhap lai ! Chon 1(le) hoac 2(chan)\n";
       	}
   } while (n<1|| n>2);
 	switch(n)
 	{
 		case 1:
		 	cout<<"(le)\n";
			break; 
 		case 2:
		 	cout<<"(chan)\n";
			break;
 	}
}
void menu2()
{
 	cout<<"\n3.Tai (50...99)";
 	cout<<"\n4.Xiu (1...49)";
}

void menu()
{
 	cout<<"\n1.Le (1,3,5,7,9)\n";
 	cout<<"2.Chan (0,2,4,6,8)\n";
}

int main()
{
 	int n,m;
 	int cuoc,cuoc2, tien=5000;
 	do
	{
 		cout<<"Chuong trinh so xo giai tri \n";
 		cout<<"Moi ban du doan \n";
		cout<<"\nBan dang co: %d xu",tien;
 		menu(); //menu chẳn lẻ
		luachon(n); // chọn chẵn or lẻ
 do{ 
 printf("Muc cuoc (xu): "); // cược tiền chẵn lẻ 
 scanf("%d",&cuoc); 
 if (cuoc>tien)
 {
 printf("So tien cuoc <= So tien cua ban\n");
 }
 } while (cuoc>tien);
 

 menu2();  // menu tài xỉu
 luachon2(m); // chọn tài or xỉu
 
 int tien2=tien-cuoc; // số tiền còn lại sau khi cược chẵn lẻ 
 do{ 
    printf("Muc cuoc (xu): ");  // cược tiền tài xỉu
 scanf("%d",&cuoc2);
 if (cuoc2>tien2)
 {
 printf("So tien cuoc <= So tien cua ban\n");
 }
    } while (cuoc2>tien2);
 
 
 int kq=ketqua(); // gán kết quả xổ sổ  
 
 printf("\nCon so may man la : %d\n",kq); // thông báo kết quả xổ sổ
 
 int o,h; 
 // kiểm tra chẵn lẻ 
 if (kq%2==1) 
 {
 printf("Le ");
 o=1;
 }
 else 
 {
 printf("Chan ");
     o=2;
 }
 // thông báo kết quả thắng thua chẵn lẻ 
 if (n==o)
 {
 tien=tien+cuoc;
 printf("(WIN) +%d xu\n",cuoc);
 }
 else
 {
 tien=tien-cuoc;
 printf("(LOST) -%d xu\n",cuoc);
 }
 
 // kiểm tra tài xỉu 
 if (kq>=50) 
 {
 printf("Tai ");
 h=3;
 }
 else 
 {
 printf("Xiu ");
 h=4;
 } 
 
 // thông báo kết quả thắng thua tài xỉu
 if (m==h) //nếu cuoc2 trùng giá trị h thì thực hiện lệnh
 {
 tien=tien+cuoc2;
 printf("(WIN) +%d xu\n",cuoc2);
 printf("Ban dang co: %d xu",tien);
 }
 else
 {
 tien=tien-cuoc2;
 printf("(LOST) -%d xu\n",cuoc2);
 printf("Ban dang co: %d xu",tien);
 }
 
 
    getch();
 system("cls");
 } while (true);
}