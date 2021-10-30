#include<conio.h>
#include <stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX 100
#define MAXMenu 8

typedef struct ttDate
{
    unsigned int Ngay;
    unsigned int Thang;
    unsigned int Nam;
}Date;

struct ttSinhVien
{
    char ID[10];
    char hoSV[11];
    char tenLot[21];
    char tenSV[11];
    ngaySinh Date;
    unsigned char gioiTinh[5];
    char email[31]
      
}SV;


typedef struct ttDiemSinhVien
{
    float diemQT;
    float diemCong;
    float diemTH;
    float diemLT;
    float diemTK;  
}DiemSV;
void HienThiMenu();
int ChonMenu();
void ThucHienMenu();
void Nhap1SV(SV &x);
void NhapSV(SV a[], int ID, int n);

void NhapSV(SV a[], int ID, int n)
{
    printf("Nhap ID sinh vien: ");
	scanf("%d", &SV.ID);
	nhapHoTen(&SV.hoVaTen);
	printf("Gioi tinh: ");
	scanf("%s", sv.gioiTinh);
	nhapDiem(&SV.DiemSV);
    printf("Email cua sinh vien: ");
    gets(email);
	return sv;
}

void nhapHoTen(SV) {
	                    printf("Ho sinh vien: ");
	                    scanf("%s", tenSV->hoSV);
	                    printf("Ten lot sinh vien: ");
	                    getchar();
	                    gets(tenSV->tenLot);
	                    printf("Ten sinh vien: ");
	                    scanf("%s", tenSV->tenSV);
                    }

void nhapDiem(DiemSV) {
	                        printf("DIem thuc hanh: ");
	                        scanf("%f", &DiemSV->diemTH);
	                        printf("Diem ly thuyet: ");
	                        scanf("%f", &DiemSV->diemLT);
	                        printf("Diem qua trinh: ");
	                        scanf("%f", &DiemSV->diemQT);
                            printf("Diem cong: ");
                            scanf("%d", &DiemSV->diemCong);
                            printf("Diem tong ket: ")
	                        DiemSV -> diemTK = (DiemSV -> diemTH + DiemSV -> diemLT + DiemSV -> DiemQT + DiemSV-> diemCong) / 4;
                        }

void HienThiMenu()
{
    char menu[][8] =   {
                            printf("CHUONG TRINH QUAN LY SINH VIEN\n");
                            printf("*************************MENU**************************\n");
                            printf("**  1. Them sinh vien.                               **\n");
                            printf("**  2. Cap nhat thong tin sinh vien theo ID.         **\n");
                            printf("**  3. Xoa sinh vien theo ID.                        **\n");
                            printf("**  4. Tim kiem sinh vien theo ten.                   **\n";                                
                            printf("**  5. Sap xep sinh vien theo ten.                   **\n");
                            printf("**  6. Hien thi danh sach sinh vien.                 **\n");
                            printf("**  7. Sap xep sinh vien theo diem trung binh        **\n");
                            printf("**  8. Diem trung binh va hoc luc cua sinh vien      **\n");                                
                            printf("*******************************************************\n");
                            printf("Nhap tuy chon: ", key);                        
                            for(int i=0; i<MAXMenu; i++)
                            {
                                printf("%s\n", menu[i]);
                            }
                        }      
}

int ChonMenu()
{
    int chon;
    HienThiMenu();
    do
    {
        printf("vui long chon chuc nang: %d", MAXMenu);
        scanf("%d", &chon);
        if(chon<1||chon>MAXMenu)
            printf("VUI LONG NHAP LAI CHUC NANG!!!");
        else
            break;
    }while (true);
    return chon;
}

void ThucHienMenu()


{
    int chon;
    do
    {
        chon=ChonMenu();
        switch(chon)    {
                            case 1:
                            		sv = nhapSV();
				                    dssv[slsv++] = sv;
				                    break;
				
                        }   
    }while(chon!=MAXMenu);
    printf("\nKET THUC CHUONG TRINH\n")
}

int main()
{
    ChonMenu();
    return 0;
}
