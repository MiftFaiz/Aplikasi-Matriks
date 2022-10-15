#include <iostream>
#include <stdlib.h>
#include<math.h>
using namespace std;

void penjumlahan()
{	 				
			int m,n;
			cout<< "Jumlah matriks : ";
			cin >> m;
			cout<< "Ordo (kolom & baris) Matriks : ";
			cin >> n;
			int a[n][n], b[n][n], c[n][n];
			
			
			cout<< endl << "MATRIKS ke-1" << endl;
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<< "Matriks" << i+1 << j+1 << " : ";
					cin >> a[i][j];
				}
			}
			
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<a[j][j] << " ";
				}
				cout<<endl;
			}
			
			cout<< endl;
			
			for (int k=1; k<m; ++k){
				cout<< "MATRIKS ke-" << k+1 << endl;
				for (int i=0; i<n; ++i){
					for (int j=0; j<n; ++j){
						cout<< "Matriks" << i+1 << j+1 << " : ";
						cin >> b[i][j];
						a[i][j]=a[i][j]+b[i][j];
					}
				}
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<b[i][j] << " ";
				}
				cout<<endl;
			}
				cout<< endl;
			}
			
			cout<< "Hasil penjumlahan dari "<<m<<" matriks berordo "<<n<<"x"<<n<<" adalah: " << endl;
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<a[i][j] << " ";
				}
			cout<<endl;
			}
		cout<<endl;
}

void pengurangan()
{	 				
 			int m, n;
			cout<< "Jumlah matriks : ";
			cin >> m;
			cout<< "Ordo (kolom & baris) Matriks : ";
			cin >> n;
			int a[n][n], b[n][n], c[n][n];
			
			cout<< endl << "MATRIKS ke-1" << endl;
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<< "Matriks" << i+1 << j+1 << " : ";
					cin >> a[i][j];
				}
			}
			
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<a[j][j] << " ";
				}
				cout<<endl;
			}
			
			cout<< endl;
			
			for (int k=1; k<m; ++k){
				cout<< "MATRIKS ke-" << k+1 << endl;
				for (int i=0; i<n; ++i){
					for (int j=0; j<n; ++j){
						cout<< "Matriks" << i+1 << j+1 << " : ";
						cin >> b[i][j];
						a[i][j]=a[i][j]-b[i][j];
					}
				}
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<b[i][j] << " ";
				}
				cout<<endl;
			}
				cout<< endl;
			}
			
			cout<< "Hasil pengurangan dari "<<m<<" matriks berordo "<<n<<"x"<<n<<" adalah: " << endl;
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<a[i][j] << " ";
				}
			cout<<endl;
			}
		cout<<endl;		
}

void perkalian()
{
 			int m, n, a[n][n], b[n][n], c[n][n];
			cout<< "Jumlah matriks : ";
			cin >> m;
			cout<< "Ordo (kolom & baris) Matriks : ";
			cin >> n;
			
			cout<< endl << "MATRIKS ke-1" << endl;
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<< "Matriks" << i+1 << j+1 << " : ";
					cin >> a[i][j];
				}
			}
			
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<a[j][j] << " ";
				}
				cout<<endl;
			}
			
			cout<< endl;
			
			for (int k=1; k<m; ++k){
				cout<< "MATRIKS ke-" << k+1 << endl;
				for (int i=0; i<n; ++i){
					for (int j=0; j<n; ++j){
						cout<< "Matriks" << i+1 << j+1 << " : ";
						cin >> b[i][j];
					}
				}
				
				for (int i=0; i<n; ++i){
					for (int j=0; j<n; ++j){
						c[i][j]=0;
						for (int k=0; k<n; ++k){
							c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
						}
					}
				}				
				
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<b[i][j] << " ";
					a[i][j]=c[i][j];
				}
				cout<<endl;
			}
				cout<< endl;
			}
			
			cout<< "Hasil perkalian dari "<<m<<" matriks berordo "<<n<<"x"<<n<<" adalah: " << endl;
			for (int i=0; i<n; ++i){
				for (int j=0; j<n; ++j){
					cout<<c[i][j] << " ";
				}
			cout<<endl;
			}
		cout<<endl;
}
int determinant( int matrix[10][10], int n) {
   int det = 0;
   int submatrix[10][10];
   if (n == 2)
   return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatrix[subi][subj] = matrix[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * matrix[0][x] * determinant( submatrix, n - 1 ));
      }
   }
   return det;
}

int det() {
   int n, i, j, x;
   int matrix[10][10];
   cout << "Enter the size of the matrix:\n";
   cin >> n;
   cout << "Enter the elements of the matrix:\n";
   for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
   cin >> matrix[i][j];
   cout<<endl<<"The entered matrix is:"<<endl;
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++)
      cout << matrix[i][j] <<" ";
      cout<<endl;
   }
   cout<<endl<<"Determinant of the matrix is "<< determinant(matrix, n)<<endl;
   return 0;
}
void invers()
{
	int a[10][10], b[10][10], bar1, kol1, i, j, k;
	float det,inv[10][10];

	bar1=2;
	kol1=2;
	
	    // Memasukkan Nilai Matriks.
    cout << endl << "MATRIKS:" << endl;
    for(i = 0; i < bar1; ++i)
        for(j = 0; j < kol1; ++j)
        {
            cout << "Matriks" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

	//Proses
	det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	
	//Pembalikan
	b[i][j];
	b[0][0]=a[1][1];
	b[1][1]=a[0][0];
	b[0][1]=-1*a[0][1];
	b[1][0]=-1*a[1][0];
	
	//invers
    for(i = 0; i < bar1; ++i)
    for(j = 0; j < kol1; ++j)
    {
    	inv[i][j]=1/det*b[i][j];
    }	
	
	//Menampilkan
	cout << endl << "Hasil Invers: " << endl;
    for(i = 0; i < bar1; ++i)
    for(j = 0; j < kol1; ++j)
    {
    	cout << " " << inv[i][j];
    	if(j == kol1-1)
        cout << endl;
    }
	cout<<endl;	
}

int main()//Program Utama
{
menu:
system("CLS");
int pil;
cout<<"********  program by: Ahmad Fauza Aulia  ********"<<endl;
cout<<"-----------------  4611417038  ------------------"<<endl;
cout<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"     >>  PROGRAM PERHITUNGAN MATRIKS  <<"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"====================PILIHAN======================"<<endl;
cout<<"|    1. Penjumlahan Matriks 			|"<<endl;
cout<<"|    2. Pengurangan Matriks 			|"<<endl;
cout<<"|    3. Perkalian matriks   			|"<<endl;
cout<<"|    4. Determinan matriks			|"<<endl;
cout<<"|    5. Invers matriks 2x2			|"<<endl;
cout<<"|    6. Keluar Program				|"<<endl;
cout<<"================================================="<<endl;
cout<<"Masukkan pilihan (1/2/3/4/5/6): ";
cin>>pil;

switch(pil)
{
case 1:
//perintah pilihan 1
				system("CLS");
				cout<<"------------------------------------------------"<<endl;
				cout<<"   >>  Anda memilih Penjumlahan Matriks  <<"<<endl;
				cout<<"------------------------------------------------"<<endl;
			    penjumlahan();
			    system ("PAUSE");	
				goto menu;
          break;

case 2:
//Perintah pilihan 2
				system("CLS");
				cout<<"------------------------------------------------"<<endl;
				cout<<"   >>  Anda memilih Pengurangan Matriks  <<"<<endl;
				cout<<"------------------------------------------------"<<endl;
				pengurangan();
				system ("PAUSE");
				goto menu;
          break;
          
case 3:
//Perintah pilihan 3
				system("CLS");
				cout<<"------------------------------------------------"<<endl;
				cout<<"    >>  Anda memilih Perkalian Matriks  <<"<<endl;
				cout<<"------------------------------------------------"<<endl;
				perkalian();
				system ("PAUSE");
				goto menu;
          break;

case 4:
//Perintah pilihan 4
				system("CLS");
		  		det();
			    system ("PAUSE");
			    goto menu;
          break;

case 5:
//Perintah pilihan 5
				system("CLS");
				cout<<"------------------------------------------------"<<endl;
		  		cout<<"    >>  Anda memilih Invers Matriks 2x2  <<"     <<endl;
				cout<<"------------------------------------------------"<<endl;
				invers();
				system ("PAUSE");
				goto menu;
          break;
case 6:
//Perintah pilihan 6
		  system("CLS");
		  cout<<"------------------------------------------------"<<endl;
		  cout<<"    >>  Anda telah keluar dari program  <<  "<<endl;
		  cout<<"------------------------------------------------"<<endl;
          break;
default:
		  system("CLS");
		  cout<<"------------------------------------------------"<<endl;
          cout<<"        >> Tidak ada dalam pilihan  <<  "<<endl;
		  cout<<"------------------------------------------------"<<endl;
          system ("PAUSE");
		  goto menu;
          break;
}
}
