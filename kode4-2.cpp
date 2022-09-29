/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int main() {
  int bilangan;
  char huruf;

  // Meminta user untuk memasukkan sebuah bilangan
  cout<<"Masukkan sebuah bilangan bulat: ";  
  cin>>bilangan;

  if ((bilangan > 0) && (bilangan < 10))
    cout<<bilangan
        <<" lebih besar dari nol"
        <<" dan lebih kecil dari sepuluh";
  else
    cout<<bilangan
        <<" dan lebih besar dari sepuluh";
  // Meminta user untuk memasukkan sebuah huruf
  cout<<endl<<endl;
  cout<<"Masukkan sebuah huruf: ";
  cin>>huruf;

  if ((huruf == 'A') || (huruf == 'a') || 
      (huruf == 'I') || (huruf == 'i') ||
      (huruf == 'U') || (huruf == 'u') || 
      (huruf == 'E') || (huruf == 'e') ||
      (huruf == 'O') || (huruf == 'o')) {
    cout<<huruf
        <<" adalah salah satu huruf vokal";
  }
	else
    cout<<huruf
         <<" adalah bukan salah satu huruf vokal";
  return 0;
}
