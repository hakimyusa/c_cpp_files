#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

char Map[10][10] = {"#########",
                    "#   #  !#",
                    "##### ###",
                    "##    # #",
                    "## #### #",
                    "#  #    #",
                    "# #     #",
                    "#@#     #",
                    "#########"};
int Gamespeed = 100;
int Level = 0;
bool stopgame = false;

int main ()
{
    
    while (stopgame == false && Level==0)
    {
          system("cls");
          for (int y= 0;y<10;y++)
          {
              cout << Map[y] << endl;
          }
          for (int y= 0;y<10;y++)
          {
              for (int x = 0; x<10; x++)
              {
                  switch (Map[y][x])
                  {
                      case '#':
                      {
                          Map[y][x] = 219;
                      }break;
                     case '@':
                     {
                          
                          if (GetAsyncKeyState(VK_UP) !=0)
                          {
                               int y2 = (y-1);
                              switch(Map[y2][x])
                              {
                                  case ' ' :
                                  {
                                        Map[y][x] = ' ';
                                        y-=1;
                                        Map[y2][x]='@';
                                  } break;
                                  case '!' :
                                  {
                                       Level = 1;
                                  } break;
                              }
                          }
                          if (GetAsyncKeyState(VK_DOWN) !=0)
                          {
                                   int y2 = (y+1);
                                  switch(Map[y2][x])
                                  {
                                      case ' ' :
                                      {
                                            Map[y][x] = ' ';
                                            y+=1;
                                            Map[y2][x]='@';
                                      } break;
                                        case '!' :
                                  {
                                       Level = 1;
                                  } break;
                                  }
                          }
                           if (GetAsyncKeyState(VK_RIGHT) !=0)
                          {
                                   int x2 = (x+1);
                                  switch(Map[y][x2])
                                  {
                                      case ' ' :
                                      {
                                            Map[y][x] = ' ';
                                            x+=1;
                                            Map[y][x2]='@';
                                      } break;
                                      case '!' :
                                      {
                                      Level = 1;
                                      } break;
                                  }
                          }
                          if (GetAsyncKeyState(VK_LEFT) !=0)
                          {
                                   int x2 = (x-1);
                                  switch(Map[y][x2])
                                  {
                                      case ' ' :
                                      {
                                            Map[y][x] = ' ';
                                            x-=1;
                                            Map[y][x2]='@';
                                      } break;
                                        case '!' :
                                      {
                                           Level = 1;
                                      } break;
                                  }
                          }
                          
                     }break;
                  }
              }
          }
          Sleep(Gamespeed);
    }
    while  (stopgame == false && Level==1)
    {
      system ("cls");
      cout << "Level 2 Goes Here" << endl;
      system("pause"); 
      return EXIT_SUCCESS;       
    }
    exit (1);
    getch ();
}

