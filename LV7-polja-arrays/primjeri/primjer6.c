#include <stdio.h>
#define VEL 10

/* Deklarirati  i  inicijalizirati  polje  od  10  realnih  brojeva.  Sortirati  polje  od  najvećeg  prema 
najmanjem i ispisati ga takvog na ekran. */

int main(void) {

  float a[VEL] = { 1.2, 0.4, -2.5, 6.2, 2.45, -2.67, 9.34, 2000.25, -921.32, 0 };
  float priv;
  int i, f;
  
  // ovjde trazimo preko bubble sorta
  /* koristimo varijablu f da bi utvrdili jesmo napravili zamjenu ako je f = 1 onda je zamjena ucinjena ako je f = 0 onda nije ucinjena */

  // ako se ne dogodi zamjena onda nastavljamo sa programom
  /* a[VEL] = { 1.2, 0.4, -2.5, 6.2, 2.45, -2.67, 9.34, 2000.25, -921.32, 0 }; 
    uzimamo prvo vrijednost na nultom mjestu polja a[0] jer je i prvo 0
    usporedujemo ga sa vrijednosti na mjestu polja a[i + 1] sto bi znacilo a[1]
    a[0] = 1.2 a[1] = 0.4 
    vidimo da je 1.2 nije manje od 0.4 sto bi znacilo da nam f ostaje 0 i ne radimo zamjenu

    nakon toga prelazimo na i = 1 jer nam je uvjet i++ nakon svake iteracije
    a[1] = 0.4, a[i + 1] = a[2] = -2.5
    takoder nam je a[i] veci od a[i + 1] tako da i ovjde ne vrsimo zamjenu i f nam je 0 i dalje

    idemo dalje na i = 2 
    a[i] = a[2] = -2.5, a[i + 1] = a[3] = 6.2
    ovjde vidimo da nam je a[i] manji od a[i + 1]
    jer je -2.5 < 6.2 
    u ovom slucaju priv varijabla prima vrijednost -2.5 (a[i] iliti a[2])
    na mjesto a[2] stavljamo vrijednost a[3] sto znaci da nam je a[2] sada 6.2
    na mjesto a[3] stavljamo vrijednost priv varijable koja je -2.5
    sto znaci da je sada a[3] = -2.5 i ovdje nam f postaje 1 sto znaci da se dogodila zamjena
    u sljedecoj iteraciji f se vraca na 0
    nakon toga opet se dogada i++ i prolazi se kroz istu provjeru kao i u prethodnim slucajevima
    kada dodemo do zadnjeg mjesta tj a[10] on se nema sa kime usporedit jer a[11] ne postoji te f = 0
    i dobijamo niz koji je poslozen od najveceg prema najmanjem
  */
  do {
    f = 0;
    for (i = 0; i < VEL - 1; i++) {
      if (a[i] < a[i + 1]) {
        priv = a[i];
        a[i] = a[i + 1];
        a[i + 1] = priv;

        f = 1;
      }
    }
  } while (f == 1);

  // ispisujemo novonastali niz
  for (i = 0; i < VEL; i++) {
    printf("%f ", a[i]);
  }

  return 0;
}