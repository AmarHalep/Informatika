#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int bodovi = 0;
    int pog_pit = 0;

    //za postavljanje pitanja
    std::cout << "Koji je glavni grad Irske" << std::endl;
    std::cout << "1: Atina" << std::endl;
    std::cout << "2: Dublin" << std::endl;
    std::cout << "3: London" << std::endl;
    std::cout << "4: Helsinki" << std::endl;
    while (i <= 2) {
      //za postavljanje pitanja
      int answer_num = 2;
      int usr_answer;
      //za preuzimanje i poredjenje odgovora
      std::cin >> usr_answer;
      if (usr_answer == answer_num)
        {
          std::cout << "Tacno" << std::endl;
          if (i == 1) {
            pog_pit++;
          }
          bodovi = bodovi + (3 - i);
          i = 4;
          
        }
        else
        {
          std::cout << "Netacno" << std::endl;
          i++;
          
        }
    }



  std::cout << "Koji od sljedecih gradova je na obali" << std::endl;
  std::cout << "1: Podgorica" << std::endl;
  std::cout << "2: Minhen" << std::endl;
  std::cout << "3: Napulj" << std::endl;
  std::cout << "4: Madrid" << std::endl;
  i = 1;
  while (i <= 3) {
    //za postavljanje pitanja
    int answer_num = 3;
    int usr_answer;
    //za preuzimanje i poredjenje odgovora
    std::cin >> usr_answer;
    if (usr_answer == answer_num)
      {
        std::cout << "Tacno" << std::endl;
        if (i == 1) {
          pog_pit++;
        }
        bodovi = bodovi + (3 - i);
        i = 4;
        
      }
      else
      {
        std::cout << "Netacno" << std::endl;
        i++;

      }
  }



  std::cout << "Koji okean je najveci" << std::endl;
  std::cout << "1: Tihi" << std::endl;
  std::cout << "2: Indiski" << std::endl;
  std::cout << "3: Atlantski" << std::endl;
  std::cout << "4: Juzni" << std::endl;
  i = 1;
  while (i <= 3) {
    //za postavljanje pitanja
    int answer_num = 1;
    int usr_answer;
    //za preuzimanje i poredjenje odgovora
    std::cin >> usr_answer;
    if (usr_answer == answer_num)
      {
        std::cout << "Tacno" << std::endl;
        if (i == 1) {
          pog_pit++;
        }
        bodovi = bodovi + (3 - i);
        i = 4;
        
      }
      else
      {
        std::cout << "Netacno" << std::endl;
        i++;

      }
  }



  std::cout << "Koji je najveci grad od nabrojanih" << std::endl;
  std::cout << "1: Sarajevo" << std::endl;
  std::cout << "2: Pariz" << std::endl;
  std::cout << "3: Budimpesta" << std::endl;
  std::cout << "4: Tokio" << std::endl;
  i = 1;
  while (i <= 3) {
    //za postavljanje pitanja
    int answer_num = 4;
    int usr_answer;
    //za preuzimanje i poredjenje odgovora
    std::cin >> usr_answer;
    if (usr_answer == answer_num)
      {
        std::cout << "Tacno" << std::endl;
        if (i == 1) {
          pog_pit++;
        }
        bodovi = bodovi + (3 - i);
        i = 4;
        
      }
      else
      {
        std::cout << "Netacno" << std::endl;
        i++;

      }
  }
 


  std::cout << "Koja drzava ne granici Grcku" << std::endl;
  std::cout << "1: Makedonija" << std::endl;
  std::cout << "2: Albanija" << std::endl;
  std::cout << "3: Bugarska" << std::endl;
  std::cout << "4: Rumunija" << std::endl;
  i = 1;
  while (i <= 3) {
    //za postavljanje pitanja
    int answer_num = 4;
    int usr_answer;
    //za preuzimanje i poredjenje odgovora
    std::cin >> usr_answer;
    if (usr_answer == answer_num)
      {
        std::cout << "Tacno" << std::endl;
        if (i == 1) {
          pog_pit++;
        }
        bodovi = bodovi + (3 - i);
        i = 4;
        
      }
      else
      {
        std::cout << "Netacno" << std::endl;
        i++;

      }
  }
  std::cout << "Imali ste "<< bodovi << " bodova i " << pog_pit << " ste pogodili iz prvog pokusaja" << std::endl;
  
    return 0;
}