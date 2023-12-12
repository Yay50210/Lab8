#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  
    if(rank== 'S') cout << "You have received Super Ultra Rare Unit!!!\n"<< "You have received 5 gems.\n"<< "You have received 1 gems.\n"<<"You have received 2000 coins.\n"<< "You have received very KAK items.\n";
     
    if( 'A'==rank) cout << "You have received 5 gems.\n"<< "You have received 1 gems.\n"<<"You have received 2000 coins.\n"<< "You have received very KAK items.\n";
     
    if('B'==rank) cout << "You have received 1 gems.\n"<<"You have received 2000 coins.\n"<< "You have received very KAK items.\n";
    
    if( 'C'==rank) cout << "You have received 2000 coins.\n"<< "You have received very KAK items.\n";
    
    if ('D'==rank) cout << "You have received very KAK items.\n";
  
  return 0;
}
