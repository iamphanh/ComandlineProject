#include "header.h"
int main()
{
    cout<<"\n\n";
    cout<<"---------------------PROJECT 1--------------------------"<<endl;
    cout<<"       1.Tinh tong hai so nguyen"<<endl;
    cout<<"       2.Tinh trung binh hai so"<<endl;
    cout<<"       3.Tim van toc cuoi cung"<<endl;
    cout<<"       4.Tinh tong diem thi cuoi ky"<<endl;
    cout<<"       5.Tinh total"<<endl;
    cout<<"       6.Cong hai so phuc"<<endl;
    cout<<"       7.Hien thi so phuc"<<endl;
    cout<<"       8.Tim gia tri lon nhat cua tap du lieu"<<endl;
    cout<<"       9.In cac phan tu cua mang"<<endl;
    cout<<"       10.Chuyen so tu bat phan sang nhi phan"<<endl;
    cout<<"       11.Xac dinh ngay thang nam"<<endl;
    cout<<"       12.Kiem tra so, ki tu"<<endl;
    cout<<"       13.Xac dinh vi tri chu cai"<<endl;
    cout<<"       14.Chuyen doi nhiet do"<<endl;
    cout<<"       15.Xac dinh thanh phan trong cau"<<endl;
    cout<<"       16.In 2 ma tran "<<endl;
    cout<<"       17.Tinh so fibonaci"<<endl;
    cout<<"\n\n>>> Hay nhap mot lua chon: ";

    clock_t start, end;
    double var;
    int a;
    cin >>a;
    ofstream timE ("FileTime.txt");
    switch (a) {

        case 1:
                start = clock();
                ham_1();
                end = clock();

          break;
        case 2:
                start = clock();
                ham_2();
                end = clock();

          break;
        case 3:
                start = clock();
                ham_3();
                end = clock();

          break;
        case 4:
                start = clock();
                ham_4();
                end = clock();

          break;
        case 5:
                start = clock();
                ham_5();
                end = clock();

            break;
        case 6:
               start = clock();
                ham_6();
                end = clock();

            break;
        case 7:
                start = clock();
                ham_7();
                end = clock();

            break;
        case 8:
                start = clock();
                ham_8();
                end = clock();

            break;
        case 9:
                start = clock();
                ham_9();
                end = clock();

            break;
        case 10:
                start = clock();
                ham_10();
                end = clock();

            break;
        case 11:
                start = clock();
                ham_11();
                end = clock();

            break;
        case 12:
                start = clock();
                ham_12();
                end = clock();

        case 13:
               start = clock();
                ham_13();
                end = clock();

            break;
        case 14:
               start = clock();
                ham_14();
                end = clock();

            break;
        case 15:
               start = clock();
                ham_15();
                end = clock();

            break;
        case 16:
                start = clock();
                ham_16();
                end = clock();

            break;

        default:
           start = clock();
           ham_17();
           end = clock();

        }

    var = ((double)(end - start) / CLOCKS_PER_SEC)/1000000;
    cout<< " \nThoi gian thuc hien bai toan: "<< var;
    cout<<"\n";
    timE<<"Thoi gian thuc hien bai toan: "<<var;
    timE.close();
        return 0;
}










