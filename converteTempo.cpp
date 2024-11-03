#include <iostream>

void converte_tempo(int segundos, int *hor, int *min, int *seg){
  *min = segundos / 60;
  *seg = segundos % 60;
  *hor = *min / 60;
  *min = *min % 60;
}

int main()
{
  int tempo, h, m, s;
  std::cin >> tempo;

  converte_tempo(tempo, &h, &m, &s);
   
  std::cout << h << ":" << m << ":" << s;
   
  return 0;
}