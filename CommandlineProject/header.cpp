#include "header.h"
class sophuc
{
              int a,b;
    public:
              void getvalue()
              {
                 cout<<"Nhap he so a,b:";
                 cin>>a>>b;
              }
              sophuc operator+(sophuc ob)
              {
                            sophuc t;
                            t.a=a+ob.a;
                            t.b=b+ob.b;
                            return(t);
              }
              sophuc operator-(sophuc ob)
              {
                            sophuc t;
                            t.a=a-ob.a;
                            t.b=b-ob.b;
                            return(t);
              }
              void operator++()
                     {
                               ++a;
                               ++b;
                     }

              void operator--()
                      {
                               --a;
                               --b;
                      }

              void display()
              {
                            cout<<a<<"+"<<b<<"i"<<"\n";
              }
};


void ham_6(){
    sophuc obj1,obj2,result,result1;
    obj1.getvalue();
    obj2.getvalue();
    result = obj1+obj2;
    result1=obj1-obj2;
    cout<<"Gia tri nhap vao:\n";
    obj1.display();
    obj2.display();
    cout<<"Ket qua:";
    result.display();
   result1.display();

}

void ham_1(){
    int a,b;
    cout<<"Nhap hai so nguyen: ";
    cin>>a>>b;
    cout<<"Tong hai so la: "<< a+b;

}
void ham_2(){
    int a,b;
    cout<<"Nhap hai so nguyen: ";
    cin>>a>>b;
    cout<<"Trung binh hai so la: "<< (a+b)/2;
}
void ham_3(){
    float a,b,c;
    cout<<"Nhap van toc ban dau, gia toc va thoi gian: ";
    cin>> a>>b>>c;
    float v = a + b+c;
    cout<<"Van toc cuoi cung la: "<< v;
}
void ham_4(){
    float a,b,c;
    cout<<"Nhap diem kiem tra, diem kiem tra giua ki, diem kiem tra cuoi ki: ";
    cin>>a>>b>>c;
    cout<< "Tong diem la: "<< a+b+c;
}
void ham_5(){
    int x,y;
    cout<<"Nhap hai so nguyen x,y: ";
    cin>>x>>y;
    cout<<"\n";
      int  p=x*y;
      int  s=x+y;
      int  q=s*s+p*(s-x)*(p+y);
      cout<<"Gia tri Total la: "<<q;
      cout<<"\n";
}
void ham_7(){
         sophuc obj;
         obj.getvalue();
         ++obj;
         cout<<"So phuc tang la \n";
         obj.display();
         obj.getvalue();
         --obj;
         cout<<"So phuc giam la \n";
         obj.display();
}
int *findMax(int data[],int n){
  int *max=data;
  int i;
 for(i=1;i<n;i++){
   if(*max<*(max+i)) *max=*(max+i);
  }
  return max;
}
void ham_8(){
    int n,i,*p;
      cout<<"Nhap so du lieu: ";
      cin>>n;
      int arr[n];
      for(i=0;i<n;i++)
      {
        cout<<"Nhap gia tri thu "<<i+1<<" la :";
        cin>>arr[i];
      }
      p=findMax(arr,n);
      cout<<"Gia tri lon nhat la: "<<*p;
}
void ham_9(){

    int arr[5],i;
         int *p=arr;
         cout<<"Nhap 5 so:";
         cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
         cout<<"Cac so ban vua nhap la:\n";
         for(i=0;i<5;i++)
            cout<<arr[i]<<endl;
}
void chuyen_doi(int oct)
{
  long bnum=0;
  int A[6];
  int x;
  int a1,a2,quo,rem;
  a2=oct/10;
  a1=oct-a2*10;
  for( x=0;x<6;x++)
     {
       A[x]=0;
     }
  cout<<"\na1 = "<<a1<<"\na2 = "<<a2;
  cout<<"\nvong 1"<<endl;


  for (x=0;x<3;x++)
    {
       quo=a1/2;
       rem=a1%2;
       A[x]=rem;
       a1=quo;
    }
  cout<<"\nvong 2"<<endl;


  for(x=3;x<6;x++)
   {
      quo=a2/2;
      rem=a2%2;
      A[x]=rem;
      a2=quo;
   }

  for(x=5;x>=0;x--)
   {
     bnum*=10;
     bnum+=A[x];
   }
   cout << "So nhi phan cua so he bat phan " << oct << " la " << bnum << "." << endl;
}
void ham_10(){
    cout << "Nhap mot so he 8 gom hai ky so : ";
    int a;
    cin>>a;
    chuyen_doi(a);
}
void ham_11(){
    int songay,sonam,sotuan,num1;
    cout << "Nhap so ngay can chuyen doi : " << endl;
    cin>>songay;
    sonam=songay/365;
    num1=songay-(sonam*365);
    sotuan=songay/7;
    num1=songay-(sotuan*7);
    cout << " So ngay = " <<songay<< endl;
    cout << " So tuan = " <<sotuan<< endl;
    cout << " So nam = " <<sonam<< endl;
}
void ham_12(){
    char kiemtra;
    cout << "Ban nhap du lieu : " << endl;
    cin>>kiemtra;
    if(((kiemtra>='A')&&(kiemtra<='Z'))||((kiemtra>='a')&&(kiemtra<='z')))
    cout << "Du lieu ban vua nhap " << kiemtra << " la mot ky tu." << endl;
    else if((kiemtra>='0')&&(kiemtra<='9'))
    cout << "Du lieu ban vua nhap " << kiemtra << " la mot ky so." << endl;
    else
    cout << "Du lieu ban vua nhap " << kiemtra << " la mot bieu tuong." << endl;
}
void ham_13(){
    char chucai;
    cout << "Nhap mot chu cai : " << endl;
    cin>>chucai;
    cout << "Chu cai truoc va ke tiep lan luot la: " << endl;
    cout << (char)(chucai-1) << endl;
    cout << (char)(chucai+1) << endl;
}
void ham_14(){
    int luachon;
    float nhietdoc,nhietdof;
    cout << "1. Chuyen doi tu do C sang do F" << endl;
    cout << "2. Chuyen doi tu do F sang do C" << endl;
    cout << "Ban chon giua 1 va 2 : " << endl;
    cin>>luachon;
    if (luachon==1)
    {
    cout << "Nhap do C : " << endl;
    cin>>nhietdoc;
    nhietdof=(1.8*nhietdoc)+32;
    cout << "Do F tuong ung = " << nhietdof << endl;
    }
    else
    {
    cout << "Nhap do F : " << endl;
    cin>>nhietdof;
    nhietdoc=(nhietdof-32)/1.8;
    cout << "Do C tuong ung = " << nhietdoc << endl;
    }
}
void ham_15(){
    char line[80];
    int so_nguyen_am,phuamh,phuamt,nguyenamh,nguyenamt;
    phuamh=phuamt=nguyenamh=nguyenamt=0;
    cout << "Nhap mot cau : " << endl;
    cin.getline(line,80);
    for(int x=0; line[x]!='\0';x++)
       {
       if(line[x]=='A'||line[x]=='E'||line[x]=='I'||line[x]=='O'||line[x]=='U')
             nguyenamh++;
       else if(line[x]=='a'||line[x]=='e'||line[x]=='i'||line[x]=='o'||line[x]=='u')
             nguyenamt++;
       else if(line[x]>+65&&line[x]<=90)
             phuamh++;
       else if (line[x]>=97&&line[x]<=122)
             phuamt++;
       }
    cout << "So phu am la chu hoa = " << phuamh << "." << endl;
    cout << "So phu am la chu thuong = " << phuamt << "." << endl;
    cout << "So nguyen am la chu hoa = " << nguyenamh << "." << endl;
    cout << "So nguyen am la chu thuong = " << nguyenamt << "." << endl;
    so_nguyen_am=nguyenamh+nguyenamt;
    cout << "So nguyen am = " << so_nguyen_am << endl;
}
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
    int row, col, i;
    int sum;
    for (row = 0; row < ROW; row++)
    {
        for (col = 0; col < COL; col++)
        {
            sum = 0;

            for (i = 0; i < COL; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
            *(*(res + row) + col) = sum;
        }
    }
}
void ham_16(){
        int m1,n1,m2,n2,i,j;

        int First[3][3],Second[3][3],Result[3][3];


        ofstream Matrix ("FileMatrix.txt");
        ifstream Matrix1 ("Matrix_1.txt");
        ifstream Matrix2("Matrix_2.txt");
            if(! Matrix1.is_open())
            {
                cout<<"Khong the mo file.\n";
            }
            else {
                Matrix1>>m1;
                Matrix1>>n1;
                for(int i = 0; i < m1; i++)
                {
                    for(int j = 0; j < n1; j++)
                    {
                        Matrix1>>First[i][j];
                    }
                }
            }
        if(! Matrix2.is_open())
        {
            cout<<"Khong the mo file.\n";
        }
        else {
            Matrix2>>m2;
            Matrix2>>n2;
            for(int i = 0; i < m2; i++)
            {
                for(int j = 0; j < n2; j++)
                {
                    Matrix2>>Second[i][j];
                }
            }
        }
            Matrix1.close();
            Matrix2.close();


        if(n1==m2)
        {
            matrixMultiply(First,Second,Result);
            cout<<"Ket qua nhan hai ma tran :\n";
            Matrix<<"Ket qua nhan hai ma tran:\n";
            for(i=0;i<m1;i++)
            {
                for(j=0;j<n2;j++){
                    cout<<*(*(Result + i) + j);
                    cout<<" ";
                }
                cout<<"\n";
            }
            for(i=0;i<m1;i++)
            {
                for(j=0;j<n2;j++){
                    Matrix<<*(*(Result + i) + j);
                    Matrix<<" ";
                }
                Matrix<<"\n";
            }

        }
        else
        {
           cout<<"Khong the nhan ma tran";
        }
        Matrix.close();
}

void ham_17(){

      int  n;
      long last=1,next=0,sum;
      cout<<"Nhap mot so :";
      cin>>n;
      while(next<n/2)
      {
       cout<<last <<"  ";
       sum=next+last;
       next=last;
       last=sum;
      }
}
